typedef enum
{
    Is_Prime ,
    Not_Prime
} status_of_prime_t ;

typedef enum
{
    Is_prefectSquare ,
    Not_prefectSquare
} status_of_prefectSquare_t ;

typedef enum
{
    Is_BaseOfTwo ,
    Not_BaseOfTwo
} status_of_Base_of_two_t ;


/*1*/ long SUM_NUM_BETWEEN_TO_NUMBER(int x , int y ) ;
/*2*/ int return_max_number (int how_much_number , int *ptrmin ) ;
/*3*/ long calculate_the_sum_of_dynamic_number(int how_much_number) ;
/*4*/ long Multi_Without_Using_Multi(int x , int y ) ;
/*5*/ int DIV_Without_using_Div_sign(int x , int y ) ;
/*6*/ long power_of_number(int BASE , int power ) ;
/*7*/ long factorial (int num ) ;
/*8*/ status_of_prime_t IS_Prime (int num) ;
/*9*/ status_of_prefectSquare_t prefect_square (int num) ;
/*10*/ status_of_Base_of_two_t BASE_of_two (int num) ;
/*11*/ int sum_of_digits_for_number ( int num ) ;
/*12*/ void odd_flag(int num) ;
/*13*/ int sum_of_hole_for_number (int num) ;

