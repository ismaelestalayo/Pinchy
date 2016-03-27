# Pinchy

<p align="center">
  <img src="http://bilbaodynamics.com/wp-content/uploads/2016/02/uBot_2_Carita_D-600x400.jpg" width = "100%"/>
</p>

[Pinchy](http://bilbaodynamics.com/pinchy) is presented as the second iteration of our previous robot, [uBot](http://bilbaodynamics.com/tenacitas). It is an **educational** robot specifically made to be used as an ideal medium to start learning to program, know more about robotics and familiarize yourself with the basic electronic concepts.

### What's this?

Pinchy is an **open source** educational robot that can be printed using ordinary 3D printers. It's made up of a PCB, used as a shield with an Arduino Micro on top of it, the before mentioned chasis and some sensors to interact.

| **Unidades** 	|        **Componente**       	|
|:------------:	|:---------------------------:	|
|       2      	| Servos de rotación continua 	|
|       1      	|         Ultrasound Sensor        	|
|       2      	|     Line Follower Sensor    	|
|       1      	|           RGB LED           	|
|       1      	|            Buzzer           	|
|       1      	|       Bluetooth Module      	|
|       1      	|          Protoboard         	|
|       1       |       5x7 LED Array      |
|       1       |        Arduino Micro          |



## Connections

| **Pin** | **Conexión** |
|:-------:|:---------------------------:|
| 0 | TX / BT Module |
| 1 | RX / BT Module |
| 2 | Buzzer |
| 3 | Free I/O / Pincer Servo |
| 4 | Optorreflector 1 |
| 5 | Servomotor 1 |
| 6 | Servomotor 2 |
| 7 | Trigger Ultrasound Sensor |
| 8 | Echo Ultrasound Sensor |
| 9 | Blue RGB LED |
| 10 | Red RGB LED |
| 11 | Green RGB LED |
| 12 | Optorreflector 2 |
| 13 | Free I/O |
| 14 | Push Switch |
| 15 | MAX7219 SCK |
| 16 | MAX7219 MOSI |
| 17 | MAX7219 SS |
| A0 | Free I/O |
| A1 | Free I/O |
| A2 | Free I/O |
| A3 | Free I/O |
| A4 | Free I/O |
| A5 | Free I/O |
| A6 | Free I/O |
| A7 | Free I/O |

## Files

### Chasis

The chasis that makes this robot more than a custom PCB with an Arduino is made with our 3D printers helping us to reduce the costs of assembling a fully functional educational robot. All the necessary files are [here](https://github.com/BilbaoDynamics/Pinchy/tree/master/Chasis).

<p align="center">
  <img src="https://raw.githubusercontent.com/BilbaoDynamics/Pinchy/master/Images/vistachasis.PNG" width = "60%"/>
</p>

>
Pinchy's chasis without the circuitry
>

### Circuit and Board

The circuitry that is needed is in the [Circuits](https://github.com/BilbaoDynamics/Pinchy/tree/master/Circuitos) folder, there you can find the schematics and the CAD files for the main PCB and for the custom-made optoreflectors.


## Contributing to this project

If you find a bug in the code or an issue in the circuit, we would like to know it so please follow the next steps so we are aware of it:

1. Fork this repository
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am "Hey Bilbao Dynamics, I've added something that you might like!"`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request and we might add it to the project! 😉

## License

GPL license or Creative Commons Attribution-shareAlike (Copyleft)

<p align="center">
  <img src="http://es.creativecommons.org/blog/wp-content/uploads/2013/04/by-sa_petit.png" width = "20%"/>
</p>

## Contact us

We are an active group of students that want to stay in touch if there are some issues or new things that you want to share with us. We are available on the following sites:

* [Twitter](https://twitter.com/BilbaoDynamics)
* [Facebook](https://www.facebook.com/BilbaoDynamics/)
* [Our website](https://www.bilbaodynamics.com)

>
Bilbao Dynamics @ 2016
>
