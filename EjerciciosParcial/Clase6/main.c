#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[])
{
    char cadEncriptada[50];
    int tamanioCad = 0;
    int i;

    printf ("%s\n", argv[0]);
    printf ("%s\n", argv[1]);
    printf ("%s\n", argv[2]);
    printf ("%d\n", argc);
    printf ("\n");

    if (strlen(argv[1]) == strlen(argv[2]))
    {
        tamanioCad = strlen(argv[1]);
        for (i=0; i<tamanioCad; i++)
        {
            cadEncriptada[i] = argv[1][i] + argv[2][i];
        }
        printf ("%s\n", cadEncriptada);
        for (i=0;i<tamanioCad;i++)
        {
            printf ("%c", cadEncriptada[i]);
        }
        printf ("\n");

        for (i=0; i<tamanioCad; i++)
        {
            cadEncriptada[i] = cadEncriptada[i] - argv[2][i];
        }
        printf ("%s\n", cadEncriptada);
        for (i=0;i<tamanioCad;i++)
        {
            printf ("%c", cadEncriptada[i]);
        }
        printf ("\n");

    }
    else
    {
        printf ("Las cadenas son de distinta longitud\n");
        return 1;
    }


    return 0;
}
