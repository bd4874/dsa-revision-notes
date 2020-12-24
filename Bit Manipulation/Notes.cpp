// Bit Manipulation Notes
// Author: REET

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos) {
    return ((1<<pos)&n);
}

int setBit(int n, int pos) {
    return ((1<<pos)|n);
}

int clearBit(int n, int pos) {
    return ((~(1<<pos))&n);
}

int updateBit(int n, int pos, int value) {
    return (((~(1<<pos))&n)|(1<<pos));
}

int main() {

    // GETBIT
    // 5 (0101)
    cout << "The bit at position 0 is: " << getBit(5,0) << "\n";
    cout << "The bit at position 1 is: " << getBit(5,1) << "\n";
    cout << "The bit at position 2 is: " << getBit(5,2) << "\n";
    cout << "The bit at position 3 is: " << getBit(5,3) << "\n";
    // OUTPUT
    // The bit at position 0 is: 1
    // The bit at position 1 is: 0
    // The bit at position 2 is: 1
    // The bit at position 3 is: 0

    // SETBIT
    cout << "Let's set bit at position 1\n";
    // 5 (0101) -> 7 (0111)
    cout << "Value after setting bit 1 at position 1 is: " 
    << setBit(5, 1) << "\n";
    // OUTPUT
    // Let's set bit at position 0
    // Value of n after setting bit 1 at position 1 is: 7

    // CLEARBIT
    cout << "Let's clear bit at position 1\n";
    // 7 (0111) -> 5 (0101)
    cout << "Value after clearing bit 1 at position 1 is: " 
    << clearBit(7, 1) << "\n";
    // OUTPUT
    // Let's clear bit at position 1
    // Value of n after clearing bit 1 at position 1 is: 5

    // UPDATEBIT = CLEARBIT+SETBIT
    cout << "Let's update bit at position 1 to 1\n";
    // 5 (0101) -> 7 (0111)
    cout << "Value after updating bit to 1 at position 1 is: " 
    << updateBit(5, 1, 1) << "\n";
    // OUTPUT
    // Let's update bit at position 1 to 1
    // Value after updating bit to 1 at position 1 is: 7
    return 0;
}