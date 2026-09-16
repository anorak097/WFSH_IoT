#include <SPI.h>
#include <WiFiNINA.h>

char ssid[] = "UTCS_G505";       // 改成你的 AP 名稱
char pass[] = "UTCSalgoG505!";       // 改成你的 AP 登入號碼
IPAddress dns1(120,114,100,  1); // first DNS server
IPAddress dns2(  8,  8,  8,  8); // second DNS server
int status = WL_IDLE_STATUS;  // the WiFi radio's status

void setup() {
  Serial.begin(9600);

  // 準備連上 AP
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
    delay(1000);
  }

  // 連上 AP 之後才開始設定好 DNS
  Serial.print("You're connected to the network");
  WiFi.setDNS(dns1, dns2);
  ////////// 在這之上的程式碼，就可以連上網路了！底下是為了訊息輸出而已！ 
  printWifiData();
}

void loop() {
  // 每五秒輸出一次訊息
  delay(5000);
  printCurrentNet();
}

void printWifiData() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());
  // print the MAC address of the router you're attached to:
  byte bssid[6];
  WiFi.BSSID(bssid);
  Serial.print("WiFi AP's MAC: ");
  printMacAddress(bssid);
  // print your arduino MAC
  byte mac[6];
  WiFi.macAddress(mac);
  Serial.print("Arduino's MAC: ");
  printMacAddress(mac);
}

void printCurrentNet() {
  // print your board's IP address:
  IPAddress ip1 = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip1);
  IPAddress ip2 = WiFi.gatewayIP();
  Serial.print("Gateway IP: ");
  Serial.println(ip2);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println("dBm");
}

void printMacAddress(byte mac[]) {
  for (int i = 5; i >= 0; i--) {
    if (mac[i] < 16) {Serial.print("0"); }
    Serial.print(mac[i], HEX);
    if (i > 0) { Serial.print(":");}
  }
  Serial.println();
}