#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        printf("Missing string length parameter");
        return 1;
    }

    char c = 'D';
    char *p_str = NULL;

    int length_str = atoi(argv[1]);
    p_str = (char *)malloc(length_str * sizeof(char));

    for (int i = 0; i < length_str; ++i)
    {
        p_str[i] = c;
        printf("%c", p_str[i]);
    }
    printf("\n");

    free(p_str);

    return 0;
}
