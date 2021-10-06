// *******************************************************************************************************************************
// START userdefined data
// *******************************************************************************************************************************
#include <Arduino.h>

//_______________________________CONEXIONES_____________________________________
String dId = "1217";
String webhook_pass = "o4HU1eWy4v";
String webhook_endpoint = "https://3.142.89.107:3001/api/getdevicecredentials";
const char *server = "3.142.89.107";
const int api_port = 3001;


//WiFi

const char *wifi_ssid = "IoTCR";
const char *wifi_password = "Projects17$";

//Interval for send to database
const long sendBrokerInterval= 15000;
const long sendDBInterval = 300000;


// *******************************************************************************************************************************
// END userdefined data
// *******************************************************************************************************************************
