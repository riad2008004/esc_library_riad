#include <Servo.h>
#include "ESC_Ogrodoot.h"

ESC esc_right(ESC::MODE_FORWARD_BACKWARD);
ESC esc_left(ESC::MODE_FORWARD_BACKWARD);

void setup()
{
    esc_right.attach(9);
    esc_left.attach(10);
}

void loop()
{
    esc_right.setSpeed(0);
    esc_left.setSpeed(0);
    esc_right.setDirection(ESC::FORWARD);
    esc_left.setDirection(ESC::FORWARD);
    esc_right.setSpeed(30);
    esc_left.setSpeed(30);
    delay(1000);
    esc_right.setSpeed(0);
    esc_left.setSpeed(0);
    esc_right.setDirection(ESC::BACKWARD);
    esc_left.setDirection(ESC::BACKWARD);
    esc_right.setSpeed(30);
    esc_left.setSpeed(30);
    delay(1000);
}