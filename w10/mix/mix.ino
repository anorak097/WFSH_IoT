#include <BluetoothSerial.h>
#include <ESP32Servo.h>

BluetoothSerial bt;

const int SERVO = 27; // 伺服馬達的橘色線
Servo boom;

void setup()
{
	boom.attach(SERVO);
	boom.write(0);
	bt.begin("ESP32-GATE"); // 手機上看到的名字
}

void loop()
{
	if (bt.available())
	{
		String cmd = bt.readStringUntil('\n');
		cmd.trim();
		if (cmd == "open")
		{
			for (int a = 0; a <= 120; a++)
			{
				boom.write(a);
				delay(8);
			}
		};
		if (cmd == "close")
		{
			for (int a = 120; a >= 0; a--)
			{
				boom.write(a);
				delay(8);
			}
		};
		bt.println("gate " + cmd);
	}
}