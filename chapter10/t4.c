#include <stdio.h>

void array1(void);
void test_func_meta_1(int ar[]);
void test_func_meta_2(int ar[][3]);

void pointer1(void);
void pointer2(void);

int main(void)
{


    printf("pointer1 func\n"); 
    pointer1();

    printf("pointer2 func\n"); 
    pointer2();

    array1();

    return 0;

}

void array1(void)
{

    int a[] = {1, 2, 3};
    // int b[] = a; // error
    test_func_meta_1(a);

    int b[2][3] = {{1,2,3}, {4,5,6}};
    
    test_func_meta_2(b);




}

void test_func_meta_1(int ar[])
{
    printf("atest_func_meta_1 -> ar = %p\n", ar);

}

void test_func_meta_2(int ar[][3])
{
    printf("atest_func_meta_2 -> ar = %p\n", ar);

}

void pointer1(void)
{

    int a[3][2] = { {1,2}, {3,4}, {5,6} };
    int (*pa)[2] = a;  // the address of first element 
    printf("pa = %p\n", pa);
    printf("pa + 1 = %p\n", pa + 1);  // add 8
    printf("a = %p\n", a);

}

void pointer2(void)
{

    int a[3][2] = { {1,2}, {3,4}, {5,6} };
    int (*pa)[3][2] = &a;
    
    printf("a = %p\n", a);
    printf("pa = %p\n", pa);
    printf("pa + 1 = %p\n", pa + 1);  // add 24 -> add 0x18

}
