

void initPins(){
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}

void openWindow(){
  digitalWrite(motor2, HIGH);
  digitalWrite(motor1, LOW);
  delay(5000);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}

void closeWindow(){
  digitalWrite(motor2, LOW);
  digitalWrite(motor1, HIGH);
  delay(5000);
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
}

void updateSetTemp(){
  int val = analogRead(tempPin)/30;
  
  setTemp = 19 + val;
}

void updateDisplay(){
  
  lcd.setCursor(0,0);
  lcd.print("Set Temp: ");
  lcd.print(setTemp);
  
  lcd.setCursor(0,1);
  lcd.print("  1  2  3  4  5  6");
  
  lcd.setCursor(0,2);
  lcd.print("T:");
  lcd.setCursor(2,2);
  lcd.print(temp1);
  lcd.print(" ");
  lcd.setCursor(5,2);
  lcd.print(temp2);
  lcd.print(" ");
  lcd.setCursor(8,2);
  lcd.print(temp3);
  lcd.print(" ");
  lcd.setCursor(11,2);
  lcd.print(temp4);
  lcd.print(" ");
  lcd.setCursor(14,2);
  lcd.print(temp5);
  lcd.print(" ");
  lcd.setCursor(17,2);
  lcd.print(temp6);
  lcd.print("  ");

  lcd.setCursor(0,3);
  lcd.print("H:");
  lcd.setCursor(2,3);
  lcd.print(hum1);
  lcd.print(" ");
  lcd.setCursor(5,3);
  lcd.print(hum2);
  lcd.print(" ");
  lcd.setCursor(8,3);
  lcd.print(hum3);
  lcd.print(" ");
  lcd.setCursor(11,3);
  lcd.print(hum4);
  lcd.print(" ");
  lcd.setCursor(14,3);
  lcd.print(hum5);
  lcd.print(" ");
  lcd.setCursor(17,3);
  lcd.print(hum6);
  lcd.print("  ");
}

void updateDHT(){
  temp1 = _dht1.readTemperature();
  hum1 = _dht1.readHumidity();
  
  temp2 = _dht2.readTemperature();
  hum2 = _dht2.readHumidity();
  
  temp3 = _dht3.readTemperature();
  hum3 = _dht3.readHumidity();
  
  temp4 = _dht4.readTemperature();
  hum4 = _dht4.readHumidity();
  
  temp5 = _dht5.readTemperature();
  hum5 = _dht5.readHumidity();
  
  temp6 = _dht6.readTemperature();
  hum6 = _dht6.readHumidity();
}
