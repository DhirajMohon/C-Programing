#include<stdio.h>
    int main ()
    {
        /*int start=200;
        int end=300;*/

        int start,end;
        int count=0, sum=0,i;

        printf("Enter starting number: ");
        scanf("%d", &start);
        printf("Enter ending number: ");
        scanf("%d", &end);

        for(i=start;i<=end;i++)
        {
            if(i%6==0)
            {
                count++;
                sum=sum+i;
            }
        }
        printf("\nNumber of integers divisible by 6 between %d and %d is: %d",start,end,count);
        printf("\nsum of integers divisible by 6 between %d and %d is: %d\n",start,end,sum);


        return 0;

    }
