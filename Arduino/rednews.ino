#include <SoftwareSerial.h>
#define BT_RXD 8
#define BT_TXD 7

SoftwareSerial bluetooth(BT_RXD, BT_TXD);
int GasPin1 = A0; // 가스센서 입력을 위한 아날로그 핀
int GasPin2 = A1;
int FlamePin1 = 3;     // 1번 불꽃감지 센서 핀 번호 3
int FlamePin2  = 4;    // 2번 불꽃감지 센서 핀 번호 4
int state1 = 0;     // 1번 불꽃감지 센서의 상태 값 저장 변수 
int state2 = 0;     // 2번 불꽃감지 센서의 상태 값 저장 변수
String on1 = "N";   // 1번 불꽃이 감지되었을 때 블루투스로 전달하는 값 , 이름
String off1 = "G";  // 1번 불꽃이 감지되지 않았을 때 블루투스로 전달하는 
String on2 = "M";   // 2번 불꽃이 감지되었을 때 블루투스로 전달하는 값  , 이름
String off2 = "F";  // 2번 불꽃이 감지되지 않았을 때 블루투스로 전달하는 값
String x = "x"; //가스1 > 가스2
String y = "y"; //가스1 < 가스2
String z = "z"; //가스 1 == 가스2
String blank = " ";

void setup(){
  
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(GasPin ,INPUT);   // 아날로그 핀 A0를 입력모드로 설정
  pinMode(FlamePin1, INPUT);   // 불꽃 감지 센서를 입력으로 설정
  pinMode(FlamePin2, INPUT);   
}
 
void loop(){ 
  state1 = digitalRead(flame1);   // 불꽃 감지 센서값 입력받음
  state2 = digitalRead(flame2);
  if (state1 == 0 && state2 == 0){  //1번불꽃O 2번불꽃O
    if(analogRead(GasPin1) > analogRead(Gaspin2)){
      bluetooth.print(on1+blank+on2+blank+x);   delay(1500);
      }
    else if(analogRead(GasPin1) < analogRead(Gaspin2)){
      bluetooth.print(on1+blank+on2+blank+y);   delay(1500);
      }   
    else if(analogRead(GasPin1) == analogRead(Gaspin2)){
      bluetooth.print(on1+blank+on2+blank+z);   delay(1500);
      }              
   }
   else if(state1 == 0 && state2 == 1) {  //1번불꽃O 2번불꽃X                   
     if(analogRead(GasPin1) > analogRead(Gaspin2)){
      bluetooth.print(on1+blank+off2+blank+x);   delay(1500);
      }
    else if(analogRead(GasPin1) < analogRead(Gaspin2)){
      bluetooth.print(on1+blank+off2+blank+y);   delay(1500);
      }   
    else if(analogRead(GasPin1) == analogRead(Gaspin2)){
      bluetooth.print(on1+blank+off2+blank+z);   delay(1500);
      }             
   }
   else if(state1 == 1 && state2 == 0) {  //1번불꽃X 2번불꽃O                   
      if(analogRead(GasPin1) > analogRead(Gaspin2)){
      bluetooth.print(off1+blank+on2+blank+x);   delay(1500);
      }
    else if(analogRead(GasPin1) < analogRead(Gaspin2)){
      bluetooth.print(off1+blank+on2+blank+y);   delay(1500);
      }   
    else if(analogRead(GasPin1) == analogRead(Gaspin2)){
      bluetooth.print(off1+blank+on2+blank+z);   delay(1500);
      }              
   }
   else {  //1번불꽃X 2번불꽃X                   
      if(analogRead(GasPin1) > analogRead(Gaspin2)){
      bluetooth.print(off1+blank+off2+blank+x);   delay(1500);
      }
    else if(analogRead(GasPin1) < analogRead(Gaspin2)){
      bluetooth.print(off1+blank+off2+blank+y);   delay(1500);
      }   
    else if(analogRead(GasPin1) == analogRead(Gaspin2)){
      bluetooth.print(off1+blank+off2+blank+z);   delay(1500);
      }               
   }
}
