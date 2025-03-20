#include "../push_swap.h"

int main(int argc, char **argv)
{
    while(argc > 0)
    {
        argc--;
        printf("validate characters (%s): %d\n", argv[argc], validate_characters(argv[argc]));
        printf("check long number (%s): %d\n", argv[argc], check_long_number(argv[argc]));
        printf("check_atol (%s): %d\n", argv[argc], check_atol(argv[argc]));
        printf("\n");
    }
}