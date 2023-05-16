#include <stdio.h>


int porownanie(char *s1, char *s2)
{
    int index = 0;
    while(s1[index] != NULL || s2[index] != NULL)
    {
        if(s1[index] != s2[index])
        {
            return 1;
        }
        index++;
    }

    return 0;
}

int main()
{
    int result = porownanie("cc", "ccc");

    printf("%d", result);

    return 0;
}