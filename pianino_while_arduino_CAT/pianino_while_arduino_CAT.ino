// Набор нот для имперского марша
#define NOTE_C 392 //Hz
#define NOTE_D 311 //Hz
#define NOTE_E 466 //Hz
#define NOTE_F 587 //Hz
#define NOTE_G 622 //Hz
#define NOTE_A 369 //Hz
#define NOTE_B 493 //Hz

const int SPEAKER=9; //Динамик на 9 пине

const int BUTTON_C=8;
const int BUTTON_D=7;
const int BUTTON_E=6;
const int BUTTON_F=5;
const int BUTTON_G=4;
const int BUTTON_A=3;
const int BUTTON_B=2;

void setup(){
}

void loop(){
while (digitalRead(BUTTON_C))
tone(SPEAKER, NOTE_C);
while(digitalRead(BUTTON_D))
tone(SPEAKER, NOTE_D);
while(digitalRead(BUTTON_E))
tone(SPEAKER, NOTE_E);
while(digitalRead(BUTTON_G))
tone(SPEAKER, NOTE_G);
while(digitalRead(BUTTON_A))
tone(SPEAKER, NOTE_A);
while(digitalRead(BUTTON_B))
tone(SPEAKER, NOTE_B);
while(digitalRead(BUTTON_F))
tone(SPEAKER, NOTE_F);

noTone(SPEAKER);
