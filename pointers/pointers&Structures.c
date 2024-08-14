#include <stdio.h>

struct person {

    int age;
    char *name;

};

int main()
{

    struct person first;
    struct person *ptr;

    first.age = 21;
    char *fullname = "full name";
    first.name = fullname;
    ptr = &first;

    printf("age=%d, name=%s\n", first.age, ptr->name);
}