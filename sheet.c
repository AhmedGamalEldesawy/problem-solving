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

/* ******************************************************* sheet 2 **********************************************************/
/*Write a program that reads the radius of a circle and calculates the area and circumference. */
double Area_for_circle(int radius)
{
    double area ;
    area = (3.142857) * (radius) * (radius) ;
    return area  ;
}
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    double Area ;
    while(1)
    {
        scanf("%d",&x) ;
         Area = Area_for_circle(x) ;
         printf("%lf\n",Area) ;
    }
    return 0;
}*/
/* Write a C program to take a number and a character from user if the number is even print the same
   character, if the number is odd print the other case of the character (a->A, B->b). */
void number_character( int number, char chr )
{
    if (number%2==0)
    {
        printf("%c",chr) ;
    }
    else
    {
        if (chr>='A' && chr <= 'Z')
        {
             printf("%c\n",chr+('a' - 'A')) ;
        }
        else
        {
              printf("%c\n",(chr-('a' - 'A'))) ;
        }
    }
}
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    double Area ;
    char c ;
    while(1)
    {
        fflush(stdin) ;
        scanf("%d",&x) ;
        fflush(stdin) ;
        scanf("%c",&c) ;
        number_character(x,c);
    }
    return 0;
}*/
/* Write a program to reverse a number in decimal representation (1205->5021). */
int  reverse_digit_for_number (int number)
{
    int i = 0 , sum = 0 , digit = 0 ;
    for (i=0 ;  number  ;i++)
    {
        digit = number % 10 ;
        sum = digit + sum * 10 ;
        number = number / 10 ;
       // printf("%d\n",sum) ;
    }
    return sum ;
}
/*
int main()
{
    int  x , y ;
    int sum = 0 ;
    double Area ;
    char c ;
    while(1)
    {
        fflush(stdin) ;
        scanf("%d",&x) ;
      sum = reverse_digit_for_number(x) ;
      printf("%d\n",sum) ;
    }
    return 0;
} */
/* Write a program to count the number of 1’s in an unsigned 32-bit integer. */
int number_of_one ( unsigned int number)
{
    int i = 0 , counter = 0 , digit = 0  ;
    for (i=0 ;  i < 32  ; i++)
    {

       if ( ((number >> i) & 1 ) )
       {
           counter ++ ;
       }
    }
 return counter ;
} /*
int main()
{
    unsigned int  x , y ;
    int sum = 0 ;
    double Area ;
    char c ;
    while(1)
    {
        fflush(stdin) ;
        scanf("%d",&x) ;
      sum = number_of_one(x) ;
      printf("%d\n",sum) ;
    }
    return 0;
}*/
/* write a program to print the binary representation of a number, try not to print zeros on the left (5->print 101). */
static int powerofnumber (int base , int power)
{
    int i , sum = 1 ;
    for (int i = 0 ; i  < power ; i++ )
    {
        sum*=base;
    }
    return sum ;
}
void binary_representation (int number)
{
    int i , sum = 0 , power = 0  ;
    char digit = 0 ;

    for (i=0 ;  sum != number   ;i++)
    {
         digit = ((number >> i) & (1) ) ;
         power  = powerofnumber(2,i) ;
         sum+=digit*power ;
         printf("%d",digit) ;
    }
}
/*
int main()
{
     int  x , y ;
    int sum = 0 ;
    double Area ;
    char c ;
    while(1)
    {
        fflush(stdin) ;
        scanf("%d",&x) ;
       binary_representation(x) ;
     // printf("%d\n",sum) ;
    }
    return 0;
} */

/* Write c code to reverse bits in an 8-bit number (149->10010101 return 169->10101001),
(5->00000101 return 160->10100000). */
 static  unsigned char powerrr ( unsigned char  BASE ,  unsigned char power )
{
     unsigned char i ;
     unsigned char sum = 1 ;
    for (i=0; i < power   ; i++)
    {
        sum = sum * BASE ;
    }
    return sum ;
}

unsigned char reverse_bits_in_an_8bit_number (char number)
{
       char i ,  digit = 0  ;
     unsigned char j = 0 ;
     unsigned char sum = 0 ;
    for (i= 7 ;  i >=0    ; i-- )
    {
        digit = ((number >> i )& (1)) ;
        sum = (sum + (powerrr(2,j)*(digit)))  ;
        j++ ;
    }
    return sum ;
}
/* int main()
{
    char  x ;
    char  y ;
    unsigned char sum = 0 ;
    while(1)
    {

      scanf("%d",&x) ;
      //scanf("%d",&y) ;
       sum = reverse_bits_in_an_8bit_number(x) ;
     printf("main:%d\n",sum) ;
    }
    return 0;
}
 */

 /* Write c code to sum numbers from 1 to 100 (without loop). */
int sum_numbers_O1(int number)
{
    int sum = 0 ;
    sum = ( (number+1) * number ) / 2 ;
    return sum ;
}
/*
int main()
{
    int sum = 0 , ret = 0 ;
    while(1)
    {
        scanf("%d",&sum) ;
        ret = sum_numbers_O1(sum) ;
       printf("sum = %d\n",ret) ;
    }
    return 0;
}
*/

/* Write a full C program to take 4 choose from user: 1-Set bit. 2-Clear bit 3-Toggle bit. 4-Read bit. */
int SET_GET_CLR_TOGGLE (int number , bits_t bit )
{
    int option = 0 , answer = 0  ;
    printf("please select the option you need\n") ;
    printf("for 'SET BIT' Prese '1'   ,  for 'clear bit'  prese '2'  ,.., for 'Read bit' prese '3' for 'toggle bit' prese '4'\n") ;
    scanf("%d",&option) ;
    switch (option)
    {
    case 1 :
        answer = (number | (1<<bit)) ;
        break ;
    case 2 :
        answer = (number &~ (1<<bit)) ;
        break ;
    case 3 :
        answer = (1 & (number >> bit)) ;
        break ;
    case 4 :
        answer = (number^(1 << bit)) ;
        break ;
    default :
        printf("please select from option\n") ;
        break ;
    }
    return answer ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 ;
    while(1)
    {
        scanf(" %d",&num) ;
        scanf(" %d",&bit) ;
        ret = SET_GET_CLR_TOGGLE (num,bit) ;
       printf("ret = %d\n",ret) ;
    }
    return 0;
}
*/
/*
Write c function to count the max number of zeros between two ones in the binary
representation of a number (296384-> {1001000010111000000} return 4). */

char count_zeros_of_ones(int number)
{
    char count[10] = {0} ;
    char i = 0  , j = 0 ;
    char c = 0 , flag = 0 ;
    for (i=0 ; i < 32 ; i++ )
    {
        printf("%d",GET_BIT(number,i)) ;
        if (GET_BIT(number,i) == 1 )
        {
            flag ++ ;
        }
        if (flag == 1 && GET_BIT(number,i)==0)
        {
            c ++ ;
        }
        if (flag == 2 )
        {
            flag = 0 ;
            count[j] = c ;
            j++ ;
            c = 0  ;
        }
    }
    char max = count[0] ;
    for (i=0 ; i < 10 ; i++)
    {
        if (count[i] > max)
        {
            max = count[i]  ;
        }
    }
    return max ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 ;
    while(1)
    {
        scanf(" %d",&num) ;

        ret = count_zeros_of_ones(num) ;
       printf("\nret = %d\n",ret) ;
    }
    return 0;
}
*/
/* Given two integers: L and R, Find the maximal value of A xor B where A and B satisfy the condition L =< A <= B <=
R Constrains: 1 <= L <= R <= 1000 Input format: the input contains two lines first line contains L and next
line contains R. Output format: The maximum value of Axor B.*/
int max_value_of_xor (int x , int y)
{
    int i =  0  , sum = 0 , j = 0 , ret=0 , max=0 , min=0 , c =0;
    if (x > y )
    {
        max = x ;
        min = y ;
    }

    else
    {
       max = y ;
       min = x ;
    }
    for ( i= min ;  i <= max ; i++ )
    {
       for (j=i+1;  j <= max ; j++)
       {
           sum = j ^ i ;
           c++ ;
           printf("%d^%d=%d\n",j,i,sum) ;
           if (sum > ret)
           {
               ret = sum ;
           }
       }
    }
     printf("counter=%d\n",c) ;
    return ret ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 ;
    while(1)
    {
        scanf(" %d",&num) ;
        scanf(" %d",&bit) ;

        ret = max_value_of_xor(num,bit) ;
       printf("\nret = %d\n",ret) ;
    }
    return 0;
}
*/

/* Write c function to take number of lines and draw pattern with '*' like: */

void draw_pattern(int lines)
{
    int option = 0 , i = 0 , j = 0 , coloum = lines, k = 0 ;
    int mid = (lines /2) +1 ;
     static int line_flag = -1 ;
    printf("for reverse triangle press 1 ,,,, triangle press 2 ,,,, x press 3 ,,,, complete triangle 4 \n ") ;
    scanf("%d",&option) ;
    switch (option)
    {
    case 1 :
        for(i=0 ;  i < coloum  ; i++)
        {
            for (j=i ;  j < lines  ;j++)
            {
                printf("*") ;
            }
            printf("\n") ;
        }
        break ;
    case 2 :
         for(i=0 ;  i < coloum    ; i++)
        {
            for (j=0 ;  j <= i  ;j++)
            {
                printf("*") ;
            }
            printf("\n") ;
        }
        break ;
    case 3 :
         for(i=0 ;  i < coloum  ; i++)
        {
            for (j=i ;  j < lines  ;j++)
            {
                if (i==0)
                {
                    printf("*") ;
                }
                else
                {
                printf(" ") ;
                printf("*") ;
                }
                for(k=0;    ;k++)
                {
                    printf(" ") ;
                }
                printf("*") ;
            }
            printf("\n") ;
        }
        break ;
    case 4 :
        // printf("%d\n",mid)  ;
       for(i=0 ;  i < coloum  ; i++ )
        {
            line_flag ++ ;
            for (j=0 ;  j < lines  ; j++)
            {
            // 4  == 4-0
                if ( ( j == (mid-line_flag) ) )
                {
                     printf("*") ;
                }
                else if ( (j == mid) )
                {
                    printf("*") ;
                }
                else if ((j == (mid+line_flag)))
                {
                    printf("*") ;
                }
                else if ( (j != ((mid+line_flag))) || (j != ((mid))) ||  (j != ((mid-line_flag))) )
                {
                     printf("3") ;
                }

            }
            printf("\n") ;
        }
        break ;
        default : printf("out of option\n") ;
        break ;
    }
}


/*********************************************************sh3**************************/
/* Write a C function to return the index of LAST occurrence of a number
in a given array. Array index start from 0. If the item is not in the list return -1. */
int index_of_number (int array[] , int size  , int number)
{
    int i = 0 , last_index = -1 ;
    for (i=0 ; i < size  ;i++)
    {
        if (array[i] == number)
        {
            last_index = i ;
        }
    }

    return last_index ;
}

/*
int main()
{
    int num = 0 , ret = 0 , bit=0 ;
    static int array[]={1,2,3,0,1,2,1,2,0,1} ;
    int size = sizeof(array) / sizeof(array[0])   ;
   // printf("size = %d\n",sizeof(array)) ;
    while(1)
    {
        scanf(" %d",&num) ;
        //scanf(" %d",&bit) ;
        //ret = draw_pattern(num,bit) ;
       ret = index_of_number(&array,size,num) ;
       printf("\nret = %d\n",ret) ;
    }
    return 0;
}
*/
/* Write a C function to return the maximum and minimum number in an array and their indexes.*/
void max_min_number_inARRAY (int *ptrarr , int size , int*ptr_max , int *ptr_min , int *index_max , int *index_min )
{
    int i = 0 ;
    *ptr_max = ptrarr[0] ;
    *ptr_min = ptrarr[0]  ;
    for (i=0;   i < size  ; i++)
    {
        if (ptrarr[i] > *ptr_max)
        {
            *ptr_max = ptrarr[i] ;
            *index_max = i ;
        }
        if (ptrarr[i] < *ptr_min)
        {
            *ptr_min = ptrarr[i] ;
             *index_min = i ;
        }
    }
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 , index_max , index_min ;
    static int array[]={100,2,3,0,1,20,1,2,0,1000} ;
    int size = sizeof(array) / sizeof(array[0])   ;
   // printf("size = %d\n",sizeof(array[0])) ;
   // while(1)
   // {
        //scanf(" %d",&num) ;
        //scanf(" %d",&bit) ;
        //ret = draw_pattern(num,bit) ;
        max_min_number_inARRAY(&array,size,&num,&bit,&index_max,&index_min) ;
       printf("max = %d  index_max= %d  min= %d   index_min= %d\n",num,index_max,bit,index_min) ;
   // }
    return 0;
}
*/
/* Write a C function that return 0 if a given number is a power of 3,otherwise return 1. */
power_of_3t power_3 (int number)
{
    power_of_3t status = NOT_POWER_OF_3 ;
    int sum = 1 , i = 0;
    if (number == 1 )
    {
        status = POWER_OF_3 ;
        return status ;
    }
         for (i = 0 ; sum <=number  ; i++)
    {
        sum*=3 ;
        if (sum == number)
        {
            status = POWER_OF_3 ;
            return status ;
        }
    }
    return status ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 , index_max , index_min ;
    static int array[]={100,2,3,0,1,20,1,2,0,1000} ;
    int size = sizeof(array) / sizeof(array[0])   ;
   // printf("size = %d\n",sizeof(array[0])) ;
    while(1)
    {
        scanf(" %d",&num) ;
        //scanf(" %d",&bit) ;
        //ret = draw_pattern(num,bit) ;
      ret =  power_3(num);
       printf("max = %d  \n",ret) ;
   }
    return 0;
}
*/
/* Write a C function that take two numbers and return array contain all numbers between
the two given numbers. (numbers 2,6->return array contain [3,4,5]). */

int array_between_two_number (int first , int secand , int *arr )
{
    int i = 0 , max =0 , min=0 , j=0 ;
    if ( first > secand )
    {
        max= first ;
        min = secand ;
    }
    else
    {
        max = secand ;
        min = first ;
    }
    int cond = max - min ;

    for (i=0; i < cond ;i++)
    {
        j++ ;
      arr[i] = min+j ;

    }
    return j ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 , index_max , index_min ;
    static int array[]={0} ;
    int size = sizeof(array) / sizeof(array[0])   ;
   // printf("size = %d\n",sizeof(array[0])) ;
    while(1)
    {
        scanf(" %d",&num) ;
        scanf(" %d",&bit) ;
        //ret = draw_pattern(num,bit) ;
      ret =  array_between_two_number(num,bit,&array);
      for (int i=0 ;   i < ret-1  ;i++)
       printf("%d\n",array[i]) ;
   }
    return 0;
}
*/
/*Write c function to find the most repeated number in an array of integers.*/
int most_repeted_number(int arr[] , int size , int *number )
{
    int i = 0 , j = 0 ;
    int static c = 0 , compare = 0 ;
    for (i=0 ;   i < size  ; i++)
    {
        for (j=0;  j < size    ;j++)
        {
           if (arr[i] == arr[j])
           {
               c++ ;
           }
        }
        if ( c  > compare )
        {
            compare  = c ;
            *number = arr[i] ;
        }
        c = 0 ;
    }
    return compare ;
}
/*
int main()
{
    int num = 0 , ret = 0 , bit=0 , index_max , index_min ;
    static int array[]={0,0,0,1,5,6,0,5,5,7,5,1,5,6,6,0,6} ;
    int size = sizeof(array) / sizeof(array[0])   ;
   // printf("size = %d\n",sizeof(array[0])) ;
   // while(1)
   // {
        //scanf(" %d",&num) ;
       // scanf(" %d",&bit) ;
        //ret = draw_pattern(num,bit) ;
      ret =  most_repeted_number(&array,size,&num);
      //for (int i=0 ;   i < ret-1  ;i++)
      printf(" %d     %d \n",num,ret) ;
   //}
    return 0;
}
*/
/* Write a C function to take an array and reverse its elements. */
void reverse_array (int array [] , int size)
{
    int i = 0 , temp = 0 , j = size-1 ;
    for (i=0;    i <= (size/2)    ;i++)
    {
        temp = array[i] ;
        array[i] = array[j] ;
        array[j] = temp ;
        j-- ;
        // printf("%d\n",array[i]) ;
    }
}
/*
int main()
{
    int  i ;
      int array[]={1,2,3,4,5,6,7,8,9,10} ;
    int size = sizeof(array) / sizeof(array[0])   ;
    //printf("%d",size) ;

        reverse_array(&array,size);
      for (i=0 ;   i < size  ;i++)
      {
           printf(" %d\n",array[i]) ;
      }

    return 0;
}
*/
/* Write a C function to take 2 arrays and swap them (try with 2 different sizes). */
void SWAP_TWO_ARRAY(int *ptrarr1 ,int size1 , int *ptrarr2, int size2)
{
      int i = 0 , temp = 0  ;

    for (i=0; i < size2 ;i++)
    {
        temp = ptrarr1[i] ;
        ptrarr1[i] = ptrarr2[i] ;
        ptrarr2[i] = temp ;
       // printf("temp=%d\n", ptrarr1[i]) ;
    }

}
/*
int main()
{
    int  i ;
      int array[]={1,2,3,4,5,6,7,8,9,10} ;
      int array2[]={11,12,13,14,15,16,17};
    int size = sizeof(array) / sizeof(array[0])   ;
     int size2 = sizeof(array2) / sizeof(array2[0])   ;
    //printf("%d",size) ;

        SWAP_TWO_ARRAY(&array,size,&array2,size2);

  for (i=0 ;   i < size  ;i++)
      {
           printf("arr1 = %d\n",array[i]) ;
      }
              printf("\n") ;
 for (i=0 ;   i < size2  ;i++)
      {
           printf("arr2 = %d\n",array2[i]) ;
      }
              printf("\n") ;
    return 0;
}
*/
/*  Write a C function that return the count of the longest consecutive occurrence of a given number in an array.
    Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4. */
  int   longest_occurrence_of_number(int arr[] , int size , int *ptrnum )
  {
      int i = 0 , counter = 1  , ret = 0 ;
      for (i=0;    i < size ;i++)
      {
          if (arr[i]==arr[i+1])
          {
              counter++ ;
          }
          else{

            if (ret < counter )
            {
                ret = counter ;
                *ptrnum = arr[i] ;
            }
            counter = 1 ;
          }
      }
      return ret ;
  }
  /*
int main()
{
    int  most_occure = 0  , number = 0 ;
      int array[]={1,2,2,3,3,3,3,4,4,4,4,4,3,3} ;
    int size = sizeof(array) / sizeof(array[0])   ;
    //printf("%d",size) ;
        most_occure = longest_occurrence_of_number(&array,size,&number);
        printf("most occure = %d    number = %d \n",most_occure,number) ;
    return 0;
}
*/
/*Write c function to take 2 arrays and return an array by merging them like this
( arr1={1,2,3,4,5},arr2={11,12,13,14,15} return arr3={1,11,2,12,3,13,4,14,5,15} ).*/
 void merge_two_array (int arr1[]  , int arr2[] ,int size ,int merged_array[] )
 {
     int i =0  , temp =  0 , n =0 , j = 0 ;
     for (i=0 ; i < size*2 ; i++)
     {
         if (i % 2  ==  0)
         {
             merged_array[i] = arr1[j] ;
             j++ ;
         }
         else
         {
              merged_array[i] = arr2[n] ;
               n++ ;
         }
     }
 }
/*
int main()
{
    int  most_occure = 0  , number = 0 ;
      int array1[]={0,2,4,6,8,10,12,14,16,18,20} ;
       int array2[]={1,3,5,7,9,11,13,15,17,19,21} ;
       int merged_arr[50] ;
    int size = sizeof(array1) / sizeof(array1[0])   ;
    //printf("%d",size) ;
        merge_two_array(array1,array2,size,merged_arr) ;
       for(int i = 0 ; i < size*2 ; i++)
       {
           printf("merged_arr=%d\n",merged_arr[i]) ;
       }
    return 0;
}*/
/* Write a c function that removes the repeated number of an input sorted array
   and return a new array without the repeated numbers.*/
  int*  remove_repeted_number_inSortedArr (int *arr , int size , int * ptr_new_size )
  {
      int i = 0  , j = 0 ;
      static int arr2[50] ;
      for (i=0; i < size ;i++)
      {
          if(arr[i] != arr[i+1])
          {
              arr2[j] = arr[i];
              j++ ;
          }
          else
          {
              /* do noting */
          }
      }
      *ptr_new_size = j ;
      return arr2 ;
  }

/*
int main()
{
    int  number = 0 ;
    int *ptrarr = 0  , i = 0 ;
      int array1[]={1,1,2,2,3,4,5,6,6,7,7,7,8,10,10,10} ;
      int size = sizeof(array1) / sizeof(array1[0])   ;
      ptrarr = remove_repeted_number_inSortedArr(array1,size,&number) ;
      for (i=0; i < number ; i++ )
      {
          printf("%d\n",ptrarr[i]) ;
      }
    return 0;
}
*/
/* Write c function to take an array (with unknown size) contain 2 zeros swap the 3 element
after the first zero with the 3 element after the second44zero
( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).*/
void swap_element_in_remarker_array(int* ptrarr)
{
    int i = 0 , flag = 0 , n = 0 , pic = 0 , remark = 0 , save_index = 0 ;
    int array[3] ;
    for (i=0;  flag < 1  ;i++)
    {
       if ( (ptrarr[i] == 0) && (remark == 0) )
       {
           save_index = i+1 ;
           pic = i ;
           remark = 1 ;
           for(n=0; n < 3 ;n++)
           {
               array[n] = ptrarr[pic+1] ;
               pic ++ ;
           }
       }
       else if ( (ptrarr[i] == 0) && (remark == 1)   )
       {
            pic = i ;
           for(n=0; n < 3 ;n++)
           {
            ptrarr[save_index] =  ptrarr[pic+1] ;
            ptrarr[pic+1] = array[n] ;
               pic ++ ;
               save_index ++ ;
           }
           flag = 1 ;
       }
    }
}
/*
int main()
{
    int  number = 0 ;
    int *ptrarr = 0  , i = 0 ;
      int array1[]={1,2,3,4,0,1,2,3,6,9,8,7,0,11,12,13,5,6,0} ;
      int size = sizeof(array1) / sizeof(array1[0])   ;
        for (i=0; i < size ; i++ )
      {
          printf("%d\n",array1[i]) ;
      }
      printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>") ;
      printf("\n") ;
      swap_element_in_remarker_array(array1) ;
      for (i=0; i < size ; i++ )
      {
          printf("%d\n",array1[i]) ;
      }
    return 0;
}
*/
/* Write c function to take an array and return the biggest difference between 2 numbers
in the array (the smaller number must come first in the array) {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.*/
int biggest_difference_in_array (int * arr , int size )
{
    int i = 0   , j = 0  , smale_number_in_arr = arr[0] , index = 0 , diff =  0 , sum[100] , biggest_difference = 0  ;
    for (i=0; i < size ;i++)
    {
        if (arr[i] < smale_number_in_arr )
        {
            smale_number_in_arr = arr[i] ;
            index = i ;
        }
    }
    for (i=index+1 ; i < size  ;i++)
    {
        diff = arr[i] - smale_number_in_arr ;
        sum[j] = diff ;
        j++ ;
    }

    biggest_difference = sum[0] ;
    for(i=0; i < j ;i++)
    {
       if (sum[i] > biggest_difference)
       {
           biggest_difference = sum[i] ;
       }
    }
    return biggest_difference ;
}
/*
int main()
{
    int  number = 0 ;
    int *ptrarr = 0  , i = 0 ;
    int array1[]= {1,0,3,0,4,6,98,8,9,10,0,1,2,3,4,5,77,8} ;
    int size = sizeof(array1) / sizeof(array1[0])   ;
    number =  biggest_difference_in_array(array1,size) ;
    printf("%d\n",number) ;
    return 0;
}*/
/* Write c function to find the most repeated number in an array of char (size of the array is very large)
   try to optimize your code. */
   int most_repeated_number_in_an_array(char * arr , int size , int*ptrnum )
   {
       int i = 0 ;
       int counter[256] = {0} ;
       for (i=0; i < size ;i++)
       {
           //1 2 3 4 5 6 7  7 8 9 1 10 11 12 14 1 15 16 18 99 10 12 112
           counter[arr[i]]++ ;
       }
       int number_of_repeted = counter[0] ;
       printf("    look up table   \n") ;
        printf("number---->how much repeted\n") ;
       for (i=0; i < 256 ; i++)
       {
           printf(" (%d)--------------->(%d)\n" , i , counter[i] ) ;
           if (counter[i] > number_of_repeted )
           {
               number_of_repeted = counter[i] ;
               *ptrnum = i ;
           }
       }
       return number_of_repeted ;
   }
   /*
int main()
{
    int  number = 0 ;
    int *ptrarr = 0  , i = 0 ;
    char array1[]={1,1,1,2,3,11,11,12,1,5,6,7,8,9,1,4,7,8,9,6,2,4,3,0,112,123,123,23,23,23,23,23,88,79,55,66,7,8,9,1,1,0,0,5} ;
    int size = sizeof(array1) / sizeof(array1[0])   ;
    printf("size=%d\n",size) ;
    number =  most_repeated_number_in_an_array(array1,size,&i) ;
    printf("%d  %d\n",i,number) ;
    return 0;
}*/
/* Write a C Function that swaps two pointers. */
void swap_two_pointers (int **ptr1 , int **ptr2)
{
    int *temp = 0 ;
    temp = *ptr1 ;
     *ptr1 = *ptr2 ;
     *ptr2 = temp ;
}
/*
int main()
{
   int number1 = 5 , number2= 10 ;
   int *ptr1 = &number1 ;
   int *ptr2 = & number2 ;
    printf("%d  %d\n",*ptr1,*ptr2) ;
    swap_two_pointers(&ptr1,&ptr2) ;

    printf("%d  %d\n",*ptr1,*ptr2) ;
    return 0;
} */
/* Write a C function to take 10 mono numbers (from 0to 9) from user and return the most
repeated one, if user enter number bigger than 9 return -1(don’t use arrays). */
int most_repeated_number_mono (char *arr , int size , int *ptr_number)
{
    int i = 0 , counter[9] ={0} ;
    for(i=0;i<size;i++)
    {
        counter[ arr[i] ]++;
    }
    int max_repeted_number = counter[0] ;
   printf("look up table\n") ;
   printf("number                how much repeted\n") ;
    for(i=0;i<=9;i++)
    {
        printf("%d                         %d\n",i,counter[i]) ;
        if(max_repeted_number<counter[i])
        {
            max_repeted_number = counter[i] ;
            *ptr_number = i ;
        }
    }

    return max_repeted_number ;
}
/*
int main()
{
    int  number = 0 ;
    int *ptrarr = 0  , i = 0 ;
    char array1[]={1,1,2,1,3,5,6,2,9,9,8,9,9,2,3,6,5,4,7,1,2,3,1,5,9,6,7,8,9,2,3,4,5,6,7,8,9,1,0,0,0,0,0,0,1,1,1,2,3,9,9,9,9} ;
    int size = sizeof(array1) / sizeof(array1[0])   ;
    printf("size=%d\n",size) ;
    number =  most_repeated_number_mono(array1,size,&i) ;
    printf("result=(%d)repeted(%d)\n",i,number) ;
    return 0;
}*/
/* Write a C function to get the nth term of Fibonacci series, and use it to print the first 20 element. */
int Fibonacci_series(int nth)
{
    int fn0= 0 , fn1 = 1  , i  , sum = 1 ;
    if (nth == 0)
    {
        return 0 ;
    }
    else if (nth == 1 )
    {
        return 1 ;
    }
     //   0 + 1
    sum = fn0 + fn1  ;
    for (i=2;i<nth;i++)
    {
        //      1  , 1 , 2 , 3
       fn0 = fn1 ;
         //      1  , 2 , 3 , 5
        fn1 = sum ;
            //1 + 1 , 1 + 2 , 2+3 , 5+3 ,
         sum = fn0 + fn1 ;
    }
    return sum ;
}
/*
int main()
{
    while(1)
    {
         int  number = 0 , i = 0 ;
         scanf("%d",&i) ;
    number =  Fibonacci_series(i) ;
    printf("result=%d\n",number) ;
    }

    return 0;
}*/
/* (1)Write c function to reverse string "Ahmed salem"->melas demhA". */

void reverse_string(char *str )
{
    int i = 0, l = 0,  last_index = 0 ;
    char temp= 0 ;
    for (i=0; str[i]; i++) ;
    last_index = i-1 ;
     //printf("i=%d",last_index) ;
    l = i / 2 ;
    for (i=0 ; i <= l ; i++)
    {
        temp = str[i] ;
        str[i] = str[last_index] ;
        str[last_index] = temp  ;
       //printf("last_index=%c\n",str[i]) ;
        last_index -- ;
       //  printf("first_index=%c\n",str[i]) ;
    }


}
/*
int main()
{

    char str[]="ahmed gamal" ;
    int i = 0 ;
    reverse_string(str) ;
    for(i=0;str[i];i++)
        printf("%c",str[i]) ;

    return 0;
} */
/* Write c function to check if string is mirror or not "SalaS","SalelaS". */
mirrir_t check_string_mirror(char str[])
{
    int i = 0 , flag = 0 ;
     mirrir_t status = NOT_MIRROR ;
    for(i=0;str[i];i++);
    int str_len = i - 1 ;
    for(i=0;str[i];i++)
    {
        if(str[i] != str[str_len])
        {
            flag = 1 ;
        }
        str_len -- ;
    }
    if (flag == 1)
    {
        status = NOT_MIRROR ;
    }
    else
    {
        status = MIRROR ;
    }
    return status ;
}
/*
int main()
{
    char str[] = "SalelaS" ;
     if (check_string_mirror(str) == 1 )
        printf("not mirrior\n") ;
     else
        printf("mirror\n") ;
    return 0;
}*/
/* (3)Write c function to reverse words in sentence (without using external arrays)
" I work as an embedded software engineer for 3 years"
-> " years 3 for engineer software embedded an as work I". */
void reverse_long_words ( char str[] )
{
    reverse_string(str)  ;
    int i = 0, flag = 0, c = 0, start = 0, last = 0, n = 0 ;
    char temp = 0 ;
    for(i=0; str[i]; i++)
    {
        if(str[i]!=' ')
        {
            if(flag==0)
            {
                start = i ;
                flag = 1 ;
            }
            c++ ;
            last = i ;
        }
        else
        {
            for(n=0 ; n < (c/2) ; n++)
            {
                temp = str[start + n] ;
                str[start + n] = str[last-n] ;
                str[last-n] = temp ;
            }
            flag = 0 ;
            c=0 ;
            temp = 0 ;
        }
    }
     for(n=0 ; n < (c/2) ; n++)
    {
        temp = str[start + n] ;
        str[start + n] = str[last-n] ;
        str[last-n] = temp ;
    }
}
/*
int main()
{
    char str[]="love work as an embedded software engineer for 3 years";
    printf("%s",str) ;
    reverse_long_words(str) ;
    printf("\n>>>>>>>>>>>>>>\n");
    printf("%s",str) ;

    return 0;
}*/

char* isTriangle (int num1 , int num2 , int num3)
 {

    if ( (num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1) )
     {
          if ((num1==num2) && (num1==num3))
     {
         return "Equilateral triangle" ; // equal all
     }
     else if((num1==num2)  || (num1 == num3) || (num2==num3) )
     {
         return " Isosceles triangle " ;  // two equal
     }
     else
     {
         return "scalene triangle" ; // not equal
     }
     }
     else
     {
          return "Not triangle" ;
     }
 }

 char* type_of_triangle(char str[])
 {
     int num1=0 , num2=0 , num3=0 , i=0 , flag = 0 ;
     for(i=0;str[i];i++)
     {
         if(str[i] != ' ')
         {
             if (flag == 0 )
             {
                num1 =  num1*10 + str[i] - '0' ;
             }
             if (flag == 1 )
             {
                num2= num2*10 +  str[i]  - '0' ;
             }
             if (flag == 2 )
             {
                 num3 =  num3*10 + str[i] - '0' ;
             }
         }
         else
         {
             flag++ ;
         }
     }
     if(flag <= 2)
     {
         return isTriangle (num1,num2,num3) ;
     }
     else
     {
         return "not valid string" ;
     }
 }
/*
int main()
{
    char str[]="12 1 14 15";
    printf("%s",type_of_triangle(str)) ;

    return 0;
}
*/
/* Write a C function to convert float number to string
   Float f1=3.45 to string str=”3.45”. */
 void convert_float_to_string(char str[])
 {
     float number =0;
     fflush(stdin) ;
     scanf("%f",&number) ;
     int num = number * 100000 ;
     int i = 0 , sum =0  ;
     for (i=0; num  ;i++)
     {
         if (i != 5 )
         sum = num % 10 ;
         if (i != 5)
         {
             str[i] = sum  + '0' ;
         }
         else
         {
             str[i] = '.' ;
         }
         if(i!=5)
         num = num / 10 ;
     }
      str[i+1] = 0 ;
     reverse_string(str) ;
 }
/*
int main()
{
    char str[100];
    while(1)
    {
        convert_float_to_string(str) ;
    printf("%s",str) ;
    }


    return 0;
}
*/
/* (6) Write a C function to take 3 strings, “main string”, “find”, and “replace”, if you
       find the second string inside the first one replaces it with the third and return new
       string, if u didn’t find it return the first string without change
       Main string->”ahmed mohamed ali kamel”.
       Find->”ali”.
       Replace->”ayman”.
       Return new string ->”ahmed mohamed ayman kamel”. */
      int str_leng(char str[])
       {
           int i = 0 ;
           for (i=0;str[i];i++) ;
           return i ;
       }
void find_search_replace( char str_main[] , char str_find [] , char str_replace[]  , char temp[] )
{
    int i= 0 , flag = 0 , c=0 , begining_str = 0 , n = 0  , m = 0  ;
    int leng_str_find = str_leng (str_find) ;
    int len_str_replace = str_leng (str_replace) ;
    int x = len_str_replace ;
    for(i=0;str_main[i];i++)
    {
        if(str_find[m]==str_main[i])
        {
            m++ ;
            if (flag == 0 )
            {
                begining_str = i ;
            }
            flag ++ ;
            c= c+1 ;
            if(c==leng_str_find)
            {
                //printf("%d\n",c) ;
                break ;
            }
        }
        else
        {
            c= 0 ;
            flag = 0 ;
            m=0;
        }
    }
    printf("%d\n",begining_str) ;
    for (i=0; i < (begining_str)  ;i++)
    {
        temp[i] = str_main[i] ;
    }
    for(i=begining_str;len_str_replace;i++)
    {
        temp[i] = str_replace[n] ;
        n++ ;
        len_str_replace -- ;
    }
    int z = 0 ;
   // printf("%d\n",begining_str+len_str_replace) ;
    for(i =(begining_str+x);   str_main[begining_str+leng_str_find + z]  ;i++)
    {
        temp[i] = str_main[begining_str+leng_str_find + z] ;
         z++ ;
    }
    temp[i] = 0 ;
}
/*
int main()
{
    char temp[100]={0};
    char main_str[] = "Ahmed gamal eldesawy elabd" ;
    char find_str[] = "elabd" ;
    char replace_str[] = "younes" ;
   find_search_replace(main_str,find_str,replace_str,temp) ;
   printf("%s",temp) ;


    return 0;
}*/
void print(int num , char str[])
{
    int i = 0 ;
    printf("number of repeted=%d\n",num) ;
    for(i=0;i<num;i++)
    {
        printf("%s\n",str) ;
    }
     printf(">>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<\n") ;
}
void str_void_print_str_by_number_given (char copy_char_str[])
{
    int i = 0 , num = 0 , flag = 0 , n = 0 ;
    char str[5] ;
    for (i=0;copy_char_str[i];i++)
    {
        if( ((copy_char_str[i] >= 'a') && (copy_char_str[i] <= 'z' ) ) ||  ((copy_char_str[i] >= 'A') && (copy_char_str[i] <= 'Z' ) )  )
        {
          if(flag == 1)
        {
             str[n] = 0 ;
            print(num,str) ;
             n = 0 ;
             num = 0 ;
        }
             str[n] = copy_char_str[i] ;
             n++ ;
             flag = 0 ;
        }
        else if (copy_char_str[i] != ',')
        {
           num = (num*10) + copy_char_str[i] - '0' ;
          // printf("num%d\n",num) ;
           flag = 1 ;
        }
    }
     if(flag == 1)
        {
             str[n] = 0 ;
            print(num,str) ;
             n = 0 ;
        }
}
/*
int main()
{
    char find_str[] = "ahmed,5,gamal,10,elabd,15" ;
   str_void_print_str_by_number_given(find_str) ;
    return 0;
}*/
/* You have an array of 100 element contain all number from 0 t0 100 except
   one number, write c function to find the missed number (try in O(n)). */
   char missing_number_ON(char arr[])
   {
       char i = 0 ;
       char counter[100] = {0} ;
       for (i=0;i<100;i++)
       {
           counter[arr[i]] ++ ;
       }
       for(i=0;  ;i++)
       {
           if(counter[i] == 0)
           {
               return i ;
           }
       }
   }
/*
int main()
{
   char arr[100]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,0,41,42,43,44,45,46,47,48,49,0,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
   printf("%d",missing_number_ON(arr)) ;
    return 0;
}
*/
/* You have an array of 101 element contain all number from 1 t0 100 , so one
   number is repeated, write c function to find the repeated number (try in O(n)). */
   char number_repeted_within100_On(char arr[])
   {
       int i = 0 ;
       char counter[101] ={0} ;
       for (i=0;i<101;i++)
       {
           counter[arr[i]] ++ ;
           if(counter[arr[i]] == 2)
           {
               return i ;
           }
       }
   }
   /*
int main()
{
   char arr[100]={1,2,100,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100};
   printf("%d",number_repeted_within100_On(arr)) ;
    return 0;
}*/
/*
You have an array of integers all numbers in the array repeated 2 times
except one number repeated one time only find this number (try o(n)).
array like {1,2,4,66,2,1,500,66,7,7,500}->4.*/
int one_number_didnot_repeted(int arr[] , int size)
{
    int i = 0 , sum = arr[0] ;
    for (i=1; i < size  ;i++)
    {
        sum = sum ^ arr[i] ;
    }
    return sum ;
}
/*
int main()
{
   int arr[]={1,2,4,66,2,1,4,66,7,7,500};
   int size = sizeof(arr)/ sizeof(arr[0]) ;
   printf("%d",one_number_didnot_repeted(arr,size)) ;
    return 0;
}*/

/* You have an array of integers contain Mono numbers only (from 0 to 9), write c function to find the most repeated number (try in O(n)). */

int most_repeted_number_mono(int arr[] , int size , int *ptr)
{
    int i = 0 , counter[10]={0} , number = 0  ;
    for (i=0; i < size ;i++)
    {
        counter[arr[i]]++ ;
    }
    int number_of_repeted = counter[0] ;
    for(i=0; i < 10  ;i++)
    {
        if(number_of_repeted < counter[i])
        {
            number_of_repeted = counter[i] ;
            number = i ;
        }
    }
    *ptr = number_of_repeted ;
    return number ;
}
/*
int main()
{
   int arr[]={1,2,3,3,4,5,6,6,6,6,7,8,9,9,9,9} , x = 0 ;
   int size = sizeof(arr)/ sizeof(arr[0]) ;
   printf("%d",most_repeted_number_mono(arr,size,&x)) ;
    return 0;
} */
/* Write c function to find the first repeated char in string (try in O(n)). "ahmed selem" ->e. */
char first_repeated_char(char str[])
{
    char i = 0 ;
   char counter[256] = {0} ;
    for (i=0; str[i] ;i++)
    {
       // printf("%d\n",i) ;
        counter[ str[i] ] ++ ;
         //printf("=====%d\n",counter[ str[i] ]) ;
        if(counter[str[i]] == 2)
        {
            return str[i] ;
        }
    }
}
/*
int main()
{
   char arr[]= "mariam ezzat" , x = 0 ;
 x =  first_repeated_char(arr) ;

printf(">>>>>>>>>%c\n",x) ;
    return 0;
} */

/* Write C function to take an array and if it finds a number "given" makes the previous elements
   in a new array and returns it (try to optimize). */
int* previous_elementsin_a_new_array (int *arr , int size , int number , int * ptr_new_size )
{
    int i = 0 , counter = 0 , flag = 0 ;
    for(i=0; ( (i<size) && (flag ==0) ) ;i++)
    {
        counter ++ ;
         if(number==arr[i])
         {
             flag = 1 ;
         }
    }
    //int *arr_heap = (int*) malloc(counter * sizeof(int)) ;
   int *arr_heap = (int*) calloc (counter , sizeof(int)) ;
    *ptr_new_size = i - 1  ;
    for(i=0;i<counter;i++)
    {
        arr_heap[i] = arr[i] ;
    }
    return arr  ;
}
/*
int main()
{
   int arr[]= {1,2,3,4,5,6,8,9,10,11} , *x = 0 , size1 = 0;
   int size = sizeof(arr) / sizeof(arr[0]) ;
   x = previous_elementsin_a_new_array(arr,size,8,&size1) ;
for (int i = 0 ;  i < size1   ;i++)
       printf("%d\n",x[i]) ;
    return 0;
}
*/
/* Write a c function to swap the two bytes of a short int (n=0xFE20 ->0X20FE) use 2 methods. */
void  swap_the_two_bytes (short *ptr_var)
{
 // *ptr_var = *ptr_var << 8 | *ptr_var >> 8 ;
 char *temp = ptr_var , *temp2= ptr_var , countener = 0;
 temp2++;
 countener = *temp ;
 *temp = *temp2 ;
 *temp2 = countener ;
 }
/*
int main()
{
   short x = 300 ;
   swap_the_two_bytes(&x) ;
    printf("%d\n",x) ;
    return 0;
} */

/* Write c function to copy string to string without copy repeated characters try (O(n)).
   "ahmed selem kamel"->"ahmed slk". */
char* copy_string_to_string_without_copy_repeated_characters(char str[])
{
    // implement by maloc or calloc
    int i = 0 , counter[256]={0}  , j=0 ;
   static char temp[50] ;
    for (i=0; str[i]  ;i++)
    {
        counter[str[i]] ++ ;
       // printf("%d",counter[str[i]]) ;
         if (counter[str[i]]==1)
    {
        temp [j] = str[i] ;
         //printf("%c",temp[j]) ;
        j++ ;
    }
    }
   temp[j] = 0 ;
   return temp ;
}
/*
int main()
{
char str[] ="ahmed selem kamel" ;
char *temp = 0 ;
temp = copy_string_to_string_without_copy_repeated_characters(str) ;
for(int i = 0 ; temp[i] ; i++)
{
    printf("%c",temp[i]) ;
}

    return 0;
}
*/



