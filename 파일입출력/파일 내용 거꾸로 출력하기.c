#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    
    char tmp;
    FILE* fp = fopen("words.txt", "r");

    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    char buffer[10001] = {0,};

    for (int i = 0; i < size; i++)
    {
        fseek(fp, -(i + 1), SEEK_END);
        fread(&tmp, sizeof(char), 1, fp);
        buffer[i] = tmp;
    }

    fwrite(buffer, strlen(buffer), 1, stdout);

    return 0;
}