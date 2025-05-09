#include<stdio.h>
int main(){
    int n1, *ptr=&n1;
    printf("\n%d %p",sizeof(n1), &*ptr);
    printf("\n %p",&*ptr);
    printf("\n %d",*ptr);
    printf("\n %p",ptr);
    printf("\n%d",*ptr);
    printf("\n %p",&*ptr);
    printf("\n%d", sizeof(n1));
    printf("\n%d", sizeof(ptr));
    printf("\n%d", sizeof(*ptr));
    return 0;
}