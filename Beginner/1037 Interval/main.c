#include <stdio.h>
#include <stdlib.h>

int main()
{
        double num;
        scanf("%lf",&num);
        if(0<=num && 25>=num)
        {
            printf("Intervalo [0,25]\n");
        }
        else if(25<num && 50>=num)
        {
            printf("Intervalo (25,50]\n");
        }
        else if(50<num && 75>=num)
        {
            printf("Intervalo (50,75]\n");
        }
        else if(75<num && 100>=num)
        {
            printf("Intervalo (75,100]\n");
        }
        else{
            printf("Fora de intervalo\n");
        }

    return 0;
}
