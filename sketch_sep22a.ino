int redled= 7;
int greenled= 4;
int Buzzer= 2;
int Gaz= 13;
int traching= 12;
int flame= 8;

void setup() 
{
pinMode(redled,OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(Buzzer,OUTPUT);
pinMode(flame,INPUT);
pinMode(Gaz,INPUT);
pinMode(traching,INPUT);
Serial.begin(9600);
}

void loop()
{
int  B = digitalRead (Gaz) ; 
int  z = digitalRead (traching) ; 
char  N = digitalRead (flame) ;

   
if(B==HIGH)
{
 Serial.println("  غاز=لا تسريب " );
 delay(100);
 digitalWrite(Buzzer,LOW);
  digitalWrite(greenled,HIGH);
  digitalWrite(redled,LOW);
  }
  else
  {
 Serial.println("   غاز=تسريب " );
  delay(100);
    digitalWrite(Buzzer,HIGH);
  digitalWrite(greenled,LOW);
  digitalWrite(redled,HIGH);
    }

    if(z==HIGH)
{
   Serial.println("  حركة=لا تسريب " );
 delay(100);
 digitalWrite(Buzzer,LOW);
  digitalWrite(greenled,HIGH);
  digitalWrite(redled,LOW);
  }
  else
  {
 Serial.println("   حركة=تسريب " );
  delay(100);
    digitalWrite(Buzzer,HIGH);
  digitalWrite(greenled,LOW);
  digitalWrite(redled,HIGH);
    }
 if(N==HIGH)
{
   Serial.println("  لهب=لا تسريب " );
 delay(100);
 digitalWrite(Buzzer,LOW);
  digitalWrite(greenled,HIGH);
  digitalWrite(redled,LOW);
  }
  else
  {
 Serial.println("   لهب=تسريب " );
  delay(100);
    digitalWrite(Buzzer,HIGH);
  digitalWrite(greenled,LOW);
  digitalWrite(redled,HIGH);
    }

    
}
