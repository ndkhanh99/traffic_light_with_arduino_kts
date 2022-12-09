
int A = 12; //assign the car lights
int B = 11;
int C = 10;
int D = 9; //button pin
int carGreen = 7; //assign the pedestrian lights
int carYellow = 6;
int carRed = 5;
int button = 3; // switch is on pin 3
int buttonValue = 0;
int doiHuong = 0;
int isRED = 0;
int isGREEN = 0;
int beginisGREEN = 0;
int backtobegin = 0;
int backtobegin1 = 0;
int backtobegin2 = 0;
#define trangthai 13
//#define SW1 3

void setup() {
      Serial.begin(115200);
      pinMode(A, OUTPUT);
      pinMode(B, OUTPUT);
      pinMode(C, OUTPUT);
      pinMode(D, OUTPUT);
      pinMode(carRed, OUTPUT);
      pinMode(carYellow, OUTPUT);
      pinMode(carGreen, OUTPUT);
      pinMode(button,INPUT);
      pinMode(trangthai,OUTPUT);
      int isRED = 0;
      int isGREEN = 0;
      beginisGREEN = HIGH;
      backtobegin = LOW;
      backtobegin1 = LOW;
      backtobegin2 = LOW;
}

void loop() {
      pinMode(button, INPUT);
      checkButton();
      if (buttonValue == LOW) {
          autoLight();
      }
      if (buttonValue == HIGH) {
          controlLight();
      }
}

void displayled7_9s() {
      if(1){
        while(backtobegin == LOW){
          while(1){
              digitalWrite(D,HIGH);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//9
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,HIGH);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A, LOW);//8
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,HIGH);
              digitalWrite(A,HIGH);//7
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,HIGH);
              digitalWrite(A,LOW);//6
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//5
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,LOW);
              digitalWrite(A,LOW);//4
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,HIGH);
              digitalWrite(A,HIGH);//3
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,HIGH);
              digitalWrite(A,LOW);//2
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//1
              checkButton();
              delay1();
              if(backtobegin == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,LOW);//0
              checkButton();
              delay1();
              backtobegin = HIGH;
              if(backtobegin == HIGH) break;
            }
          }
      }
}

void displayled7_9s_1() {
      if (1){
       while(backtobegin1 == LOW){
          while(1){
              digitalWrite(D,HIGH);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//9
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,HIGH);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A, LOW);//8
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,HIGH);
              digitalWrite(A,HIGH);//7
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,HIGH);
              digitalWrite(A,LOW);//6
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//5
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,HIGH);
              digitalWrite(B,LOW);
              digitalWrite(A,LOW);//4
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,HIGH);
              digitalWrite(A,HIGH);//3
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,HIGH);
              digitalWrite(A,LOW);//2
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,HIGH);//1
              checkButton();
              delay1();
              if (backtobegin1 == HIGH) break;
              digitalWrite(D,LOW);
              digitalWrite(C,LOW);
              digitalWrite(B,LOW);
              digitalWrite(A,LOW);//0
              checkButton();
              delay1();
              backtobegin = LOW;
              backtobegin1 = HIGH;
              if (backtobegin1 == HIGH) break;
            }
          }
      }
 
}

void displayled7_2s() {
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,HIGH);
    digitalWrite(A,LOW);//2
    delay1();
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);//1
    delay1();
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,LOW);//0
    delay1();
    backtobegin1 = LOW;
}

void display9() {
    digitalWrite(D,HIGH);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    digitalWrite(A,HIGH);//9
}

void delay1() {
    delay(1000);
    buttonValue = digitalRead(button);
    if (buttonValue == HIGH) {
      while(buttonValue == HIGH){
        display9();
        buttonValue = digitalRead(button);
        Serial.println(digitalRead(trangthai));
        doiHuong = digitalRead(trangthai);
        while (doiHuong == HIGH){
          doiHuong = digitalRead(trangthai);
          if (isRED == HIGH){
            digitalWrite(carRed,LOW);
            digitalWrite(carGreen,HIGH);
            backtobegin = HIGH;
            backtobegin1 = HIGH;
            backtobegin2 = HIGH;
            beginisGREEN = HIGH;
          }
          if (isGREEN == HIGH){
            digitalWrite(carGreen,LOW);
            digitalWrite(carRed,HIGH);
            backtobegin = HIGH;
            backtobegin1 = HIGH;
            backtobegin2 = HIGH;
            beginisGREEN = LOW;
          }
          if (doiHuong == LOW) break;
        }
        if (buttonValue == LOW) break;
      }
    }
}

void checkButton() {
    buttonValue = digitalRead(button);
//    Serial.println(digitalRead(button));
    if (buttonValue == HIGH){
      controlLight();
    }
}

void autoLight() {
    while (beginisGREEN == LOW){
      backtobegin = LOW;
      backtobegin1 = LOW;
      backtobegin2 = LOW;
      Serial.print('0');
      digitalWrite(carRed, HIGH); //green on
      isRED = HIGH;
      isGREEN = LOW;
      displayled7_9s(); //wait 9 seconds
      Serial.println(backtobegin2);
      if(backtobegin2 == HIGH) break;
      isRED = LOW;
      digitalWrite(carRed, LOW);
      digitalWrite(carYellow, HIGH); //yellow on
      displayled7_2s(); //wait 2 seconds
      digitalWrite(carYellow, LOW); //yellow off
      digitalWrite(carGreen, HIGH); //red on
      isGREEN = HIGH;
      isRED = LOW;
      displayled7_9s_1();
            Serial.println(backtobegin2);
      if(backtobegin2 == HIGH) break;
      digitalWrite(carGreen, LOW); 
      isGREEN = LOW;
      digitalWrite(carYellow, HIGH); //yellow on
      displayled7_2s(); //wait 2 seconds
      digitalWrite(carYellow, LOW); //yellow off
    }
    while (beginisGREEN = HIGH){
      backtobegin = LOW;
      backtobegin1 = LOW;
      backtobegin2 = LOW;
      Serial.print('0'); 
      digitalWrite(carGreen, HIGH); //green on
      isGREEN = HIGH;
      isRED = LOW;
      displayled7_9s(); //wait 9 seconds
      Serial.println(backtobegin2);
      if(backtobegin2 == HIGH) break;
      isGREEN = LOW;
      digitalWrite(carGreen, LOW);
      digitalWrite(carYellow, HIGH); //yellow on
      displayled7_2s(); //wait 2 seconds
      digitalWrite(carYellow, LOW); //yellow off
      digitalWrite(carRed, HIGH); //red on
      isRED = HIGH;
      isGREEN = LOW;
      displayled7_9s_1();
            Serial.println(backtobegin2);
      if(backtobegin2 == HIGH) break;
      digitalWrite(carRed, LOW); 
      isRED = LOW;
      digitalWrite(carYellow, HIGH);
      displayled7_2s();
      digitalWrite(carYellow, LOW);
    }
}

void controlLight() {
    while (buttonValue == HIGH){
      buttonValue = digitalRead(button);
      digitalWrite(carYellow,LOW);
      if (isRED == HIGH){
        digitalWrite(carRed,HIGH);
        digitalWrite(carGreen,LOW);
      }
      if (isGREEN == HIGH){
        digitalWrite(carGreen, HIGH);
        digitalWrite(carRed,LOW);
      }
      display9();
      pinMode(button, OUTPUT);
    }
}
