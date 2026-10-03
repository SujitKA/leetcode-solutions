#include<stdio.h>
#include<string.h>

void remnline(char str[])
{
    int i=0;

    while(str[i] != '\0')
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

void strrev(char str[],int n)
{
    char temp;

    for(int i=0;i<n/2;i++)
    {
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

int main()
{
    int n;

    printf("Enter the length of the string:");
    scanf("%d",&n);
    getchar();

    char str[n+1];
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);

    remnline(str);

    strrev(str,strlen(str));

    printf("The reversed string:%s\n",str);

    return 0;
}