#include <stdio.h>
#include <stdlib.h>
void AGe(int a){

printf("\nyou are %d years old",a);

}
void AGE(int *a){

printf("\nyou are %d years old",*a);

}
int main()
{
  /* char a;
    char b;
    char c;
    int z;
printf("%d bytes\n",sizeof(a));
printf("%d bytes\n",sizeof(b));
printf("%d bytes\n",sizeof(c));
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);
    printf("%p",&z);*/
    int age=21;
    int *pAge=&age;
    printf("%p\n",&age);
    printf("%p",pAge);
    printf("\n*************************\n");
    //printf("%d",*pAge);//pointer contain adress and this line acces directly to the value of the reference adress
    AGe(age);//first method
    AGE(&age);//secong
    AGE(pAge);//third methos
//AGE(*pAge);not correct call because it is integer
    return 0;
}
