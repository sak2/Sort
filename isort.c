/*
  Insertion Sort by Saleh Ahmed Khan
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    //printf("In main.\n");
    int array_len;
    if (argc == 1)
    {
        printf("\nNo inputer parameters detected. Enter array length:\n");
        while (scanf("%d", &array_len)==0);
    }
    else
    {
        array_len = argc;
    }
    printf("%d",array_len);
}
