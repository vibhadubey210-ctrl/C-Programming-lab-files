//1.	Write a program to create a new file and write text into it.
#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("myfile.txt", "w");   
    if (fp == NULL) {
        printf("Error! File cannot be created.\n");
        return 1;
    }
    fprintf(fp, "This is a sample text written into the file.\n");
    fprintf(fp, "File Handling Experiment in C.");
    fclose(fp);
    printf("File created and text written successfully!\n");
    return 0;
}
