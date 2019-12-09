#include <stdio.h>

int sum(int a, int b)
{
    return a+b;
}

char 
int main(int argc,char  *argv)
{   
    int i = 0;
    int *pi = &i;
    int* pi2 = &i;
    printf("i =   %d  &i =  %d \n",i, &i);
    printf("pi =  %d *pi =  %d  &*pi =  %d  &pi  = %d\n",pi,  *pi,  &*pi,  &pi);
    printf("pi2 = %d *pi2 = %d  &*pi2 = %d  &pi2 = %d\n",pi2, *pi2, &*pi2, &pi2);
    char c = 'c';
    double d = 123.3;
    printf("argc %d\n",argc);
    for(i =0; i<argc; i++)
    {
        printf("argv[%d] %c\n",i, argv[i]);
    }
    
    printf("sum() 2+3 = %d\n",sum(2,3));

    int (*prt)(int,int) = sum;
    int (*prt2)(int,int) = sum;
    printf("sum(3,5) prt = %d   ans: %d\n",prt, (*prt)(3,5));
    printf("sum(3,5) pr2t = %d   ans: %d\n",prt2, (*prt2)(3,5));
    printf("%d %d\n", prt,&prt);
    return 0;
}
