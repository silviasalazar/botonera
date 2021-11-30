//Botonera
//#include <Mouse.h>//libreria a utilizar
#include <Mouse.h>

// Les asigno  el pin a mis 5 botones:

const int upButton = 2;//arriba

const int downButton = 3;//abajo

const int leftButton = 4;//izquierda

const int rightButton = 5;//derecha

const int mouseButton = 6;//Click izquierdo

const int mouseRigthButton = 8;//click derecho

const int scrollup = 7;//scroll hacia arriba

const int scrolldown = 9;//scroll hacia abajo

int range = 5;              //Salida de rango de X lo Y  de movimiento, afecta la velocidad de movimiento
int responseDelay = 10;     //Tiempo de respuesta en milisegundos 
int responseDelayScroll = 25; //Tiempo de respuesta en milisegundos  del scroll(esque iba muy rapido)

void setup() {//Codigo que solo se inicia una vez

  //Inicializo los botones de entrada 


  pinMode(downButton, INPUT);

  pinMode(leftButton, INPUT);

  pinMode(rightButton, INPUT);

  pinMode(mouseButton, INPUT);

  pinMode(mouseRigthButton, INPUT);

  pinMode(scrollup, INPUT);

  pinMode(scrolldown, INPUT);

  digitalWrite(7, LOW);//Le digo el pin y estado inicial
  // Inicializo el uso de la libreria:

  Mouse.begin();
}

void loop() {//Codigo que se inicia en loop

  // Lectura de los estados de los botones(high o down):

  int upState = digitalRead(upButton);

  int downState = digitalRead(downButton);

  int rightState = digitalRead(rightButton);
  pinMode(upButton, INPUT);

  int leftState = digitalRead(leftButton);

  int clickState = digitalRead(mouseButton);

  int clickRightState = digitalRead(mouseRigthButton);

  int scrollupState = digitalRead(scrollup);

  int scrolldownState = digitalRead(scrolldown);

  // calculate the movement distance based on the button states:

  int  xDistance = (leftState - rightState) * range;

  int  yDistance = (upState - downState) * range;

  // Si X o Y son distintos de cero, move:

  if ((xDistance != 0) || (yDistance != 0)) {

    Mouse.move(xDistance, yDistance, 0);

  }


  // Si el boton esta siendo presionado:
  if (clickState == HIGH) {

    // Si no esta siendo presionado ,  presiónelo:

    if (!Mouse.isPressed(MOUSE_LEFT)) {

      Mouse.press(MOUSE_LEFT);

    }

  }//fin if click state

  // de lo contrario, no se presiona el botón del mouse:

  else {

// si se presiona el mouse, suéltelo:

    if (Mouse.isPressed(MOUSE_LEFT)) {

      Mouse.release(MOUSE_LEFT);

    }

  }

//Condicionales para movimiento del scroll respecto al pin digital que los ponga
  if (digitalRead(8) == HIGH) {//Es el pin digital del scroll up si lo cambias cambias este parametro 
    Mouse.move(xDistance, yDistance, 1);
    delay(responseDelayScroll);
  }
    if (digitalRead(7) == HIGH) {//Es el pin digital del scroll up si lo cambias cambias este parametro 
    Mouse.move(xDistance, yDistance, -1);
    delay(responseDelayScroll);
  }


//Codigo para click derecho que esta en el pin digital 9 del arduino
  if(digitalRead(9) == HIGH)
  {
        // Si no esta siendo presionado ,  presiónelo:

    if (!Mouse.isPressed(MOUSE_RIGHT)) {

      Mouse.press(MOUSE_RIGHT);
    
     }
  }
  
  else {

// si se presiona el mouse, suéltelo:

    if (Mouse.isPressed(MOUSE_RIGHT)) {

      Mouse.release(MOUSE_RIGHT);

    }

  }
  
  //Llamo a mi funcion de retardo en respuesta para que no se mueva muy rapido :
  delay(responseDelay);
}