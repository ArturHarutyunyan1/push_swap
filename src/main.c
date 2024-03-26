#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    if (validator(argc, argv))
        return (1);
    initialize_stack(argv);
}