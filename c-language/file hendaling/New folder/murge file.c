#include <stdio.h>

void main() {
    FILE *file1, *file2, *file3;
    char ch;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");
    file3 = fopen("file3.txt", "w");

    if (file1 == NULL || file2 == NULL || file3 == NULL) {
        printf("Error in opening file(s).\n");
        
    }

    printf("Merging files file1.txt and file2.txt into file3.txt\n");

    while ((ch = fgets(file1)) != EOF) {
        fputs(ch, file3);
    }

    while ((ch = fgets(file2)) != EOF) {
        fputs(ch, file3);
    }

    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("Merging successfully completed.\n");
   
}
