/* friends.global_var -- uses pointer to a structure */
#include <stdio.h>

int global_init_var = 3;
int global_var;

static int statci_global_init_var = 4;
static int statci_global_var;

int main(void)
{
    int local_init_var = 3;
    static int static_local_init_var = 3;
    const int local_const = 3;
    char *p_char = "Hello world";
    char CharArry[] = "Hello world";

    printf("global_init_var         £º%p \n",&global_init_var);
    printf("statci_global_init_var  £º%p \n",&statci_global_init_var);
    printf("\n");

    printf("global_var              £º%p \n",&global_var);
    printf("statci_global_var       £º%p \n",&statci_global_var);
    printf("p_char £º%p \n",p_char);
    printf("\n");

    printf("local_init_var          £º%p \n",&local_init_var);
    printf("static_local_init_var   £º%p \n",&static_local_init_var);
    printf("local_const             £º%p \n",&local_const);
    printf("CharArry                £º%p \n",&CharArry);
    printf("\n");

    return 0;
}
