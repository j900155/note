#include <stdio.h>
#include <stdlib.h>
//int mid = 50;
int main(void)
{
    static char echo = 50;
    int left,  right, mid;
    
    //char *echo;
    //int mid;
    
    printf("Choose a number (1-100) !\n");
    printf("      And I will guess it !.\n");
    
       
    left = 1;
    right = 100;
    
    while(1)
    {
            if (left>right)
            {
               printf("You cheat me!\n");
               
               malloc( echo );
               break;
            }
            mid = (left + right) / 2;
            printf("%d",mid);
            printf("0 mid %d %d left %d  right %d  \n",mid,&mid, left, right);
            printf("%d",mid);
            printf("\nYour number is %d.\n", mid);
            printf("match(m), greater(g), or smaller(s) ?");
            scanf("%s", &echo);
            
           if(echo == 'M' || echo == 'm')
           {
            printf("%d",mid);
            printf("match\n");
            break;
           }
           else if( echo == 'G' || echo == 'g')
           {
            printf("%d",mid);
            printf("g1 mid %d %d left %d  right %d  \n",mid,&mid, left, right);
            left = mid +1;
            printf("g2 mid %d %d left %d  right %d  \n",mid,&mid, left, right);
           }
           else if(echo == 'S' || echo == 's')
           {
            printf("%d",mid);
            right = mid -1;
            printf("s mid %d %d left %d  right %d\n",mid,&mid, left, right);
           }
           else
           {
            printf("input error\n");    
           }
            
    
          
                 
    }
    
    
       
    system("PAUSE");
    return 0;
}
