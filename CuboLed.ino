void setup() {
  //Pin che comandano le colonne
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  //pin che comandano le righe
  pinmode(A0,OUTPUT);
  pinmode(A1,OUTPUT);
  pinmode(A2,OUTPUT);
  Serial.begin(9600);

  
  randomSeed(analogRead(0));
}



void loop() {
  analogWrite(A0,HIGH);
  ledPianoUno();
  analogWrite(A0,LOW);
  delay(100);
  analogWrite(A1,HIGH);
  ledPianoUno();
  analogWrite(A1,LOW);
  delay(100);
  analogWrite(A2,HIGH);
  ledPianoUno();
  analogWrite(A2,LOW);
  delay(100);
  
  
  delay(3000);
  verticalWall();
  delay(3000);
  randomizr();
}

void ledPianoUno(){
  //Animazione piano: illumina un led alla volta sequenzialmente di piano in piano
  
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4,LOW);
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(5,HIGH);
  delay(200);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(200);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);  
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  
}

void verticalWall(){
  //Fa un muro verticale per ogni riga
  analogWrite(A0,HIGH);
  analogWrite(A1,HIGH);
  analogWrite(A2,HIGH);
  digitalWrite(3,HIGH);

  digitalWrite(4,HIGH);


  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    
  digitalWrite(5,HIGH);
 
  digitalWrite(6,HIGH);
   digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(6,LOW);
 
  digitalWrite(9,LOW);

  digitalWrite(5,LOW);
  
  digitalWrite(7,HIGH);

  digitalWrite(8,HIGH);
 

  digitalWrite(10,HIGH);
  delay(200);
   
  digitalWrite(7,LOW);
    digitalWrite(8,LOW);  
  digitalWrite(10,LOW);

 
  digitalWrite(7,HIGH);
  

  digitalWrite(8,HIGH);

  
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(8,LOW);  
    digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  
  digitalWrite(5,HIGH);



  
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
    digitalWrite(5,LOW);
  
   digitalWrite(3,HIGH);
  
 
  digitalWrite(4,HIGH);
  
  
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(4,LOW);
  digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   
}

void randomizr(){
  int var=0;
  int row=0;
  //Accende un LED casualmente
  for (int i=0; i<27;i++){
    var=random(2,11);
    row=random(1,4);
    if (row==1){
      analogWrite(A0,HIGH);
    }else if (row==2){
      analogWrite(A1,HIGH);
    }else if (row==3){
      analogWrite(A2,HIGH);
    }
    digitalWrite(var,HIGH);
    delay(200);
    if (row==1){
      analogWrite(A0,LOW);
    }else if (row==2){
      analogWrite(A1,LOW);
    }else if (row==3){
      analogWrite(A2,LOW);
    }
    digitalWrite(var,LOW);
  }
}

