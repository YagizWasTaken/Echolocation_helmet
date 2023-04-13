const int sensor1_trig = 2;
const int sensor1_echo = 3;
const int sensor2_trig = 4;
const int sensor2_echo = 5;
const int sensor3_trig = 7;
const int sensor3_echo = 6;
const int sensor4_trig = 9;
const int sensor4_echo = 8;
const int sensor5_trig = 10;
const int sensor5_echo = 11;

long sure1;
long sure2;
long sure3;
long sure4;
long sure5;
int uzaklik1;
int uzaklik2;
int uzaklik3;
int uzaklik4; 
int uzaklik5;

void setup(){
  pinMode(sensor1_trig, OUTPUT);
  pinMode(sensor1_echo, INPUT);
  pinMode(sensor2_trig, OUTPUT);
  pinMode(sensor2_echo, INPUT);
  pinMode(sensor3_trig, OUTPUT);
  pinMode(sensor3_echo, INPUT);
  pinMode(sensor4_trig, OUTPUT);
  pinMode(sensor4_echo, INPUT);
  pinMode(sensor5_trig, OUTPUT);
  pinMode(sensor5_echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(sensor1_trig, LOW);
  digitalWrite(sensor2_trig, LOW);
  digitalWrite(sensor3_trig, LOW);
  digitalWrite(sensor4_trig, LOW);
  digitalWrite(sensor5_trig, LOW);
  delayMicroseconds(5);
  digitalWrite(sensor1_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor1_trig, LOW);
  sure1 = pulseIn(sensor1_echo, HIGH);
  uzaklik1 = sure1 * 0.034 / 2;

  digitalWrite(sensor2_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor2_trig, LOW);
  sure2 = pulseIn(sensor2_echo, HIGH);
  uzaklik2 = sure2 * 0.034 / 2;

  digitalWrite(sensor3_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor3_trig, LOW);
  sure3 = pulseIn(sensor3_echo, HIGH);
  uzaklik3 = sure3 * 0.034 / 2;

  digitalWrite(sensor4_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor4_trig, LOW);
  sure4 = pulseIn(sensor4_echo, HIGH);
  uzaklik4 = sure4 * 0.034 / 2;

  digitalWrite(sensor5_trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor5_trig, LOW);
  sure5 = pulseIn(sensor5_echo, HIGH);
  uzaklik5 = sure5 / 29.1 / 2;

  Serial.print(uzaklik1);
  Serial.print("/");

  Serial.print(uzaklik2);
  Serial.print("/");

  Serial.print(uzaklik3);
  Serial.print("/");

  Serial.print(uzaklik4);
  Serial.print("/");

  Serial.println(uzaklik5);
 delay(1000);
}
