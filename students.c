#include <stdio.h>
#include <string.h>


int main() {
    //declare a counter variable c and an array student with size for 10 students
    int c = 0;
    char student[10][15];

    //while loop to take input for 10 student's name and save them to the array students
    while (c < 10) {
        printf("Enter Student %i name: ", c+1);
        fgets(student[c], 15, stdin);
        c++;
    }

    //print each member of the array (the names of the students)
    printf("\nThe names of the 10 students are>>> ");
    for (c = 0; c < 10; c++) {
        printf("\n%i)" " %s", c+1, student[c]);
    
    }

    return 0;


}