int incomingByte;
const int size = 6;
int val[size];

void setup() {
  Serial.begin(9600);
}

void loop()
{
  for(int i = 0; i < 4; i++)
    val[i] = analogRead(i);

  val[4] = analogRead(6);
  val[5] = analogRead(7);

  for(int i = 0; i < size; i++) {
    Serial.print(val[i]);
    Serial.print(" ");
  }

  Serial.println();

  delay(10);
}