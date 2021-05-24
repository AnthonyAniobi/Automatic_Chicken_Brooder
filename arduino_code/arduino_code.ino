#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>

#define tempPin A1

const int motor1 = 23;
const int motor2 = 22;

const int relay1 = 31;
const int relay2 = 30;
const int relay3 = 33;
const int relay4 = 32;

const int dht1 = 14;
const int dht2 = 15;
const int dht3 = 16;
const int dht4 = 17;
const int dht5 = 18;
const int dht6 = 19;

const int sdcard = 53;

const int rs = 7, en = 6, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

DHT _dht1(dht1, DHT11);
DHT _dht2(dht2, DHT11);
DHT _dht3(dht3, DHT11);
DHT _dht4(dht4, DHT11);
DHT _dht5(dht5, DHT11);
DHT _dht6(dht6, DHT11);


int temp1, temp2, temp3, temp4, temp5, temp6;
int hum1, hum2, hum3, hum4, hum5, hum6;

int setTemp;

void setup() {
  initPins();
  lcd.begin(20, 4);
  offAllRelays();
}

void loop() {
  updateDisplay();
  updateSetTemp();
  updateDHT();

  if((millis()%5000)<10){
    checkCode();
  }
}







