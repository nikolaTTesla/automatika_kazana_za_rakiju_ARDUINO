int data;
int led1 = 13;
int led2 = 8;
int buttonPushCounter1 = 0;
int buttonPushCounter2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.println("I'm ready");
}

void loop() {
  if(Serial.available() > 0)
  { 
       data = Serial.read();
       if(data == 'A')
       {
         buttonPushCounter1++;
         if (buttonPushCounter1 > 1) buttonPushCounter1 = 1;
         }
          if (buttonPushCounter1 == 1)
         {
          digitalWrite(led1,HIGH);
         }

if(data == 'j')
       {
         buttonPushCounter1--;
         if (buttonPushCounter1 < 0) buttonPushCounter1 = 0;
         }
          if (buttonPushCounter1 == 0)
         {
          digitalWrite(led1,LOW);
         }

if(data == 'B')
       {
         buttonPushCounter2++;
         if (buttonPushCounter2 > 1) buttonPushCounter2 = 1;
         }
          if (buttonPushCounter2 == 1)
         {
          digitalWrite(led2,HIGH);
         }

if(data == 'k')
       {
         buttonPushCounter2--;
         if (buttonPushCounter2 < 0) buttonPushCounter2 = 0;
         }
          if (buttonPushCounter2 == 0)
         {
          digitalWrite(led2,LOW);
         }


          
  }

}
