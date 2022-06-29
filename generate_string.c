#include <stdio.h>
#include <stdlib.h>

char generate_random_simbol(int i);

int main(int argc, char const *argv[])
{

    if (argc != 2)
    {
        printf("Missing string length parameter.");
        return 1;
    }

    char *p_str = NULL;

    int length_str = atoi(argv[1]);
    p_str = (char *)malloc(length_str * sizeof(char));

    for (int i = 0; i < length_str; ++i)
        p_str[i] = generate_random_simbol(i);
    
    printf("%s\n", p_str);

    free(p_str);

    return 0;
}

char generate_random_simbol(int i)
{
    return i == 10 ? 32 :(32 + rand() % (126 - 33));
}
