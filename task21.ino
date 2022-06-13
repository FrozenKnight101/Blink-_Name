int LED = D7;

void setup()
{
	pinMode(LED, OUTPUT);
}

void longBlink(){
    digitalWrite(LED, HIGH);
    delay(1s);
    digitalWrite(LED, LOW);
    delay(500);
}
void shortBlink(){
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
}

void betweenLetter(){
    digitalWrite(LED, LOW);
    delay(2s);
}
void loop()
{
   // .- ...- .. -. .- ... .... - Avinash 
   
   // A
   shortBlink();
   longBlink();
   betweenLetter();
   
   //V
   shortBlink();
   shortBlink();
   shortBlink();
   longBlink();
   betweenLetter();
   
   //I
   
   shortBlink();
   shortBlink();
   betweenLetter();
   
   //N
   
   longBlink();
   shortBlink();
   
   //A
   shortBlink();
   longBlink();
   betweenLetter();
   
   //S
   shortBlink();
   shortBlink();
   shortBlink();
   betweenLetter();
   
   //H
   shortBlink();
   shortBlink();
   shortBlink();
   shortBlink();
   betweenLetter();
   
   
   
   
}