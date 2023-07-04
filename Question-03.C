// Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>

int main ()
{
    int m , i;

    printf("Size of 2D array of strings (m) :");
    scanf("%d",&m);


    char str[m][20] ;

    printf("Enter %d string : ",m);
    for(i=0 ; i<m ; i++)
        scanf("%s",str[i]);

    printf("\nDisplay the string : \n");

    for(i=0 ; i<m ; i++)
    {
        printf("%d. %s",i+1 , str[i]);
        printf("\n");

    }
        
}
