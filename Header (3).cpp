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
        else if (k != count && dictionary[i] == ' ') { count = 0; space++; }
    }

    printf("From the letters of the specified text, you can compose the words number:");

    for (int i = 0; i < 4; i++)
    {
        if (words[i] == 1) { printf(" %d", (i + 1)); }
    }
}
