#include <stdio.h>

int main() {
    //set a counter c and variable n
    int c = 1;
    int n;

    //Ask for input for N and save to variable n
    printf("This is a program to count 1-N \nEnter the value of N: ");
    scanf("%i", &n);


    //count from 1 to variable n
    while (c <= n) {
        printf("\n%i", c);
        c++;
    }
    
    return 0;

}