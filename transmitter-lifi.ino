const int led = 5;
void setup()
{
  Serial.begin(9600);
  pinMode(led , OUTPUT);
}

void loop()
{
  int  a[]= {1,1,0,0,1,0,1,0,1,0};
  for( int i=0;i<10;i++){
    digitalWrite(led,a[i]);
    Serial.println(a[i]);
    delay(500);
    } 
    
}
