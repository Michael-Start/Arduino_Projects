int red = 11;
int green = 10;
int blue = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_color(0,0,0); // off
  delay(800);
  RGB_color(125,0,0); // red
  delay(800);
  RGB_color(0,125,0); // green
  delay(800);
  RGB_color(0,0,125); // blue
  delay(800);
  RGB_color(64,32,0); // yellow
  delay(800);
  RGB_color(125,0,125); // purple
  delay(800);
  RGB_color(125,125,125); // white
  delay(2000);

   gradient(); //currently gets stuck in an infinite loop
   delay(800);
}

void RGB_color(int red_value, int green_value, int blue_value){
  //set three PWM color channels
  analogWrite(red, red_value);
  analogWrite(green, green_value);
  analogWrite(blue, blue_value);
}

void gradient(){
  int red = 255;
  int green= 0;
 int blue = 0;
  for(int i = 0; i <=255; i++){
    blue = i;
    RGB_color(red, green, blue);
    delay(20);
  }
  for(int i = 0; i <=255; i++){
    blue = 255 -i;
    RGB_color(red,green,blue);
    delay(20);
  }
  
}


