#include <stdio.h>

struct Status {
    // We only need 1 bit for true/false
    unsigned int isWifiConnected : 1; 
    unsigned int isBluetoothOn : 1;
    // We need 4 bits to store a value up to 15
    unsigned int batteryLevel : 4; 
};

int main() {
    struct Status device = {1, 0, 12}; // Wifi On, BT Off, Battery level 12

    printf("Wifi: %d\n", device.isWifiConnected);
    printf("Bluetooth: %d\n", device.isBluetoothOn);
    printf("Battery: %d\n", device.batteryLevel);
    
    printf("Size of struct: %lu bytes\n", sizeof(device)); 
    // This will likely print 4 bytes (size of int), storing multiple variables efficiently.

    return 0;
}