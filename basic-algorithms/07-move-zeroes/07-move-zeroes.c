#include<stdio.h>
#include<stdlib.h>

int* sortArray(int* nums, int numsSize, int* returnSize){
    
    int temp;
    
    for(int i=0;i<numsSize-1;i++)
    {
        for(int j=0;j<numsSize-i-1;j++)
        {
            if(nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    * returnSize = numsSize;
    return returnSize;
}

int main()
{
    int n,returnSize;
    printf("Enter the size of array:");
    scanf("%d",&n);

    int arr[n];
    int *ptr = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    ptr = sortArray(arr,n,&returnSize);

    for(int i=0;i<returnSize;i++)
    {
        printf("\n%d",arr[i]);
    }
    
    return 0;
}