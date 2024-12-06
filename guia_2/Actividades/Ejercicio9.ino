#define pin_Red    9
#define pin_Green  10
#define Pin_Blue   11

int L1[] = {122 , 234 , 21};
int L2[] = {33  , 53  , 155};
int L3[] = {200 , 255 , 12};

int *colors[] = {L1, L2, L3};

void setup() 
{
  pinMode(pin_Red, OUTPUT);
  pinMode(pin_Green, OUTPUT);
  pinMode(Pin_Blue, OUTPUT);
}

void loop() 
{
  for (int i = 0; i < 3; i++) {
    analogWrite(pin_Red, colors[i][0]);  
    analogWrite(pin_Green, colors[i][1]); 
    analogWrite(Pin_Blue, colors[i][2]);  
    delay(1000);  
  }
}
