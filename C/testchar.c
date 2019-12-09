#include <stdio.h>

void charsum(char *a, char *b, char *r)
{
    int l1 = sizeof(a)/sizeof(char);
    int l2 = sizeof(b)/sizeof(char);
    char c[l1 + l2];
    int i =0;
    l1 = l1;
    l2 = l2;
    printf("%s%s\n",a,b);
    for(i = 0;i<l1;i++)
    {
        c[i]=a[i];
    }
    printf("0  %s\n",c);
    for(i = l1;i<(l1+l2);i++)
    {
        c[i]= b[i-l1];
    }
    printf("1  %s\n", c);
    for(i = 0; i<(l1+l2); i++)
    {
        printf("%c",c[i]);
    }
    printf("\n");
    r = c;
}

int main(int argc, char* argv)
{
    char* a = "hello";
    char* b = " world";
    char* c ;
    printf("a %d b %d\n",sizeof(a), sizeof(b));
    charsum(a, b, c);
    printf("c %s\n",c);

}
