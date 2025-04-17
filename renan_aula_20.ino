String sensorRead;

void setup() {
  Serial.begin(9600);
}

void loop(){

  sensorRead = analogRead(A0) / 10;

  Serial.print(sensorRead);
  Serial.print("\n");
  delay(3)
}

import processing.serial.*;

Serial myPort;
printArray(serial.list());

import processing.serial.*;
Serial myPort;

String inString;
int lf = 10;

float x = 265;
float y;
float rad; 
float rad1;

PImage img;

void serialEvent(Serial p) {
  inString = p.readString();
}

void animationFrequency() {
  if(rad > 10 && rad < 50) {
    y=0.2;
  }
  else if(rad > 50 && rad < 70) {
    y=0.5;
  }
  else if(rad > 70 && rad < 80) {
    y=1;
  }
  else if(rad > 81) {
    y=2;
  }

  x = x + y;
  if(x > 280) {
    x=265;
  }
}

printArray(Serial.list());

myport = new Serial(this, Serial.list()[1], 9600);
myPort.bufferUntil(lf);

img = loadImage("co.png");
}

voice draw()
  background(40);
  noStroke();

  if(millis() > 3000){
    animationFrequency();

    rad = float(inString);
    rad1 = map(rad, 0, 120, 0, 6.2);

rectMode(CENTER);
fill(220, 20, 60);
arc(width / 2, height / 2, 300, 300, 0, rad1);

rectMode(CENTER);
fill(250);//220
ellipse(widht / 2, height / 2, x, x);
transplate(150,150);

fill(40);
textSize(80);
textAlign(CENTER, CENTER);
text(inStrig, 50, 160);

image(img, 30, 180, 40, 40);

fill(40);
textSize(20);
textAlign(CENTER, CENTER);
text("BPM"; 50, 155);

delay(50);
  }
 }
