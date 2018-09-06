#include <stdio.h>

/* 合并两个字符串 n1 n2 是长度 */
void concat(char result[], char str1[], int n1, char str2[], int n2)
{
    while(*str1)
        *result++ = *str1++;

    *result++ = ' ';

    while(*str2) {
        printf("%c\n", *str2);
        *result++ = *str2++;
    }

    *result = '\0';
}

int main(void)
{
    char s1[] = "hello"; // 单引号char 双引号string
    char s2[] = "world";
    char s3[20];

    concat(s3, s1, 5, s2, 5);
    printf("s3: %s\n", s3);
    
}