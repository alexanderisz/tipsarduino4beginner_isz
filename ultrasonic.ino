/*..........................................

By: Alexander Isz ( Iskandar Putra )
Facebook: Alexander Isz

...........................................*/

#include<NewPing.h>
#define UStrig 3
#define USecho 2
#define USmax 200
#define USping 200
NewPing sonar1(UStrig, USecho, USmax);

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  unsigned int uS = sonar1.ping();
  unsigned int dist = sonar1.convert_cm(uS);
  Serial.println(dist);
}

