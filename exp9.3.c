#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile.txt", "r");    // Open file for reading
    if(fp == NULL) {
        printf("Error! File not found.\n");
        return 1;
    }

    printf("Reading file line by line:\n");
    while(fgets(line, sizeof(line), fp) != NULL) {  // Read one line at a time
        printf("%s", line);                         // Print the line
    }

    fclose(fp);                                     // Close file
    return 0;
}
