#include <analogWrite.h>

int redLED = 12;
int greenLED = 27;
int blueLED = 33;
int counter = 0;
int delayTime = 0;
int buttonPin = A0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    counter++;
    delay(100);
  }else if(counter == 1){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(redLED, brightness);
      delay(delayTime);
      }
  }else if(counter == 2){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(greenLED, brightness);
      delay(delayTime);
      }
  }else if(counter == 3){
    for(int brightness = 0l brightness <=255; brightness++){
      analogWrite(blueLED, brightness);
      delay(delayTime);
      }
  }else {
    analogWrite(redLED, 0);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
    counter = 0;
    }
  }
  lastButtonState = buttonState;
}
