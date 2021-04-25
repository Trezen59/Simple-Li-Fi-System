#define ldr_value A0

int disp_pin[7]; 

void define_segment_pins(int a, int b, int c, int d, int e, int f, int g) 
{  
  disp_pin[0] = a;
  disp_pin[1] = b;
  disp_pin[2] = c;
  disp_pin[3] = d;
  disp_pin[4] = e;
  disp_pin[5] = f;
  disp_pin[6] = g;
}

void display_number(int num)  
{
  switch(num)
  {
    case 0:
    digitalWrite(disp_pin[0], LOW); 
    digitalWrite(disp_pin[1], LOW); 
    digitalWrite(disp_pin[2], LOW);
    digitalWrite(disp_pin[3], LOW);
    digitalWrite(disp_pin[4], LOW);
    digitalWrite(disp_pin[5], LOW);
    digitalWrite(disp_pin[6], HIGH); 
    break;
    case 1:
    digitalWrite(disp_pin[0], HIGH); 
    digitalWrite(disp_pin[1], LOW);
    digitalWrite(disp_pin[2], LOW);
    digitalWrite(disp_pin[3], HIGH);  
    digitalWrite(disp_pin[4], HIGH);
    digitalWrite(disp_pin[5], HIGH);
    digitalWrite(disp_pin[6], HIGH);
    break;
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);
  define_segment_pins(8,2,3,4,5,6,7); 
}

void loop() {
   int c = analogRead(ldr_value);
 
    if(c<300){
      Serial.print(" 0 ");
      display_number(0);
      digitalWrite(9,0);
      delay(500);
      }
    else {
      Serial.print(" 1 ");
      display_number(1);
      digitalWrite(9,1);
      delay(500);  
      }
   
   }
  
  
