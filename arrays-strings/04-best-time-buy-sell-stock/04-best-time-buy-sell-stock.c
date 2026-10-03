#include<stdio.h>

int maxProfit(int* prices, int pricesSize) {
    
   int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        int todayProfit = prices[i] - minPrice;

        if (todayProfit > maxProfit)
            maxProfit = todayProfit;

        if (prices[i] < minPrice)
            minPrice = prices[i];
    }

    return maxProfit;
}

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the arrays:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int ans = maxProfit(arr,n);

    printf("THe max profite that can be obtoined is:%d\n",ans);

    return 0;
}