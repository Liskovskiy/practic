#include<stdio.h>
#include "Header.h"
int main(void)
{
    char dictionary[] = "string cola cup umbrella"; 
    char text[] = "string cola are umbrella";
    int i = 0;
    printf("Text: ");
    while (text[i]!='\0')
    {
        printf("%c", text[i]);
        i++;
    }
    printf("\n");
    i = 0;
    printf("Dictionary: ");
    while (dictionary[i] != '\0')
    {
        printf("%c", dictionary[i]);
        i++;
    }
    printf("\n");
    recognition(text, dictionary);
    return 0;
}
