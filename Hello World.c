#include <stdio.h>


int main() {
    //declare a string variable
    char string[15];

    //prompt to enter lecturer's name and save to string variable
    printf("Enter your lecturer's name: ");
    fgets(string, 15, stdin);

    //print hello world + lecturer's name
    printf("\nHello World! ");
    printf("%s", string);

    return 0;
}   

