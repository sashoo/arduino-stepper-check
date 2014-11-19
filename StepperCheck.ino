//int ENA=2;//connected to Arduino's port 2
int IN1=2;//connected to Arduino's port 3
int IN2=3;//connected to Arduino's port 4
//int ENB=5;//connected to Arduino's port 5
int IN3=4;//connected to Arduino's port 6
int IN4=5;//connected to Arduino's port 7
 
void setup()
{
 //pinMode(ENA,OUTPUT);
 //pinMode(ENB,OUTPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 //digitalWrite(ENA,HIGH);//enablae motorA
 //digitalWrite(ENB,HIGH);//enable motorB
}
void loop()
{/*In the way of 4 beats to drive the stepping motor,A group connected to motorA,B
 B group connected to motorB,Suppose A representing the forward current of A group,
 A- representing the reverse current of A group,B representing the forward current of B group,
 B- representing the reverse current of B group.
 this way run as follow:
 AB    A-B    A-B-   AB-
 or
 AB   AB-    A-B-   A-B
 */
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 delay(10);
 digitalWrite(IN1,LOW);
 digitalWrite(IN2,HIGH);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 delay(10);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,LOW);
 digitalWrite(IN4,HIGH);
 delay(10);
 digitalWrite(IN1,HIGH);
 digitalWrite(IN2,LOW);
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
 delay(10);
}
