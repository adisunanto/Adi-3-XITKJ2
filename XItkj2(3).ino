  // put your setup code here, to run once:
void setup() { // initialize the digital pin as an output. 
    pinMode(4, OUTPUT); 

}

  // put your main code here, to run repeatedly:
  void loop() { 
    digitalWrite(4, HIGH); // nyalakan LED
    delay(2500); // tunggu 1000 milidetik
    digitalWrite(4, LOW); // matikan LED
    delay(2500); //  tunggu 1000 milidetik  

}

