#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("myfile.txt", "w");   // Open file in write mode
    if(fp == NULL) {
        printf("Error! Unable to create file.\n");
        return 1;
    }

    printf("Enter text to write in file: ");
    fgets(text, sizeof(text), stdin); // Read input from user

    fputs(text, fp);                  // Write text to file
    fclose(fp);                       // Close file

    printf("File created and text written successfully!\n");
    return 0;
}
