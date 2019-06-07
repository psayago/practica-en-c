#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char* argv[])
{
    FILE* archivo1;
    FILE* archivo2;
    char c;

    archivo1 = fopen(argv[1], "r");
    archivo2 = fopen(argv[2], "w");

    if (archivo1 == NULL || archivo2 == NULL)
    {
        printf ("Error al abrir los archivos\n");
        return 1;
    }

    do
    {
        c = getc(archivo1);
        if (c == 'a')
        {
            putc('e', archivo2);
        }
        else
        {
            putc(c, archivo2);
        }
    }
    while (c != EOF);

    fclose(archivo1);
    fclose(archivo2);

    return 0;
}
