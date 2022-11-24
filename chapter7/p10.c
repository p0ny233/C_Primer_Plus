#include <stdio.h>

#define single 17850
#define huzhu 23900
#define yihun1 29750
#define yihun2 14875

#define base_per 0.15
#define add_per 0.28

int main(void)
{

    char ch;
    float total;
    float suijin;

    while (scanf("%c", &ch) && scanf("%f", &total))
    {   
        switch (ch)
        {

            case 'a':
                if (total <= single)
                    suijin = base_per * total;
                else 
                    suijin = base_per * total + add_per * (total - single);
                break;

            case 'b':
                if (total <= huzhu)
                    suijin = base_per * total;
                else 
                    suijin = base_per * total + add_per * (total - single);
                break;

            case 'c':
                if (total <= yihun1)
                    suijin = base_per * total;
                else 
                    suijin = base_per * total + add_per * (total - single);
                break;

            case 'd': 
                if (total <= yihun2)
                    suijin = base_per * total;
                else 
                    suijin = base_per * total + add_per * (total - single);


        }

        printf("suijin = %f\n", suijin);


    }

    return 0;

}
