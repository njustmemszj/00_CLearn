/* friends.global_var -- uses pointer to a structure */
#include <stdio.h>


int main(void)
{
    
    int arr[] = {1,2,3,4,5};
    int *p = arr;
    printf("arr address is  : %p \n",p);
    printf("-----\n");

for (int i =0;i <5;i++)
{
    printf("p address is    : %p \n",p);
    printf("the value is    : %d \n",*p++); // *p first and ++
    printf("p++ address is  : %p \n",p);
    printf("-----\n");
}
    
    return 0;
}
