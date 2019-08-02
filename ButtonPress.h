#include <avr/io.h>
#include "ButtonPressConfig.h" 

#ifndef BUTTONPRESS
#define BUTTONPRESS

char ButtonPressed(int buttonNumber, unsigned char pinOfButton, unsigned char portBit, int confidenceLevel);

char Pressed[numberOfButtons];
int Pressed_Confidence_Level[numberOfButtons]; //Measure button press cofidence
int Released_Confidence_Level[numberOfButtons]; //Measure button release confidence

#endif