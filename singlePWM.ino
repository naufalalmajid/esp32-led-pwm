const int Blue = 18;
const int freq = 5000;
const int resolution = 8;
 
void setup(){
  //pinout, freq, res, channel
  ledcAttachChannel(Blue, freq, resolution,0);  
}
 
void loop(){
  //increase
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(Blue, dutyCycle);
    delay(15);
  }
  //decrease
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(Blue, dutyCycle);   
    delay(15);
  }
}
