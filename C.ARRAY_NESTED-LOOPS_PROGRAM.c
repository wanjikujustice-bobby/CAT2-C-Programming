/*
NAME:JUSTICE MUCHIRI WANJIKU
REG:CT101/G/26422/25
DEPART:COMPUTER SCIENCE
YEAR: 1
INSTITUTION: KIRINYAGA UNIVERSITY

*/

#include <stdio.h>

int main() {
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    int i, j; // declare loop variables outside the for loop

    // Printing elements using nested loops
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n"); // move to next line after each row
    }

    return 0;
}