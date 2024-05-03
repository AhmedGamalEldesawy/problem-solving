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

typedef enum
{
    BIT1,
    BIT2,
    BTI3,
    BIT4,
    BIT5,
    BIT6,
    BIT7,
    BIT8
}bits_t ;
typedef enum
{
    POWER_OF_3 ,
    NOT_POWER_OF_3
}power_of_3t;

/* macro like function for set bit and clear bit */
#define  SET_BIT(REG,bit)           REG=(REG|(1<<bit))
#define  CLR_BIT(REG,bit)           REG=(REG &~ (1<<bit))
#define   GET_BIT(REG,bit)          ((REG >> bit) & 1 )
#define  TOG_BIT(REG,bit)           REG=(REG^(1<<bit))

typedef enum
{
    MIRROR,
    NOT_MIRROR
}mirrir_t ;
/**************************************************************** sheet1 ****************************************************/
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
/**************************************************************** sheet2 ****************************************************/
/*1*/ double Area_for_circle(int radius) ;
/*2*/ void number_character( int number, char chr ) ;
/*3*/ int  reverse_digit_for_number (int number) ;
/*4*/ int number_of_one ( unsigned int number) ;
/*5*/ void binary_representation (int number) ;
/*6*/ unsigned char reverse_bits_in_an_8bit_number (char number) ;
/*7*/ int sum_numbers_O1(int number) ;
/*8*/ int SET_GET_CLR_TOGGLE (int number , bits_t bit ) ;
/*9*/ void draw_pattern(int lines) ; // " draw pattern except 2 shape "
/*10*/ char count_zeros_of_ones(int number) ;
/*11*/ int max_value_of_xor (int x , int y) ;
/**************************************************************** sheet3 ****************************************************/
/*1*/ int index_of_number (int array[] , int size  , int number) ;
/*2*/void max_min_number_inARRAY (int *ptrarr , int size , int*ptr_max , int *ptr_min , int *index_max , int *index_min ) ;
/*3*/ power_of_3t power_3 (int number) ;
/*4*/ int array_between_two_number (int first , int secand , int *arr ) ;
/*5*/ int most_repeted_number(int arr[] , int size , int *number ) ;
/*6*/ void reverse_array (int array [] , int size) ;
/*7*/ void SWAP_TWO_ARRAY(int *ptrarr1 ,int size1 , int *ptrarr2, int size2) ;
/*8*/ int   longest_occurrence_of_number(int arr[] , int size , int *ptrnum ) ;
/*9*/ // same problem so same solution prrrrrrrrroooooo hahahahah ;
/*10*/void merge_two_array (int arr1[]  , int arr2[] ,int size ,int merged_array[] ) ;
/*11*/ int*  remove_repeted_number_inSortedArr (int *arr , int size , int * ptr_new_size ) ;
/*12*/ void swap_element_in_remarker_array(int* ptrarr) ;
/*13*/ int biggest_difference_in_array (int * arr , int size ) ;
/*14*/ int most_repeated_number_in_an_array(char * arr , int size , int*ptrnum ) ;
/*15*/ void swap_two_pointers (int **ptr1 , int **ptr2) ;
/*16*/ int Fibonacci_series(int nth) ;
/*17*/ int most_repeated_number_mono (char *arr , int size , int *ptr_number) ;
/******************************************************sheet4***************************************************************/
/*1*/ void reverse_string(char *str ) ;
/*2*/ mirrir_t check_string_mirror(char str[]) ;
/*3*/ void reverse_long_words ( char str[] ) ;
/*4*/ char* type_of_triangle(char str[]) ;
/*5*/ void convert_float_to_string(char str[]) ;
/*6*/ void find_search_replace( char str_main[] , char str_find [] , char str_replace[]  , char temp[] ) ;
/*7*/ void str_void_print_str_by_number_given (char copy_char_str[]) ;
/******************************************************sheet5**************************************************************/
/*1*/  char missing_number_ON(char arr[]) ;
/*2*/  char number_repeted_within100_On(char arr[]) ;
/*3*/  int one_number_didnot_repeted(int arr[] , int size) ;
/*4*/  /*repeat Q3 but array is sorted (try less than O(n)).array {1,1,2,2,4,4,70,70,73,80,80,81,81} ->73. */
/*5*/  int most_repeted_number_mono(int arr[] , int size , int *ptr) ;
/*6*/  char first_repeated_char(char str[]) ;
/*7*/  char* copy_string_to_string_without_copy_repeated_characters(char str[]) ;
/*8*/ int* previous_elementsin_a_new_array (int *arr , int size , int number , int * ptr_new_size ) ;
/*9*/ void  swap_the_two_bytes (short *ptr_var) ;

