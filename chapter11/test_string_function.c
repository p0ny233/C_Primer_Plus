#include <stdio.h>
#include <string.h>

void test_strncpy()
{
    char s1[40] = "H1ello World";
    char s2[40] = "jack hello";

    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

    // strlen(s2) = 10
    strncpy(s1, s2, 11);

    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

}

void test_strncat()
{

    char s1[20] = "hello\0world        ";
    char s2[] = "qqqq";

    
    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);

    //strncat(s1 + 2, s2, strlen(s2) - 1);
    strncat(s1 + 2, s2, 9999999999999);

    printf("s1:%s\n", s1);
    printf("s2:%s\n", s2);
    
}

void test_strncmp()
{
    char s1[] = "hello world";
    char s2[] = "he";
    char s3[] = "o";

    printf("strncmp(s1, s2, 3) = %d\n", strncmp(s1, s2, 4));

}

int main(void)
{
    test_strncpy();
    //test_strncat();
    //test_strncmp();
    return 0;
}
