#include <stdio.h>
#include <string.h>

char * mystrncpy(char * s1, char * s2, int n);

#define SIZE 40

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int n;
    puts("Please input a string:");

    //while ((printf("s1:"), fgets(s1, SIZE, stdin)) && (printf("s2:"), fgets(s2, SIZE,stdin)) && (printf("number:"), scanf("%d", &n)))
    while ((printf("s1:"), gets(s1)) && (printf("s2:"), gets(s2)) && (printf("number:"), scanf("%d", &n),getchar(), puts(mystrncpy(s1, s2, n))));
    
    return 0;
}

char * mystrncpy(char * s1, char * s2, int n)
{   
    char * target;
    char * source;
    int tmp = n;
    target = s1;
    source = s2;

    while (n && *source && (*target++ = *source++))
        n--;

    if (!n)
        *target = '\0';
    else
        *target = *source;

    return s1;
}
