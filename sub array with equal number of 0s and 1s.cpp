#include <bits/stdc++.h>
using namespace std;
int sub_zeroes_ones(int arr[], int size){
   int count = 0;
   for (int i = 0; i <= size - 1; i++){
      int total_0 = 0;
      int total_1 = 0;
      for (int j = i; j <= size - 1; j++){
         if (arr[j] == 0){
            total_0++;
         }
         else if (arr[j] == 1){
            total_1++;
         }
         if(total_0 == total_1){
            count++;
         }
      }
   }
   return count;
}
int main(){
   int arr[] = {0, 1, 1, 0, 0};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"Count of subarrays with equal number of 1’s and 0’s are: "<<sub_zeroes_ones(arr, size);
}
