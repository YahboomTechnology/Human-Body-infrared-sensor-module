int body_sensor = A3; 
int ledpin = 2; 
int val = 0, flag = 0; 
void setup()
{
  pinMode(body_sensor, INPUT);
  pinMode(ledpin, OUTPUT); //Defining the LED port for the output port
  Serial.begin(9600);//The baud rate is 9600
}
void loop()
{
  val = analogRead(body_sensor); //Read the voltage at port A0 and assign it to val
  Serial.println(val);
  if (val > 150)
  {
    digitalWrite(ledpin, HIGH);
    flag = 1;
  }
  else if (flag)
  {
    digitalWrite(ledpin, HIGH);
    delay(2500);
    flag = 0;
  }
  else
    digitalWrite(ledpin, LOW);
}
