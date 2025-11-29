//
#include <stdio.h>

int main() {
    FILE *file;
    char line[256];  // buffer to store each line

    // Open the file in read mode
    file = fopen("exp1.c", "r");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;  // exit if file not found
    }

    // Read and display each line until EOF
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}