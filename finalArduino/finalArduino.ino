


#include "pitches.h"
#include <Servo.h>
#define Pecho 6
#define Ptrig 7
#include <Servo.h>

int pos = 0; 
int speakerOut = 8;
int DEBUG = 1;
// notes in the melody:
int melody[] = {
 NOTE_C4, NOTE_C3, NOTE_C4, NOTE_C3,NOTE_C4, NOTE_C4, NOTE_C3, NOTE_C4, NOTE_C3,NOTE_C4 };
// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
  7,30,7,7};

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
long duracion, distancia;   
 
void setup() {                
  Serial.begin (9600);       
  pinMode(Pecho, INPUT);     
  pinMode(Ptrig, OUTPUT);    
  pinMode(13, 1);
  pinMode(speakerOut, OUTPUT);  
  myservo.attach(10);
}
  
void loop() {
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);  
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;            
  
  if (distancia >= 500 || distancia <= 0){
    digitalWrite(13,1);  
    Serial.println("mayor500");   
     for (pos = 0; pos <=180; pos +=1) {
      myservo.write(pos);
      delay(100);
     }
     
                 
  }
  else {
    Serial.print(distancia);           
    Serial.println("cm");              
    digitalWrite(13, 1);               
  }
  
   if (distancia <= 20 && distancia >= 1){
    digitalWrite(13, 0);                     
    Serial.println("Alarma......."); 
     for (pos = 180; pos >= 0; pos -=1){
      myservo.write(pos);
      delay(50);
     }  
    for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(8);
     }
}
            
  delay(400);                               
}
