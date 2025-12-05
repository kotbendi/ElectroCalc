#pragma once
#include <stdio.h>
    int input;
    int input1;
    float a;
    float v;
    float om;
    float length = 0.0;
float calcFrequencyMHz(float lengthMeters);
float volt(float a ,float o){
    return a * o;
}
float Resistance(float v,float a){
    return v / a;
}
float Ampers(float v,float om){
    return v / om;
}
float Hz(float leg){
    float freqMHz = calcFrequencyMHz(leg);
    float freqHz = freqMHz * 1000000;
    printf("Frequency:\n");
    printf("  %.3f MHz\n", freqMHz);
    printf("  %.0f Hz\n", freqHz);
    return 0;
}
float calcFrequencyMHz(float lengthMeters) {
    return 150.0 / lengthMeters;
}
