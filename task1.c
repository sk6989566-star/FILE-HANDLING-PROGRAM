#include <stdio.h>
int main()
{
    FILE *file;
    char character;
    file = fopen("sample.txt", "w");
    if (file == NULL)
    {
        printf("Unable to create file\n");
        return 1;
    }
    fprintf(file, "Hello, this is the first line.\n");
    fprintf(file, "This program shows file handling in C.\n");
    fclose(file);
    file = fopen("sample.txt", "a");
    if (file == NULL)
    {
        printf("Unable to open file for appending\n");
        return 1;
    }
    fprintf(file, "This line is added at the end of the file.\n");
    fclose(file);
    file = fopen("sample.txt", "r");
    if (file == NULL)
    {
        printf("Unable to open file for reading\n");
        return 1;
    }
    printf("File contents:\n");
    while ((character = fgetc(file)) != EOF)
    {
        printf("%c", character);
    }
    fclose(file);
    return 0;
    }









