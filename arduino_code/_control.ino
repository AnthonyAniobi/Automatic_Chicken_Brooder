void checkCode(){
  float sum = (temp1 + temp2 + temp3 + temp4 + temp5 + temp6);
  float average = (sum/5);
  
  if(average > setTemp){
    coolbrooder();
  }else if(average == setTemp){
    offAllRelays();
  }else{
    heatbrooder();
  }
  
}

void heatbrooder(){
  offExhaust();
  closeWindow();
  onHeater();
}

void coolbrooder(){
  onExhaust();
  openWindow();
  offHeater();
}

void offAllRelays(){
  offHeater();
  offExhaust();
}

void onHeater(){
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
}
void onExhaust(){
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
}

void offHeater(){
  digitalWrite(relay1, LOW);
}
void offExhaust(){
  digitalWrite(relay3, LOW);
}
