#include <stdio.h>

int main(void)
{

    int * pzippo;
    int zippo[4][2] = 
    {
        {1,2},
        {3,4},
        {5,6},
        {7,8}
    };
    
    pzippo = zippo[0];

    printf("zippo[0] = %p\n", zippo[0]);
    printf("zippo[0] + 1 = %p\n", zippo[0] + 1);
    printf("zippo[0] + 2 = %p\n", zippo[0] + 2);
    printf("pzippo = %p\n", pzippo);

    // zippo  add/sub an integer 
    printf("zippo = %p\n", zippo);
    printf("zippo + 1 = %p\n", zippo + 1);
    printf("zippo + 2 = %p\n", zippo + 2);

    

    return 0;

}
