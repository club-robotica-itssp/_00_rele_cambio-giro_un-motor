# Implementación de control de giro/encendido apagado de un motor utilizando relevadores y Arduino.


## Introducción.

En la siguiente imagen se muestra el esquema electrónico general propuesto para el control el cual muestra las conexiones a realizar entre los distinto componentes.

<img src="https://raw.githubusercontent.com/club-robotica-itssp/_00_rele_cambio-giro_un-motor/master/DIAGRAMA.png" alt="diagrama" width="513" height="268">

### Material.
```
* Módulo de relevadores.
* Motor de DC.
* Fuente de alimentación.
* Arduino.
```

### Funcionamiento.
El funcionamiento del circuito es muy sencillo;
Al estar los pines en estado bajo (0 V o 0 lógico) la polaridad que llegara atreves de los relevadores hacia el motor lo hará girar hacia un lado según las terminales donde se conecte.

![estado 00](https://raw.githubusercontent.com/club-robotica-itssp/_00_rele_cambio-giro_un-motor/master/img/ESTADO_00.gif)

Ahora bien, si ponemos en alto (5 V o 1 lógico) los pines de control de los relevadores (no hay que olvidar que los estamos controlando atreves del módulo de relevadores) podemos observar que gracias a la forma en que los conectamos previamente la polaridad que llega al motor será invertida lo que provocará que este invierta su giro.

![estado 11](https://raw.githubusercontent.com/club-robotica-itssp/_00_rele_cambio-giro_un-motor/master/img/ESTADO_11.gif)

Finalmente, si colocamos alternados los pines de control, “Alto con Bajo” o bien “Bajo con Alto”, no daremos cuenta de que a las terminales del motor llega una misma polaridad, positivo o negativo, con lo cual no es posible que este gire hacia ningún lado debido a que no hay forma de que fluya la corriente entre los terminales de la fuente de alimentación.

![estado 10 01](https://raw.githubusercontent.com/club-robotica-itssp/_00_rele_cambio-giro_un-motor/master/img/ESTADO_10-01.gif)
