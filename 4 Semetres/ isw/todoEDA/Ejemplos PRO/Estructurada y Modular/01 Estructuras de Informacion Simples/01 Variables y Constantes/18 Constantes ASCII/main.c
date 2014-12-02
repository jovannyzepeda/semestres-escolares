#include <stdio.h>
#include <stdlib.h>

#define ENIE 0xA4
//#define ENIE 164

int main()
{
    //const char ENIE=0xA4;
    printf("la enie: %c\n",ENIE);
    printf("sue%co\n",ENIE);
    printf("sue\xA4o\n");
    return 0;
}
