#include "build/temp/_test_led.c"
#include "src/leds.h"
#include "/var/lib/gems/2.5.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"












static uint16_t leds = 0xffff;



void setUp() {

    Leds_Create(&leds);

}



void tearDown() {}





void test_LedsOffAfterCreate() {

    static uint16_t leds = 0xffff;

    Leds_Create(&leds);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_HEX16);

}





void test_AllOff() {

    Leds_AllOn();

    Leds_AllOff();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_HEX16);

}





void test_AllOn() {

    Leds_AllOn();

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xffff)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_HEX16);

}







void test_MultipleOnOff() {

    Leds_On(2);

    Leds_On(5);

    Leds_Off(2);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1 << (5 - 1))), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_HEX16);

}



void test_IsOn() {

    const int led = 2;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_INT);

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_INT);

}





void test_On1() {

    const int led = 1;

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1 << (led - 1))), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX16);

}



void test_On16() {

    const int led = 16;

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((1 << (led - 1))), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_HEX16);

}



void test_Off1() {

    const int led = 1;

    Leds_AllOn();

    Leds_Off(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((~(1 << (led - 1)))), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_HEX16);

}



void test_Off16() {

    const int led = 16;

    Leds_AllOn();

    Leds_Off(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((~(1 << (led - 1)))), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX16);

}



void test_IsOn1() {

    const int led = 1;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_INT);

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_INT);

}



void test_IsOn16() {

    const int led = 16;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(89), UNITY_DISPLAY_STYLE_INT);

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(91), UNITY_DISPLAY_STYLE_INT);

}





void test_On0() {

    const int led = 0;

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_HEX16);

}



void test_On17() {

    const int led = 17;

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0x0)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_HEX16);

}



void test_Off0() {

    const int led = 0;

    Leds_AllOn();

    Leds_Off(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xffff)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_HEX16);

}



void test_Off17() {

    const int led = 17;

    Leds_AllOn();

    Leds_Off(led);

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xffff)), (UNITY_INT)(UNITY_INT16)((leds)), (

   ((void *)0)

   ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_HEX16);

}



void test_IsOn0() {

    const int led = 0;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);

}



void test_IsOn17() {

    const int led = 17;

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_INT);

    Leds_On(led);

    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Leds_IsOn(led))), (

   ((void *)0)

   ), (UNITY_UINT)(132), UNITY_DISPLAY_STYLE_INT);

}
