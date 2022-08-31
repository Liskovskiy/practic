#include<stdio.h>
#include "Header.h"
void recognition(char text[], char dictionary[])
{
    int count = 0;
    int word = 0;
    int words[4]{};
    int space = 0;
    int k = 0;
    for (int i = 0; i < 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            if (dictionary[i] == text[j]) { count++; break; }
            else if (text[j] == '\0') { break; }
        }
        k++;
        if (k == count && dictionary[i] == ' ') { count = 0; words[space]++; space++; k = 0; }
        else if (k == count && dictionary[i] == '\0') { count = 0; words[space]++; space++; k = 0; break; }
        else if (k != count && dictionary[i] == ' ') { count = 0; space++; k = 0; }
    }
    int j = 0;
    space = 0;
    for (int l = 0; l < 4; l++) { if (words[l] == 1) { space++; } }
    printf("Text has %d words:", space);

    for (int i = 0; i < 4; i++)
    {
        if (words[i] == 1) 
        { 
            printf(" ");
            while (dictionary[j] != ' ' && dictionary[j] != '\0')
            {
                printf("%c", dictionary[j]);
                j++;
            }
            j++;
        }
        else
        {
            while (dictionary[j] != ' ' && dictionary[j] != '\0')
            {
                j++;
            }
            j++;
        }
    }
}
