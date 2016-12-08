# CJMCU-2812-8_ejemplos
Serie de ejemplos que he ido realizando para aprender a manejar este módulo. Lo interesante es que con un único pin podemos manejar el módulo entero y que cada led funcione de forma independiente.
![alt text](https://github.com/EnekoMontero/CJMCU-2812-8_ejemplos/blob/master/Imagenes/arcoirirs.jpg "Arcoiris")

##1er ejemplo: Blink de desplazamiento.
Blink con cada led de forma individual y se va desplazando. Cuando llega a los extremos cambia el sentido.

##2o ejemplo: Arcoiris
Ejemplo rápido para iluminar cada led de forma individual de un color distinto y poder poner una foto de ejemplo.

##3er ejemplo: Fading de azul a rojo y viceversa
Ejemplo de cómo hacer un fading desde el azul al rojo y viceversa. Usando PWM el incremento/decremento es lineal. Mientras un color pasa de 0 a 255, el otro pasa de 255 a 0. Simulación para lo que podría ser la representación de la temperatura en una impresora 3D en el momento de calentar/enfriar el hotend. En este ejemplo el cambio se produce por tiempo.

##4o ejemplo: Fading anterior pero con pulsador
Ejemplo igual que el anterior pero según pulsamos un pulsador se van iluminando/apagando los leds de la tira.