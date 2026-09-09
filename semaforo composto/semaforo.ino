Código:
// C++ code//
int LedVerm1 = 12;
int LedAmar1 = 11;
int LedVer1 = 10;
int LedVerm2 = 7;
int LedAmar2 = 6;
int LedVer2 = 5;
void setup()
{
pinMode(LedVerm1, OUTPUT);
pinMode(LedAmar1, OUTPUT);
pinMode(LedVer1, OUTPUT);
pinMode(LedVerm2, OUTPUT);
pinMode(LedAmar2, OUTPUT);
pinMode(LedVer2, OUTPUT);
}
void loop()
{
digitalWrite(LedVerm1, HIGH);
digitalWrite(LedAmar1, LOW);
digitalWrite(LedVer1, LOW);
digitalWrite(LedVerm2, LOW);
digitalWrite(LedAmar2, LOW);
digitalWrite(LedVer2, HIGH);
delay(2000); // Wait for 5000 millisecond(s)
digitalWrite(LedVer2, LOW);
digitalWrite(LedAmar2, HIGH);
delay(2000); // Wait for 2000 millisecond(s)
digitalWrite(LedAmar2, LOW);
digitalWrite(LedVerm1, LOW);
digitalWrite(LedVerm2, HIGH);
digitalWrite(LedVer1, HIGH);
delay(2000); // Wait for 5000 millisecond(s)
digitalWrite(LedVer1, LOW);
digitalWrite(LedAmar1, HIGH);
delay(2000); // Wait for 2000 millisecond(s)
digitalWrite(LedAmar1, LOW);
digitalWrite(LedVerm2, LOW);
digitalWrite(LedVerm1, HIGH);
digitalWrite(LedVer2, HIGH);
delay(2000); // Wait for 2000 millisecond(s)
}
