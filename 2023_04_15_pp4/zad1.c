#include <stdio.h>
char* firstOccurence(char * string, char needle);

int main() {
    char * string = "Jest Dobrze";
    firstOccurence(string, 'D');

    return 0;
}

char * firstOccurence(char * string, char needle) {
    for (int i = 0; string[i] != '0'; i++)
    {
        if(string[i] == needle)
        return &string[i];
    }
    return NULL;
}