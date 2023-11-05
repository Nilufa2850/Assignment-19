/*8. Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
word1 = “the”, word2 = “fox”, OUTPUT : 2 )*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
    char a[5][20] ;
    char w1[20] , w2[20] ;
    int i ;
    int word1=-1 , word2=-1 ;
    int min ;
    
    printf("Enter 5 strings : ") ;
    for (i=0 ; i<=4 ; i++)
        gets(a[i]) ;

    printf("Enter 1st word : ") ;
    gets(w1) ;
    printf("Enter 2nd word : ") ;
    gets(w2) ;

    for (i=0 ; i<=4 ; i++)
    {
        if (strcmp(a[i] , w1)==0)
            word1 = i ;

        if (strcmp(a[i] , w2)==0)
            word2 = i ;
    }
    if (word1==-1 || word2==-1)
        printf("Word does not match") ;
    else
    {
        min = abs(word1 - word2) ;
        printf("minimum different is %d" , min-1 ) ;

    }
    

    
}
