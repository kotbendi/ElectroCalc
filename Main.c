#include <stdio.h>
#include <stdlib.h>
float calcFrequencyMHz(float lengthMeters);
float volt(float a ,float o){
    return a * o;
}
float Resistance(float v,float a){
    return v / a;
}
float gerc(float leg){
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

int main() {
    int input;
    int input1;
    float a;
    float v;
    float om;
    float length = 0.0;

    printf("Enter what you wanna 1.calc Hz 2.calc Ω: ");
    scanf("%d",&input);
    system("clear");
    if (input == 1){
        printf("Enter lenght antenna in meters: ");
        scanf("%f", &length);
        if (length == 0){
            printf("Error cant to low");
            return 1;
        }
        gerc(length);
    }
    else if (input == 2){
        printf("Enter what you wanna 1.Voltage 2.Resistance \n");
        scanf("%d",&input1);
        if (input1 == 1){
            printf("Write Amperes: ");
            scanf("%f",&a);
            printf("Write Ω: ");
            scanf("%f",&om);
            printf("Your voltage: ");
            printf("%f",volt(a,om));
        }
        else if (input1 == 2){
           printf("Write volt: ");
           scanf("%f",&v);
           printf("Write Amperes: ");
           scanf("%f",&a);
           printf("Your resistance: ");
           printf("%f",Resistance(v,a));
        }
        else{
            printf("Error");
        }

    }

    return 0;
}
