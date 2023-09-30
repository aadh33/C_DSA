#include <stdio.h>

union demo{
    int a;
    char b;
    float c;

}u;
void main(){
   union demo *ptr=&u;
    u.a=15;
    u.b=88;
    u.c=9.15478;
    printf("the entity is %d \n",ptr->a);
    printf("the entity is %c \n",ptr->b);
    printf("the entity is %f \n",u.c);
}
