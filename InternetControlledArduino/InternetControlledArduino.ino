//TerrienDJV5
//Darrien.J-G.Varrette
///InternetControlledArduino

//Crypto V0.2.0
//https://github.com/OperatorFoundation/Crypto
#include <Crypto.h>
#include <AES.h>
#include <string.h>



#include <SPI.h>
#include <Ethernet.h>


// Enter a MAC address and IP address for your controller below.
// The IP address will be dependent on your local network:
byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(192, 168, 1, 177);




// Initialize the Ethernet server library
// with the IP address and port you want to use
// (port 80 is default for HTTP):
EthernetServer server(80);




void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
