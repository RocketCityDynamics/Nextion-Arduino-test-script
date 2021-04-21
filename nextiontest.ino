int i = 7200;
int t = 88;
int v = 12.04;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("nRPM.val=" + String(i));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.print("nTPS.val=" + String(t));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.print("nTemp.val=" + String(t));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.print("nIAT.val=" + String(t));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.print("nLoop.val=" + String(i));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.print("nRAM.val=" + String(i));
  Serial.write(0xff);
  Serial.write(0xff);
  Serial.write(0xff);
  
}
