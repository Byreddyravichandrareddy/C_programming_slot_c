#include<stdio.h>

void getMajorityElement(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    if (maxCount > n / 2)
        printf("Majority Element = %d\n",arr[index]);
  
    else
        printf("No Majority Element\n");
}
int main()
{
    int arr[] = { 3, 3, 4, 2, 4, 4, 2, 4, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    getMajorityElement(arr, n);
  
    return 0;
}
