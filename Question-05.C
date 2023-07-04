/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char str [5][20] ;
    int i ;

    printf("Enter 5 email address : ");
    for(i=0 ; i<5 ; i++)
        gets(str[i]);

    
    printf("valid emails are : \n");
    for(i=0 ; i<5 ; i++)
    {
        if ( strchr(str[i] , '@') != 0 )
        {
            printf(" %s\n",str[i]) ;
             
        }
    }

    return 0 ;

}
