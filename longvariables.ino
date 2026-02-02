// project 14 modified complete
long base = 0;
long exponent = 0;
double result = 1;
long a = 0;

void setup()
{
Serial.begin(9600);
Serial.println("This program will prompt you to enter a number, which is your base, then enter a second number, which will raise the base to that number.");
delay(500);
}

void loop()
{
  // setting variables
  base = 0;
  exponent = 0;
  result = 0;

  // base 
  Serial.println("Enter your base now.");
  while (Serial.available() == 0) {}
  while (Serial.available() > 0)
  {
    base = base * 10;
    a = Serial.read() - '0';
    base = base + a;
    delay(5);
  }
  // exponent 
  Serial.println("Now, enter your exponent.");
  while (Serial.available() == 0) {}
  while (Serial.available() > 0)
  {
    exponent = exponent * 10;
    a = Serial.read() - '0';
    exponent = exponent + a;
    delay(5);
  }
  
result = pow(base, exponent);

  // final result
  Serial.print(base);
  Serial.print(" to the power of ");
  Serial.print(exponent);
  Serial.print(" is ");
  Serial.println(result);
  delay(5);
}
