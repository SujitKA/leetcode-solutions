#include<stdio.h>

int search(int* nums, int numsSize, int target) {
    int low =0;
    int high = numsSize-1;
    int r=-1;

    while(high >= low)
    {
        int s = (high + low)/2;

        if(target > nums[s])
        low = s+1;

        else if(target < nums[s])
        high = s-1;

        else
        {
            r=s;
            break;
        }
    }

    return r;
}

int main()
{
    int n,target;
    printf("Enter the numsize:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the target you want to search:");
    scanf("%d",&target);

    int result = search(arr,n,target);

    printf("The tawget is stored in %d index",result);

    return 0;
}