#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define row 5
#define slen 20

int main()
{
    char *str[row];
    
    for(int i = 0; i < row; i++)
    {
        str[i] = (char *)malloc(sizeof(char) * (slen + 1));
    }

    for(int i = 0; i < row; i++)
    {
        printf("s%d : ", i + 1);
        scanf(" %[^\n\r\b]", str[i]);
    }

    for(int i = 0; i < row; i++)
    {
        printf("%s\n", str[i]);
    }

}
