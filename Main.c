#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main() {
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
        Hz(length);
    }
    else if (input == 2){
        printf("Enter what you wanna 1.Voltage 2.Resistance 3.Ampers \n");
        scanf("%d",&input1);
        if (input1 == 1){
            printf("Write Amperes: ");
            scanf("%f",&a);
            printf("Write Ω: ");
            scanf("%f",&om);
            printf("%f""Your voltage: ",volt(a,om));
        }
        else if (input1 == 2){
           printf("Write volt: ");
           scanf("%f",&v);
           printf("Write Amperes: ");
           scanf("%f",&a);
           printf("%f""Your resistance: ",Resistance(v,a));
        }
        else if (input1 == 3){
            printf("write voltage: ");
            scanf("%f",&v);
            printf("Write Ω: ");
            scanf("%f",&om);
            printf("%f""You ampers is: ",Ampers(v,om));
        }
        else{
            printf("Error");
        }

    }

    return 0;
}
