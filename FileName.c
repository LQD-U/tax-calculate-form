#include<stdio.h>

#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100
#define num 5

int main() {
    int i, num_year, low_rate;
    double value[num]; 

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_year);

  
    printf("\nYears");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%6d%%", low_rate + i);
    }
    printf("\n");

 
    for (i = 0; i < NUM_RATES; i++) {
        value[i] = INITIAL_BALANCE;
    }

  
    for (int year = 1; year <= num_year; year++) {
        printf("%3d    ", year); 
        for (i = 0; i < NUM_RATES; i++) {
            value[i] = value[i] * (1 + ((double)low_rate + i) / 100); 
            printf("%7.2f", value[i]); 
        }
        printf("\n");
    }
    return 0;
}
