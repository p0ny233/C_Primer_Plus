#include <stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%-+10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    printf("************************************\n");

    printf("%.1d\n", 112233);
    printf("%.2d\n", 112233);
    printf("%.3d\n", 112233);
    printf("%.4d\n", 112233);
    printf("%.5d\n", 112233);
    printf("%.6d\n", 112233);
    printf("%.7d\n", 112233);
    printf("%.8d\n", 112233);
    printf("%.9d\n", 112233);


    printf("************************************\n");

    printf("%01d\n",112233);
    printf("%02d\n",112233);
    printf("%03d\n",112233);
    printf("%04d\n",112233);
    printf("%05d\n",112233);
    printf("%06d\n",112233);
    printf("%07d\n",112233);
    printf("%08d\n",112233);
    printf("%09d\n",112233);

    return 0;
}
