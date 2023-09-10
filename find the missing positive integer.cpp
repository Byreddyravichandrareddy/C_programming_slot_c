#include <stdio.h>
int findSmallestMissing(int nums[], int n)
{
    int aux[n + 1];
    for (int i = 0; i < n + 1; i++) {
        aux[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0 && nums[i] <= n) {
            aux[nums[i]] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!aux[i]) {
            return i;
        }
    }
    return n + 1;
}
 
int main()
{
    int nums[] = { 1, 4, 2, -1, 6, 5 };
    int n = sizeof(nums) / sizeof(nums[0]);
 
    printf("The smallest positive missing number is %d", findSmallestMissing(nums, n));
 
    return 0;
}
