#include <stdio.h>
#include <string.h>

int main(void)
{
    char apps[] = "apples";
    char app[] = "apple";

    int r = 0; 
    r = strcmp("A", "A");
    printf("strcmp(\"A\", \"A\") is %d\n", r);  // A - A = 0

    r = strcmp("A", "B");
    printf("strcmp(\"A\", \"B\") is %d\n", r);  // A - B = -1
    
    r = strcmp("B", "A");
    printf("strcmp(\"B\", \"A\") is %d\n", r);  // B - A = 1
    printf("strcmp(\"C\", \"A\") is %d\n", strcmp("C", "A"));  // C - A = 2
    printf("strcmp(\"Z\", \"a\") is %d\n", strcmp("Z", "a"));  // Z - a = 90 - 97 = -7
    
    r = strcmp(apps, app);
    printf("strcmp(\"apples\", \"apple\") is %d\n", r);  // s - 0 = 115
    
    r = strcmp("apple", "apples");
    printf("strcmp(\"apple\", \"apples\") is %d\n", r);  // 0 - s = -115

    return 0;

}
