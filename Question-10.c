/*10. Create an authentication system. It should be menu driven.*/

#include<stdio.h>
#include<string.h>
//#include<stdlib.h>

int main ()
{
    char str [3][2][20] ;
    char user[20] , pass[20] ;

    int i , j , c=0 ;
    
    printf ("Enter 3 members user and password\n") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<2 ; j++)
            gets(str[i][j]) ;

    printf("************************\n") ;
    for (i=0 ; i<=2 ; i++)
        for (j=0 ; j<2 ; j++)
            printf("\n%s" ,str[i][j]) ;

    printf("\nenter user name : ") ;
    gets(user) ;

    printf("\n enter password : ") ;
    gets(pass) ;

    for (i=0 ; i<3 ; i++)
    {
        if  ( (strcmp(str[i][0] , user)==0) && (strcmp(str[i][1] , pass)==0 ) )
        {
            c++ ;
            printf("Valid user and password") ;
            break ;
        }
        
    }
    if (c==0)
        printf("invalid") ;

    
}
