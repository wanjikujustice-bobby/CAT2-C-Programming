/*
NAME:JUSTICE MUCHIRI WANJIKU
REG:CT101/G/26422/25
DEPART:COMPUTER SCIENCE
YEAR: 1
INSTITUTION: KIRINYAGA UNIVERSITY

*/
#include <stdio.h>
#include <stdlib.h>

void writeInput() {
    FILE *fp;
    int i, num;

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(fp, "%d ", num);
    }

    fclose(fp);
}

void processInput() {
    FILE *fpIn, *fpOut;
    int num, sum = 0, count = 0;
    float average;

    fpIn = fopen("input.txt", "r");
    fpOut = fopen("output.txt", "w");

    if (fpIn == NULL || fpOut == NULL) {
        printf("Error opening files!\n");
        exit(1);
    }

    while (fscanf(fpIn, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    average = (float)sum / count;

    fprintf(fpOut, "Sum = %d\nAverage = %.2f\n", sum, average);

    fclose(fpIn);
    fclose(fpOut);
}

void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\n\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error opening output.txt!\n");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeInput();
    processInput();
    displayFiles();
    return 0;
}