#include <stdio.h>
#include <stdlib.h>
#include "sheets.h"

/* Write a program to take 2 numbers from user and calculate sum of all numbers between them. */

long SUM_NUM_BETWEEN_TO_NUMBER(int x , int y )
{
    long i ;
    long sum = 0 ;
    if (x >=y)
    {
        printf("the first number must come first\n");
        return 0 ;
    }
    for (i= x+1 ; i < y ; i++ )
    {
       sum+= i ;
    }
    return sum ;
}
/*
int main()
{
    int x=0  , y=0  ;
   scanf("%d%d",&x,&y) ;
  long a =  SUM_NUM_BETWEEN_TO_NUMBER(x,y) ;
  printf("a= %li\n",a) ;
    return 0;
}
*/
/* ******************************************************************************************************************************  */

/* Write a program to take numbers from user and find the max and min from them (let users choose the No of numbers. */
int return_max_number (int how_much_number , int *ptrmin )
 {
     int i = 0 ;
     int array[how_much_number] ;
     for (i=0 ; i  < how_much_number ; i ++)
     {
         scanf("%d",&array[i]) ;
     }
     int max = array[0] ;
     int min = array[0] ;
     for (i=0 ; i<how_much_number ; i++)
     {
         if (array[i] > max )
         {
             max = array[i] ;
         }
         if (array[i] < min )
         {
             min = array[i] ;
             ptrmin = min ;
         }
     }
     return max ;
 }

 /*
int main()
{
    int x , y ;
    scanf("%d",&x) ;
    y = return_max_number(5) ;
    printf("max numer is = %d\n",y) ;
    return 0;
}
*/
/* ****************************************************************************************************************************  */
/* Write a program to take numbers from user and calculate the sum of them (let users choose the No of numbers. */
long calculate_the_sum_of_dynamic_number(int how_much_number)
{
   int i =  0  ;
   long sum = 0  ;
   int array[how_much_number] ;
   for (int i = 0 ; i < how_much_number ; i++ )
   {
      scanf("%d",&array[i]) ;
   }
   for (i=0 ; i < how_much_number ; i++)
   {
       sum+=array[i];
   }
   return sum ;
}
/*
int main()
{
    int x =  0 ;
    scanf("%d",&x) ;
    long y = calculate_the_sum_of_dynamic_number(x) ;
  printf("sum= %ld\n",y) ;
    return 0;
}
*/
 /* Write a program that take two numbers and multiply them without using * operation. */
long Multi_Without_Using_Multi(int x , int y )
{
 int i = 0 ;
 long sum = 0 ;
 for (i=0 ; i < x ; i++)
 {
     sum+= y ;
 }
 return sum ;
}
/*
int main()
{
    while(1)
    {
     int x =0 , y =0 ;
     scanf("%d%d",&x,&y) ;
     long sum = Multi_Without_Using_Multi(x,y) ;
     printf("%li\n",sum) ;

    }

    return 0;
}
*/
/* Write a program that take two numbers and calculate the reminder without using % operation. */
 int DIV_Without_using_Div_sign(int x , int y )
 {
int i = 0 , sum = x ;
int c = 0 ;
if (x < y )
{
    printf("Numbr one must be bigger than number \n") ;
    return 0 ;
}
for (i=0 ; sum >= 0   ; i++)
{
  sum = sum - y ;
   c++ ;
}
return c ;
 }
 /*
int main()
{
    int x , y , sum ;
    while(1)
    {
        scanf("%d%d",&x,&y) ;
      sum = DIV_Without_using_Div_sign(x,y) ;
      printf("%d\n",sum)  ;
    }

    return 0;
} */

/* Write a program to calculate the power of a number. The number and its power are input from user. */
long power_of_number(int BASE , int power )
{
    int i ;
    long sum = 1 ;
    for (i=0; i < power   ; i++)
    {
        sum = sum * BASE ;
    }
    return sum ;
}
/*
int main()
{
    int  x , y ;
    long sum = 0 ;
    while(1)
    {
        scanf("%d%d",&x,&y) ;
        sum = power_of_number(x,y) ;
        printf("%lld\n",sum) ;
    }
    return 0;
} */

/* Write a program that reads a positive integer and computes the factorial.  */
long factorial (int num )
{
    int i ;
    long sum = 1 ;
    for (i= num ;   num > 0   ; num --)
    {
        sum = sum * num ;
    }
    return sum ;
}
/*
int main()
{
    int  x , y ;
    long sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
        sum = factorial(x) ;
        printf("%lld\n",sum) ;
    }
    return 0;
} */

/* Write a program that reads a positive integer and checks if it is a prime. */

status_of_prime_t IS_Prime (int num)
{
    status_of_prime_t s = Is_Prime ;
  int i = 0 , sum ;
  if (num == 0 )
      {
          s = Not_Prime ;
      }
      if ( num == 1 )
      {
          s = Not_Prime ;
      }
  for (i=2 ;  i < num ; i++)
  {
      sum = num / i ;

     if (sum * i == num )
     {
         s = Not_Prime ;
         return s ;
     }
  }
  return s ;
}

/*
int main()
{
    int  x , y ;
    long sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
       if (IS_Prime(x) == Is_Prime)
        printf("PRIME\n") ;
        else
            printf("not_prime\n") ;
    }
    return 0;
}
*/
/* Write a program that reads a positive integer and checks if it is a perfect square. */

status_of_prefectSquare_t prefect_square (int num)
{
   status_of_prefectSquare_t s = Not_prefectSquare ;
   int i ;
   if (num == 0 )
   {
       s = Not_prefectSquare ;
       return s ;
   }
   if (num == 1 )
   {
        s = Is_prefectSquare ;
           return s ;
   }
   for ( i = 1 ;  i <= (num/2)  ; i++)
   {
       if (i*i == num )
       {
           s = Is_prefectSquare ;
           return s ;
       }
   }
   return s ;
}
/*
int main()
{
    int  x , y ;
    long sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
       if (prefect_square(x) == Is_prefectSquare)
        printf("Is_prefectSquare\n") ;
        else
            printf("Not_prefectSquare\n") ;
    }
    return 0;
} */
/* Write a program that reads a positive integer and check if this number is a base of 2 like 1,2,4,8,16,32, 64... */
status_of_Base_of_two_t BASE_of_two (int num)
{
    int i , sum ;
    status_of_Base_of_two_t s = Not_BaseOfTwo ;
    if (num == 0 )
    {
        s = Not_BaseOfTwo ;
         return s ;
    }
    if (num == 1 )
    {
        s = Is_BaseOfTwo ;
         return s ;
    }
     if (num == 2 )
    {
        s = Is_BaseOfTwo ;
         return s ;
    }
    for (i = 0 ; sum <=num  ; i++)
    {
        sum*=2 ;
        if (sum == num)
        {
            s = Is_BaseOfTwo ;
            return s ;
        }
    }
    return s ;
}

/*
int main()
{
    int  x , y ;
    long sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
       if (prefect_square(x) == Is_prefectSquare)
        printf("Is_prefectSquare\n") ;
        else
            printf("Not_prefectSquare\n") ;
    }
    return 0;
} */
/* Write a program to sum the digits in a decimal number 145 -> 1+4+5=10. */
 int sum_of_digits_for_number ( int num )
 {
     int i = 0 , sum = 0 , digit = 0;
     for(i=0 ;  num > 0   ; i++ )
     {
        digit =  num % 10 ;
        sum = sum + digit ;
        num = num / 10 ;
     }
     return sum ;
 }
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
           sum = sum_of_digits_for_number(x) ;
            printf("%d\n",sum) ;
    }
    return 0;
} */
/* write a program to take even numbers from user and print the sum of them after each entry
    if the user enters 2 odd number the program print "bye" and stopped. */
void odd_flag(int num)
{
    static int  sum = 0  ;
    static int flag = 0 ;
    if(num %2 == 0)
    {
        sum+=num ;
        printf("sum=%d\n",sum) ;
    }
    else{
        flag ++ ;
    }
    if (flag == 1)
    {
        printf("warnning number is odd in sacaned time program will be stop\n") ;
    }
    if (flag==2)
    {
        printf("bye bye this is the sacand odd numer you enter\n") ;
        sum = 0 ;
        flag = 0 ;
    }
}
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
         odd_flag(x) ;
    }
    return 0;
} */
/* You are designing a poster which prints out numbers with a unique style applied to each of them. The styling
is based on the number of closed paths or holes present in a giver number. The number of holes that each of the
digits from 0 to 9 have are equal to the number of closed paths in the digit. Their values are:
1, 2, 3, 5 and 7 = 0 holes.
0, 4, 6, and 9 = 1 hole.
8 = 2 holes.
Example if number 3824->3 has 0 holes,8 has 2
holes,4 has 1 hole sum=0+2+1=3. */
static int number_of_hole(int digit)
{
    switch (digit)
        {
    case 0 :
        return 1 ;
    case 1 :
        return 0 ;
    case 2 :
        return 0 ;
    case 3 :
        return 0 ;
    case 4 :
        return 1 ;
    case 5 :
        return 0 ;
    case 6 :
        return 1 ;
    case 7 :
        return 0 ;
    case 8 :
        return 2 ;
    case 9 :
        return 1 ;
        }
}

int sum_of_hole_for_number (int num)
{
    int i = 0  , sum=0 , digit = 0 ;
    if (num == 0 )
    {
        return 1 ;
    }
    for ( i=0 ; num > 0  ; i++ )
    {
        digit = num % 10 ;
       sum = sum +  number_of_hole(digit) ;
       num = num / 10 ;
    }
    return sum ;
}
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    while(1)
    {
        scanf("%d",&x) ;
         sum = sum_of_hole_for_number(x) ;
         printf("%d\n",sum) ;
    }
    return 0;
}*/


