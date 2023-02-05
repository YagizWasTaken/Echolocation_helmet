int sensor1_trig = 10;
int sensor1_echo = 5;
int sensor2_trig = 9;
int sensor2_echo = 4;
int sensor3_trig = 8;
int sensor3_echo = 3;
int sensor4_trig = 11;
int sensor4_echo = 7;
int sensor5_trig = 12;
int sensor5_echo = 6;

long sure1;
long sure2;
long sure3;
long sure4;
long sure5;
long uzaklik1;
long uzaklik2;
long uzaklik3;
long uzaklik4;
long uzaklik5;

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
  digitalWrite(sensor1_echo, HIGH);
  digitalWrite(sensor2_echo, HIGH);
  digitalWrite(sensor3_echo, HIGH);
  digitalWrite(sensor4_echo, HIGH);
  digitalWrite(sensor5_echo, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensor1_trig, LOW);
  digitalWrite(sensor2_trig, LOW);
  digitalWrite(sensor3_trig, LOW);
  digitalWrite(sensor4_trig, LOW);
  digitalWrite(sensor5_trig, LOW);
  sure1 = pulseIn(sensor1_echo, HIGH);
  sure2 = pulseIn(sensor2_echo, HIGH);
  sure3 = pulseIn(sensor3_echo, HIGH);
  sure4 = pulseIn(sensor4_echo, HIGH);
  sure5 = pulseIn(sensor5_echo, HIGH);
  uzaklik1= sure1 /29.1/2;
  uzaklik2= sure2 /29.1/2;
  uzaklik3= sure3 /29.1/2;
  uzaklik4= sure4 /29.1/2;
  uzaklik5= sure5 /29.1/2;
  
  if(uzaklik1 > 200)
    Serial.print("uzaklik1 ");
    Serial.print(uzaklik1);
  Serial.print(" , ");
  if(uzaklik2 > 200) 
    Serial.print("uzaklik2 ");
    Serial.print(uzaklik2);
  Serial.print(" , ");
  if(uzaklik3 > 200)
    Serial.print("uzaklik3 ");
    Serial.print(uzaklik3);
  Serial.print(" , ");
  if(uzaklik4 > 200)
    Serial.print("uzaklik4 ");
    Serial.print(uzaklik4);
  Serial.print(" , ");
  if(uzaklik5 > 200)
    Serial.print("uzaklik5 ");
    Serial.println(uzaklik5);
  delay(100);
}
