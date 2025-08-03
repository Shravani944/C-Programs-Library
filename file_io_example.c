#include <stdio.h>

int main() {
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, File I/O in C!");
    fclose(fptr);
    printf("File written successfully.\n");
    return 0;
}
