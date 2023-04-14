
int A = 2;
int S = 3;
int Ksp = 4;
int LED1 = 5;
int LED2 = 6;
int LED3 = 7;

void setup() {

  pinMode(A, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(Ksp, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
}


void loop() {
   restart();
   if((digitalRead(A)== 1)||(digitalRead(S)== 1)){
     digitalWrite(LED1, LOW);
      digitalWrite(LED3,LOW);
   }
  else{
    digitalWrite(LED1, HIGH);
  delay(500); 
    digitalWrite(LED1, LOW);
  delay(500);
    digitalWrite(LED3, HIGH);
    
  }
 }
    
void restart() {
  while(digitalRead(Ksp)==0){
     digitalWrite(LED2, HIGH);
     digitalWrite(LED1, LOW);
     digitalWrite(LED3, LOW);
    delay(5000);
  }
  if(digitalRead(Ksp)==1){
    digitalWrite(LED2, LOW);
  }
}
  
  
