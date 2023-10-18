/*
# #
# #
# # # # #
# #
# #
# #
# # # # #
# # # # #
# #
# #
# #
# #
# # # # #
# # # # #
# # # # #
# #
# #
# #
# #
# #
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=2*i+2;j++)
        {
            printf("# ");
            if(j%2==0)
                printf("\n");
        }
        if(i<4)
        {
            for(k=1;k<=5*i;k++)
            {
                printf("# ");
                if(k%5==0)
                    printf("\n");
            }
        }
    }
}