#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    char stack[10001];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            if (top == -1)
                return false;

            char popped = stack[top--];

            if (c == ')' && popped != '(')
                return false;
            if (c == '}' && popped != '{')
                return false;
            if (c == ']' && popped != '[')
                return false;
        }
    }

    return top == -1;
}

int main()
{
    char s[10001];

    printf("Enter the string: ");
    scanf("%s", s);

    if (isValid(s))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}