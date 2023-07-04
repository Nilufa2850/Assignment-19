// 4.Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>

int main ()
{
    char str [5][20] ;
    int i ;

    printf("Enter 5 string : ");
    for(i=0 ; i<5 ; i++)
        gets(str[i]);

    char A[20] ;
    printf("\nEnter a string : ");
    gets(A);


    for(i=0 ; i<5 ; i++)
    {
        if ( strcmp(str[i] , A) == 0 )
        {
            printf("String is listed in given string list.") ;
            break ;
            
        }
    }

    if(i==5)
        printf("invalid string");

}
