#include <mbed.h>

DigitalOut led(LED2);
DigitalOut ledd(LED3);
int main() {

    // put your setup code here, to run once:

    while(1) {
        led = !led;
        wait(0.1);
        ledd = !ledd;
        wait(0.5);
    }
}