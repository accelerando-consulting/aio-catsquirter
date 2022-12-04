# CatSquirter - a mosfet switching shield for pumps or other small loads

This project is a circuit board that allows one to control a high current
output using a Mostfet rather than a relay.  It is intended to stack atop the
Lolin D1 mini microcontroller board, or any other board that uses the D1 bus (such as 
Accelerando Redsoil (nRF52840) , Accelerano Bungan (nRF52833) or Accelerando Cowan (ESP32-C3).

It was originally created to drive a small submersible fountain pump in order to produce a brief
spray of water (harmless but surprising) to discourage a pet from scratching an item of furniture.

## How it works

Jumpers allow any of D0,D1,D5-D8 to be connected to the gate of the MOSFET.  When the corresponding pin is
HIGH, the MOSFET turns on and power flows to the PUMP socket. 

Another jumper controls the source of the power to the pump.   For a battery operated pump, fit a Lolin battery shield and
connect the battery to the catsquirter shield, then connect the second battery connector to the Lolin shield.   This
arrangement uses the high current available direct from a lithium battery to run the pump.

Alternatively, if your project is not battery powered, a jumper allows connecting the 5v or 3v3 pins from the
D1 stacking bus to the mosfet drain.  (Be careful not to use more current than your regulator can handle!).   In one
instance I'm using the 5v from the USB connecter to run a small vacuum pump.

Finally, if you have a higher voltage load (say, 12v), you could connect power to one of the battery headers (in which case DO NOT connect the second header to a battery shield!).

A LED will light when the pump fet is enabled.

## What can I do with it

* Water your indoor pot-plants.
* Control a low voltage cooling or ventilation fan
* Make a small drinking fountain for people or pets.
* Run a vacuum pump or fume extractor for soldering.
* Stack several of these (with different jumper settings on each one) to control several devices.
* Control low voltage LED lighting (up to 2A, for higher current lighting see Accelerando Jahlo).
* Control a heavy duty relay for more signifiant loads
