#include <dht.h>

#include "FuzzyAc.h"

dht DHT;

#define DHT22_PIN 5

struct
{
	uint32_t total;
	uint32_t ok;
	uint32_t crc_error;
	uint32_t time_out;
	uint32_t connect;
	uint32_t ack_l;
	uint32_t ack_h;
	uint32_t unknown;
} stat = {0, 0, 0, 0, 0, 0, 0, 0};

void setup()
{
	Serial.begin(115200);
	Serial.println("dht22_test.ino");
	Serial.print("LIBRARY VERSION: ");
	Serial.println(DHT_LIB_VERSION);
	Serial.println();
	Serial.println("Type,\tstatus,\tHumidity (%),\tTemperature (C)\tTime (us)");

	pinMode(3, OUTPUT);
}

void loop()
{
	// READ DATA
	Serial.print("DHT22, \t");

	uint32_t start = micros();
	int chk = DHT.read22(DHT22_PIN);
	uint32_t stop = micros();

	stat.total++;
	switch (chk)
	{
	case DHTLIB_OK:
		stat.ok++;
		Serial.print("OK,\t");
		break;
	case DHTLIB_ERROR_CHECKSUM:
		stat.crc_error++;
		Serial.print("Checksum error,\t");
		break;
	case DHTLIB_ERROR_TIMEOUT:
		stat.time_out++;
		Serial.print("Time out error,\t");
		break;
	case DHTLIB_ERROR_CONNECT:
		stat.connect++;
		Serial.print("Connect error,\t");
		break;
	case DHTLIB_ERROR_ACK_L:
		stat.ack_l++;
		Serial.print("Ack Low error,\t");
		break;
	case DHTLIB_ERROR_ACK_H:
		stat.ack_h++;
		Serial.print("Ack High error,\t");
		break;
	default:
		stat.unknown++;
		Serial.print("Unknown error,\t");
		break;
	}
	// DISPLAY DATA
	Serial.print(DHT.humidity, 1);
	Serial.print(",\t");
	Serial.print(DHT.temperature, 1);
	Serial.print(",\t");
	Serial.print(stop - start);
	Serial.println();

	float wLow = 0, wMid = 0, wHigh = 0;
	int power = 0;

	if (chk == DHTLIB_OK)
	{
		fuzzyAc(DHT.temperature, DHT.humidity, wLow, wMid, wHigh, power);
	}
	analogWrite(3, (power * 255 + 50) / 100);

	//   int A = (DHT.temperature >= 26);
	//   int B = (DHT.humidity >= 70);

	//   if (A && B){
	//     analogWrite(3, 255);
	//   }
	//   else if (!(A && B)){
	//     analogWrite(3, 0);
	//   }

	if (stat.total % 20 == 0)
	{
		Serial.println("\nTOT\tOK\tCRC\tTO\tCON\tACK_L\tACK_H\tUNK");
		Serial.print(stat.total);
		Serial.print("\t");
		Serial.print(stat.ok);
		Serial.print("\t");
		Serial.print(stat.crc_error);
		Serial.print("\t");
		Serial.print(stat.time_out);
		Serial.print("\t");
		Serial.print(stat.connect);
		Serial.print("\t");
		Serial.print(stat.ack_l);
		Serial.print("\t");
		Serial.print(stat.ack_h);
		Serial.print("\t");
		Serial.print(stat.unknown);
		Serial.println("\n");
	}
	delay(2000);
}
