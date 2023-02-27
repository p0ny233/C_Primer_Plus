#include <stdio.h>

void test_no_flag();
void test_has_flag();

int main(void)
{
    test_no_flag();
    test_has_flag();

    char c = getchar();
    
    return 0;

}

void test_no_flag()
{
    // character number more than 10
    printf("test_no_flag ...\n");
    char buffer[10];
    scanf("%s", buffer);
    printf("%s", buffer);
}


void test_has_flag()
{
    printf("test_has_flag");
    char buffer[10];
    scanf("%9s", buffer);
    printf("%s", buffer);
}
