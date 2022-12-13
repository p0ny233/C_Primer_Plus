#include <stdio.h>

int data[] = {100 ,200};
int moredata[] = {300, 400};

int main(void)
{
    
    int * p1, * p2, * p3;
    p1 = p2 = data;
    p3 = moredata;
    
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);
    // *p1 = 100,   *p2 = 100,   *p3 = 300
    
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    // *p1++ = 100, *++p2 = 200, (*p3)++ = 300
    
    printf("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);
    // *p1 = 200,   *p2 = 200,   *p3 = 301

    return 0;

}
