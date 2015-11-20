#include "mbed.h"

//Drivers
PwmOut AHO(PB_1); //Adjust Pin numbers 
PwmOut BHO(PB_3);
PwmOut CHO(PB_5);
PwmOut ALO(PB_2); //Might not need Lower FETs be PWM, maybe just use DigitalOut?
PwmOut BLO(PB_4);
PwmOut CLO(PB_6);

void init() {
    AHO.period(0.00005);
    BHO.period(0.00005);
    CHO.period(0.00005);
    //Might not need to have Lower FETs be PWM
    //AHL.period(0.00005);
//    BHL.period(0.00005);
//    CHL.period(0.00005);
}

int main() {
    init();
    while(1) {
        myled = !myled;
        wait(1);
    }
}
