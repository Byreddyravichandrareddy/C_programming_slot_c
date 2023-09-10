#include <stdio.h>
#include <limits.h>
 
void findLrgSubArray(int *arr1, int arr_size) 
{
    int i, j, sum = 0, lrgSize = INT_MIN, left;
     
    for(i = 0; i < arr_size-1; i++) 
	{
        sum = arr1[i] ? 1 : -1;
        for (j = i+1; j < arr_size; j++) 
		{
            if (arr1[j] == 1)
                sum += 1;
            else
                sum += -1;
            if (sum == 0 && (lrgSize < j - i + 1)) 
			{
                lrgSize = j - i + 1;
                left = i;
            }
        }
    }
     
    if (lrgSize == INT_MIN) 
	{
        printf("No such subarray found from the given array.");
    } else 
	{
     printf("Subarray found from the index %d to %d", left, left+lrgSize-1);
    }
}
 
int main()
{
    int i, arr1[] = {1,2,3,4,5,6,7,8,9,10}; 
    int n = sizeof(arr1) / sizeof(arr1[0]);	
	//------------- print original array ------------------	
	printf("The given array is :  ");
	for(i = 0; i < n; i++)
	{
	printf("%d  ", arr1[i]);
    } 
	printf("\n");
//------------------------------------------------------
    findLrgSubArray(arr1, n);
    return 0;
}
