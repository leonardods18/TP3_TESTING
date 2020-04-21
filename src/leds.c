//---------------TP 3 Testing de software--------------------
//-  prof: Esteban Volentini - alumno  Del Sancio Leonardo  -

#include <stddef.h>
#include "leds.h"

static uint16_t *_leds = NULL;

void Leds_Create(uint16_t *leds) 
{
_leds = leds;     Leds_AllOff();
}
static uint16_t mask(int n) 
{
return 1 << (n - 1);
}
void Leds_AllOff() 
{
*_leds = 0x0;
}
void Leds_On(uint8_t n) 
{
*_leds |= mask(n);
}
void Leds_Off(uint8_t n) 
{
*_leds &= ~mask(n);
}
bool Leds_IsOn(uint8_t n) 
{
return *_leds & mask(n);
}
void Leds_AllOn() 
{
*_leds = 0xffff;
}
