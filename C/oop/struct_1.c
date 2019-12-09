#include <stdio.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

void add_next(node *a, node *b)
{
    //a -> value += 1;
    printf("%d \n", a ->value);
    a ->next = b;
}

void show(node *a)
{
    node *b;
    printf("a %d \n",a ->value);
    if(a->next)
    {
        show(a -> next);
    }
}
int main(int argc, char *argv[])
{
    int i;
    node a[10];
    a[0].value = 0;
    a[0].next = NULL;
    for(i = 1; i<10; i++)
    {
        a[i].value = i;
        a[i].next = NULL;
        add_next(&a[i-1], &a[i]);
    }
    printf("%d\n",sizeof(a[0]));
    printf("%d\n",a[0].value);
    show(&a[0]);
}
