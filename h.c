#include<stdio.h>

int checkPrime(int num)
{
      
 
   for ( c=2 ; c <= a-1 ; c++ )
   { 
      if ( a%c == 0 )
     return 0;
   }
   return 1;
    
}


void main()
{   
    int num,a,c=2;
    
    int result;
    scanf("%d",&num);
    result=checkPrime(num);
    printf("%d",result);
}

