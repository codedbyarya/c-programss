#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");  // Open file in read mode
    if(fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    printf("Contents of file:\n");
    while((ch = fgetc(fp)) != EOF) {  // Read each character until end of file
        putchar(ch);                  // Display character on screen
    }

    fclose(fp);                       // Close the file
    return 0;
}
