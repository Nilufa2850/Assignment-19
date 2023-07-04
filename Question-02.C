/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char str [10][20] ;

    char A[20] ; 

    int i , j , k , Return , round ;

    printf("Enter 10 city name : ");
    for(i=0 ; i<=9 ; i++)
        fgets(str[i] , 20 , stdin);

    
    for(round=1 ; round<=10-1 ; round++)
    {

        for(i=0 ; i<=9-round ; i++)
        {
                Return = strcmp(str[i],str[i+1]);

                if(Return > 0)
                {
                    strcpy(A , str[i]);
                    strcpy(str[i] , str[i+1]);
                    strcpy(str[i+1],A) ;
                }

        }

    }


    printf("In Dictionary Order : \n");
    for(i=0 ; i<=9 ; i++)
        printf("%s",str[i]);

    return 0 ;
}
