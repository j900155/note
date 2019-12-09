#include <stdio.h>

void a(void)
{
    printf("aaa\n");
}

int b()
{
    printf("bbb\n");
//    return 0;
}
int main(void)
{
    a();
    int rb = b();
    printf("rb %d\n",rb);
}


