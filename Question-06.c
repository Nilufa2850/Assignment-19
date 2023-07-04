// Write a program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>

int main ()
{
    char str [5][20] ;
    int i , L , j;

    printf("Enter 5 string : ");
    for(i=0 ; i<5 ; i++)
        gets(str[i]);

    
    printf("palindrome strings are : \n");

    
    for(i=0 ; i<5 ; i++)
    {
        L = strlen(str[i]) ;

        for ( j=0 ; j<L/2 ; j++)
        {
            if (str[i][j] != str[i][L-1-j])
                break ;

        }
        if(j == L/2)
            printf("%s\n",str[i]) ;

        L = 0 ;
        
    }

    return 0 ;

}
