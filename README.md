# botonera
Botonera alambrica para usuarios con discapacidades automotrices
<h1>Prototipo de mouse para computadoras como herramienta tecnológica en la enseñanza de usuarios con discapacidad motriz</h1>
<h3>Abstracto</h3>
<p>Los gadgets de  Human Interface Device(HID) están especificados para personas con discapacidades motrices normalmente tienen características particulares de paciente  a paciente, no obstante existen bases de las cuales se  parte para crear dispositivos a partir del software de Arduino programado en C++ así como sus placas de hardware genéricas y no genéricas con conexiones optimizando la creación de HID,  con ello se pueden realizar investigación de hardware y software. 
</p>

<h3>1. INTRODUCCIÓN</h3>
<p>
  Los gadgets para personas con discapacidades motrices surgen desde que existe la necesidad y las bases para crearlos, teniendo esto en mente sabemos que en la actualidad existen múltiples de ellos para diferentes casos, aunque con finalidades parecidas en las que el usuario pueda hacer uso de las tecnologías actuales sin importar su incapacidad motriz, en consideración de esto es donde inicia la problemática de a tratar del proyecto.

</p>
<h4>1.1 ¿Qué es? </h4>
<p>
Empecemos por lo más sencillo;  explicando qué es esto, un gadget es un dispositivo que tiene un propósito y una función específica, generalmente de pequeñas proporciones, práctico y a la vez novedoso. Los gadgets suelen tener un diseño más ingenioso que el de la tecnología corriente.[4] En nuestro caso, es un mouse dividido en 1 acción por botón, con las direcciones de cruceta, al igual que clic izquierdo, clic derecho, scroll  hacia  arriba y  abajo, esto incrustado en una estructura tipo gabinete inclinado  de 23x23 cm de base con en la cual cada función es fácilmente diferenciable por el usuario y con una separación,  con este gadget aunque no ideal para todo tipo casos de enfermedades motrices, para ciertos usuarios que sufren de afecciones tales como la tetraparesia o cuadriparesia   llega a ser funcional artilugios especiales  para poder hacer uso de la computadora. El resto de la documentación del proyecto está organizado como sigue. En la Sección 2 se presentan los objetivos en el 3 el desarrollo del proyecto, en la sección 4 y 5 la creación del hardware y software respectivamente, en la 6 como se implementó un desarrollo en base a prototipos y en la sección 6 las conclusiones que dejó el desarrollo de este proyecto.
</p>

<h3>2. ÁREA</h3>
<p>
 Este proyecto está enfocado especialmente en  hardware centrado en el área educativa,  siendo un dispositivo controlador tipo mouse que sirve para el  desarrollo de las habilidades en el uso  de la computadora para usuarios con problemas motrices.
</p>


<h3>3. OBJETIVOS</h3>

Los objetivos planteados son:
- Creación de un gadget que emule las funcionalidades de un mouse en base a botones de una sola acción.
- Hacerlo lo suficientemente general para que sea fácilmente modificable.
- Poder crear documentación necesaria para su fácil replicación.
- Que sea de un costo accesible.


<h3>4. DESCRIPCIÓN GENERAL DE LA PROBLEMÁTICA ESPECIFICADA</h3>
<p>
Actualmente existen variedad de dispositivos para usuarios con discapacidades motrices, no obstante generar uno que aplique a la mayoría de casos resulta poco práctico por no decir imposible dada la variedad de padecimientos  e intensidades de los mismos, con ello nos concentramos en un solo dispositivo de inclusión con el objetivo de poder innovar y poder sentar guias practicas para que nuestro proyecto pueda  ser fácilmente emulable y modificable y así adaptarse a las necesidades que tenga el usuario final si  comprometerse a una arquitectura fija.

</p>


<h3>5. RESULTADOS QUE SE ESPERAN ALCANZAR CON EL DESARROLLO DEL PROYECTO</h3>
<p>
Entre los resultados que se esperan obtener  es que al ser un proyecto altruista sea accesible para las personas que tengan discapacidades motrices y no cuenten con los recursos necesarios para tener este tipo de dispositivos en sus hogares y les impida poder usar dispositivos básicos como suele ser una computadora.
</p>

<h3>6. REQUERIMIENTOS ESPECIALES</h3>
<p>
El desarrollo del proyecto se dividió en dos partes, la parte del hardware que sería nuestro gabinete, circuito, armado, y la parte del software que trabajamos en el IDE de Arduino, consistió en 3  prototipos y el prototipo 4 que es en el que se está trabajando actualmente, utilizando la metodología de prototipado escalonadamente añadiendo funcionalidades en cada uno de ellos, teniendo más semejanza a un producto final con cada una de las iteraciones.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f1.PNG)


*<h4>6.1 Uso de Chip ATMEGA 32U4 en arduino “micro pro” o “Leonardo”</h4>*
<p>
El chip ATMEGA 32u4( el cual se ve en la Figura 1) cuenta con varias particularidades, aunque por la finalidad de este proyecto nos centraremos en una, y es la de hacer que la computadora que ya tenga un sistema operativo Mac o Windows lo reconozca como un Dispositivo de Interface Humana o por sus siglas en inglés HID (Human Interface Device) pudiendo emular ya sea un mouse, teclado o joystick, esto siendo idóneo para la funcionalidad del proyecto que es la emulación de un mouse.
 
</p>



<p>
Teniendo el gabinete ocupas una tapadera con las perforaciones de los botones, esto dependerá de los botones que se utilicen en nuestro caso utilizamos 8 botones (como  se ve en la Figura 3) que en un principio trabajamos en papel cascaron para hacer las pruebas del dispositivo.
</p>

<h3>7. ESTADO DE LA TÉCNICA</h3>
<p>
 Nuestro proyecto tiene precedentes dispersos, en los cuales no se suele especificar puntos  claves como guía para recrearse, manual, codigo, especificaciones técnicas, están casos como [6] donde se muestra una botonera, como un producto con cotización y que es lo que hace, pero con algo en común con otras publicaciones similares, falta de documentación como los puntos clave antes mencionados, que hacen que gadgets como estos de necesidad general para que gente que adolece patologías motrices  sean considerablemente confuso y difícil emularse para que cualquiera que los necesite pueda replicarlos  adaptados a sus necesidades.
</p>

<h3>8. DESCRIPCIÓN DE LA INNOVACIÓN</h3>
<p>
Poder brindarle a las personas de escasos recursos una opción económica y fácil de implementar en casa en caso de que no puedan financiar algunos de los que ya se encuentran en el mercado, esto sería de código libre, con toda la documentación necesaria para poder llevarlo a cabo.
</p>

<h3>9. BENEFICIOS DE LA INNOVACIÓN </h3>
<p>
Con esto estaríamos ayudando a miles de personas con discapacidades motrices que no cuentan con la posibilidad de comprar estos dispositivos en el mercado o cualquier otra persona que quiera poder llevarlo a cabo, esto los beneficia no solo en el ámbito educativo sino también emocional.
</p>

<h3>10. MERCADO POTENCIAL</h3>
<p>
Nuestro mercado potencial se centra principalmente en personas de bajos recursos o cualquier otra persona que desee implementarlo, sea cual sea sus necesidades.
</p>

<h3>11. HARDWARE</h3>
<p>
El hardware del dispositivo se puede hacer de varias formas ya sea madera, plástico, en base a una impresora 3d en este caso ya se contaba con un gabinete que fue creado en base una impresión 3d, con la medida de 23x23 centímetros de base con inclinación de punto mínimo 2cm a 8cm en su contraparte tal como se puede apreciar en la Figura 2. 
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f2.PNG)

<p>
Teniendo el gabinete ocupas una tapadera con las perforaciones de los botones, esto dependerá de los botones que se utilicen en nuestro caso utilizamos 8 botones (como  se ve en la Figura 3) que en un principio trabajamos en papel cascaron para hacer las pruebas del dispositivo.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f3.PNG)

<h3>12. SOFTWARE</h3>
<p>
Estudiando diagramas guiados de la página de arduino se adaptaron para Arduino Leonardo y Arduino Micro Pro ya que se estuvo trabajando con ambos, en este caso se muestra el diagrama de lo que sería la botonera alámbrica
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f4.PNG)

<p>El software del dispositivo se hizo utilizando el IDE de Arduino en el cual agregamos las librerías:</p>

- #include <Mouse.h>
- #include <SoftwareSerial.h> 
<p>
Estas bibliotecas centrales permiten que las placas basadas en 32u4 y SAMD (Leonardo, Esplora, Zero, Due y MKR Family) aparezcan como un mouse y / o teclado nativo en una computadora conectada, es decir, serán las encargadas de la emulación del mouse.

</p>



<h4>12.1. Funcionamiento de Emulación del mouse</h4>
<p>
Haciendo uso del IDE de Arduino se pueden programar las funcionalidades utilizando funciones tales como:
</p>

 ***Mouse.move(x, y, wheel):*** Con esta función hacemos que el cursor se mueva a lo largo del eje x/y o el scroll, arriba, abajo.
***Mouse.press(b):*** Es para enviar el click el cual se mantiene presionado hasta que se llame Mouse.release(b), la b representa un byte y puede establecerse también como:

- MOUSE_LEFT - Botón izquierdo del mouse.
- MOUSE_RIGHT - Botón derecho del mouse.
- MOUSE_MIDDLE - Botón central del mouse.
- MOUSE_ALL - Los tres botones del mouse.

***Mouse.click(b):*** envía un clic hacia abajo (presionar) seguido inmediatamente por un clic hacia arriba (soltar) en los botones b.
Por ejemplo, para hacer clic en los botones izquierdo y derecho simultáneamente: 
Mouse.click(MOUSE_LEFT | MOUSE_RIGHT); (Presionamos y soltamos el botón derecho e izquierdo).


<h3>13. DESARROLLO EN BASE A PROTOTIPOS</h3>
*<h4>13.1 Prototipo 1</h4>*
<p>
El prototipo uno consistió en la implementación de un software de funcionalidad de 5 botones, arriba, abajo, izquierda, derecha, clic izquierdo y de parte del hardware la utilización parcial del material que fueron 5 botones, cable conductor, Protoboard, resistencias, papel cascaron, como podemos ver en la Figura 5 y 6.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f5.PNG)

![](https://github.com/silviasalazar/botonera/blob/main/images/f6.PNG)

*<h4>13.2 Prototipo 2</h4>*
<p>
El prototipo 2 se añadió en hardware principalmente 3 botones más, se cambió de usar Protoboard a placa perforada para soldar todos los componentes y en software la funcionalidad de los otros 3 botones, que fueron scroll arriba y abajo, además de clic derecho, como podemos observar en la Figura 7.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f7.PNG)

*<h4>13.3 Prototipo 3</h4>*
<p>
El prototipo 3, implementa la funcionalidad de 8 botones, la funcionalidad parcial de los módulos bluetooth de ahí que lo llamemos prototipo 3, en términos de hardware hace del gabinete, y de software seguiremos con la completa optimización de los módulos bluetooth.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f8.PNG)

<h3>14. CONCLUSIONES Y TRABAJOS A FUTURO</h3>
<p>
El  crear un dispositivo para que sea utilizado contrae consigo más dilemas de los que fuera pensado en primera instancia, pero el poder desarrollar un dispositivo desde una fase primitiva experimental hasta uno significativamente más avanzado está lleno de enseñanzas y te da una perspectiva que te hace ver más allá de la funcionalidad  inmediata como lo sería un primer prototipo, pensando en la comodidad, durabilidad y calidad del mismo, aspectos que normalmente no son tomados en cuenta pero que para un producto sea realmente funcional son fundamentales, con esta percepción podemos ver que un producto conlleva múltiples capas que deben de superarse hasta llegar  al usuario final.
</p>

*<h4>14.1 Implementación de comunicación Bluetooth</h4>*
<p>
Entendemos que  en la actualidad la comunicación inalámbrica otorga practicidad, por eso trabajamos en en implementarla, el módulo bluetooth que estamos trabajando es  el hc-05, de 6 pines, 3,3v de parada en lectura n\,donde este requiere que el pin KEY, esté en HIGH cuando encendemos el módulo. En principio no es necesario usar un divisor de tensión y  los pines son tolerantes a 5V (Figura 9).
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f9.PNG)

*<h4>14.1.1 Configuración de módulo HC-05</h4>*
<p>
La configuración del módulo hc-05 (Figura 10) fue teniendo dos perspectivas de él, en un principio se tenía en cuenta utilizar solo 1 posterior la de 2 siendo uno esclavo y otro maestro con la utilización de dos Arduino Micro Pro, configurando primero por comandos AT para añadir roles, nombre, frecuencia de baudios a la que trabajarían, igualmente la conexión de ambos aplicando sus roles esclavo-maestro.
</p>

![](https://github.com/silviasalazar/botonera/blob/main/images/f10.PNG)

*<h4>14.1.2 Comandos básicos AT(Attention) para configuración de módulo HC-05</h4>*

- AT+NAME     NOMBRE DEL DISPOSITIVO
- AT+PSWD     CONTRASEÑA (PIN)
- AT+UART      PARAMETROS DE COMUNICACION
- AT+ROLE      Rol del dispositivo
                      0= esclavo(slave)
                      1= maestro(master)
- AT+ORGL      RESTAURA A VALORES DE FÁBRICA
- AT+RESET     VUELVE A MODO USUARIO, SALE DE MODO CONFIGURACIÓN Y ENTRA A MODO USUARIO ,
- COMANDO  “?”DE LECTURA 
- AT+NAME?     ESTÁ LEYENDO EL NOMBRE





