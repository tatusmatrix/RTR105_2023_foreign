#include "foo.h"
#include <stdio.h>

int main(void)
{
    int id_main = 42;
    printf("address of id_main: %p\n",&id_main);
    printf("value of id_main (before foo execution): %d\n",id_main);

    //char *name_main = "bar";
    char name_main[] = "bar";
    printf("address of name_main: %p\n",name_main);
    printf("value of name_main (before foo execution): %s\n\n",name_main);

    //foo(42, "bar");
    foo(id_main, name_main);

    printf("\naddress of id_main: %p\n",&id_main);
    printf("value of id_main (after foo execution): %d\n",id_main);

    printf("address of name_main: %p\n",name_main);
    printf("value of name_main (after foo execution): %s\n",name_main);

    return 0;
}
