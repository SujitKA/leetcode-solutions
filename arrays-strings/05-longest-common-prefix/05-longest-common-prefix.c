#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int prefixLen = strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (j < prefixLen && strs[i][j] != '\0' && strs[i][j] == strs[0][j]) {
            j++;
        }
        prefixLen = j;

        if (prefixLen == 0)
            break;
    }

    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    strncpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';

    return result;
}

int main()
{
    char* strs[] = {"flower", "flow", "flight"};
    int strsSize = 3;

    char* prefix = longestCommonPrefix(strs, strsSize);
    printf("Longest common prefix: \"%s\"\n", prefix);

    free(prefix);

    return 0;
}