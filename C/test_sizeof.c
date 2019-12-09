#include <stdio.h>

struct t0
{
    int i;
    long l;
    char c;
};

struct t1
{
    long l;
    int a;
    char c;
};
int main(void)
{
    char a = 'a';
    int i = 1;
    printf("a %c sizeof a %d\n",a,sizeof(a));
    printf("i %d sizeof i %d\n",i,sizeof(i));
    
    
    struct t1 w;    
    struct t0 q;
    q.i = 0; q.l = 0; q.c = 'c';
    w.a = 1; w.l = 0; w.c = 'c';
    printf("t0 q %d sizeof t0 %d\n",q.i, sizeof(q));
    printf("t1 w %d sizeof t1 %d\n",w.a, sizeof(w));
}
