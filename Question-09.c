/*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/


#include<stdio.h>
#include<string.h>

int main ()
{
    char str[5][20] ;
    
    int i ;

    printf("Enter 5 user_name : ");
    for(i=0 ; i<5 ; i++)
        gets(str[i]);


    char A[20];
    printf("Enter an User_name : ");
    gets(A);


    for (i=0 ; i<5 ; i++)
    {
        while (strcmp(str[i],A) == 0)
        {
            int x , j , f=1 ;
            printf("Enter a number for factorial : ");
            scanf("%d",&x);

            for ( j=1 ; j<=x ; j++)
            {
                f = f * j ;
            }

            printf("Fact of %d is %d",x,f);
            break ;
        }

        if (strcmp(str[i],A) == 0)
            break ;
        
    }

    if (i==5)
        printf("Invalid user name ");
    
    

}
