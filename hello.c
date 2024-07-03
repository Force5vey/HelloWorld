#include <stdio.h>

int main()
{
int var = 20;
int *ptr;

ptr = &var;

printf("Value of var: %d\n", var);
printf("Address of var: %p\n", &var);
printf("POinter ptr address: %p\n", ptr);
printf("Value at pointer ptr: %d\n", *ptr);

return 0;

}
