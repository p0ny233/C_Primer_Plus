#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{

    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short: %hd %hu \n", num, num);  // 336 336
    printf("-num as short and unsigned short: %hd %hu \n", mnum, mnum);  // -336 [[[[[ 3760[x] ,fixed = 65200 ]]]]]

    printf("num as int and char: %d %c \n", num, num);  // 336 [[[[ 336 - 255 = 81 , (char)81  ,fixed = 336 - 256 = 80 ]]]]
    printf("WORDS as int, short, and char %d %hd %c \n", WORDS, WORDS, WORDS);  // 65618 82 (char)82

    return 0;


}
