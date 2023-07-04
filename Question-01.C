/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/

#include<stdio.h>

int main ()
{
    char str[5][20];
    printf("Enter five string : ");

    int i,j , count = 0 ;
    for(i=0 ; i<=4 ; i++)
        fgets(str[i],20,stdin);

    for(i=0 ; i<=4 ; i++)
    {
        count = 0 ;
        for(j=0 ; str[i][j] ; j++)

              if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u')
                    count ++ ;

        printf("\nNumber of vowels of %dth string are : %d",i ,count);
    }

    
    return 0 ;
    
}
