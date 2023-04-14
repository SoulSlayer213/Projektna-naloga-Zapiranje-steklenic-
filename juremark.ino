
int A = 2;
int S = 3;
int Ksp = 4;
int LED1 = 5;
int LED2 = 6;
int RL = 7;

void setup() {

  pinMode(A, INPUT_PULLUP);
  pinMode(S, INPUT_PULLUP);
  pinMode(Ksp, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(RL, OUTPUT);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(RL, LOW);
}


void loop() {
   restart();
   if((digitalRead(A)== 1)||(digitalRead(S)== 1)){
     digitalWrite(LED1, LOW);
      digitalWrite(RL,LOW);
   }
  else{
    digitalWrite(LED1, HIGH);
  delay(500); 
    digitalWrite(LED1, LOW);
  delay(500);
    digitalWrite(RL, HIGH);
    
  }
 }
    
void restart() {
  while((digitalRead(Ksp)==0)){
     digitalWrite(LED2, HIGH);
     digitalWrite(LED1, LOW);
     if(digitalRead(A)==1){
     digitalWrite(RL, LOW);
     delay(5000);}
    
  }
  if(digitalRead(Ksp)==1){
    digitalWrite(LED2, LOW);
  }
}
  
  
