//Read some Malayalam Movie Names from User And Sort it.
#include<stdio.h>
#include<string.h>
#define MAX_MOVIES 10
#define MAX_NAME_LENGTH 100
void main()
{
    int numMovies,i,j;
    char movies[MAX_MOVIES][MAX_NAME_LENGTH],temp[50];
    printf("Enter the number of malayalam movies(<=10): ");
    scanf("%d",&numMovies);
    if(numMovies>MAX_MOVIES)
    {
        printf("Exceeded maximum number of movies allowed!\n");
        return;
    }
    char str[50];
    printf("Enter the movie names: ");
    for(i=0;i<=numMovies;i++)
    {
        //scanf("%s",movies[i]);
        //printf("\nMovie %d : ",i);
        gets(movies[i]);
    }
    for(i=0;i<=numMovies-1;i++)
    {
        for(j=0;j<=numMovies-i-1;j++)
        {
            if(strcmp(movies[j],movies[j+1])>0)
            {
                strcpy(temp,movies[j]);
                strcpy(movies[j],movies[j+1]);
                strcpy(movies[j+1],temp);
            }
        }
    }
    printf("\nSorted movies list:\n");
    for(i=0;i<=numMovies;i++)
        printf("%s\n",movies[i]);
}
