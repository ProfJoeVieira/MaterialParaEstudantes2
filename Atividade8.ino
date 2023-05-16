int x = 2 ;
void setup() {
  Serial.begin(9600);
  if(x >= 0){ // se x for maior ou igual a zero
    Serial.println("Numero positivo");
  }else{ // senão
    Serial.println("Numero negativo");
  }
}
void loop() {
  
}

