const int Blue = 18;
const int Green = 21;
const int freq = 5000;
const int resolution = 8;
 
void setup(){
  //pinout, freq, res, channel
  ledcAttachChannel(Blue, freq, resolution,0);  
  ledcAttachChannel(Green, freq, resolution,1);
}
 
void loop(){
  //increase Blue
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(Blue, dutyCycle);
    delay(15);
  }
  //decrease Blue
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(Blue, dutyCycle);   
    delay(15);
  }
  //increase Green
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(Green, dutyCycle);
    delay(15);
  }
  //decrease Green
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(Green, dutyCycle);   
    delay(15);
  }
}
