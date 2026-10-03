#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t))
        return false;

    int freq[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        freq[s[i] - 'a']++;

    for (int i = 0; t[i] != '\0'; i++)
        freq[t[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    char s[100];
    char t[100];

    printf("Enter the s string: ");
    scanf("%s", s);

    printf("Enter the t string: ");
    scanf("%s", t);

    if (isAnagram(s, t))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}