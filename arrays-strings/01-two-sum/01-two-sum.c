#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int k=0;
    printf("Enter the array elements:\n");
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d",&nums[i]);  
    }

    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i] + nums[j] == target)
            {
                returnSize[k] = i;
                returnSize[k+1] = j;
                break;
            }
        }
    }

    return returnSize;
}

int main()
{
    int n,target;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    printf("Enter the target:");
    scanf("%d",&target);

    int *str = (int*)malloc(2*sizeof(int));
    if(str == NULL)
    {
        printf("Memory Allocation Failed\n");
        exit(1);
    }

    str = twoSum(ptr,n,target,str);

    int i=0;
    for(int i=0;i<2;i++)
    {
        printf("%d",str[i]);
    }
    
    return 0;
}