
#include<bits/stdc++.h>
using namespace std;
int main(){
   // https://www.geeksforgeeks.org/writing-url-c-program/
   int arr[]={7,10,4,20,15};
   sort(arr,arr+5);
   cout<<arr[2];

}



/* 
Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)
Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N


 */



/* 
{
  int low = 0;
  int high = n-1;
while (low<=high){
  int mid = (low+high)/2;
   
  if ((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 || arr[mid+1]<=arr[mid])){
      return mid;
  }
  else if (mid>0 && arr[mid-1]>=arr[mid]){
      high = mid-1;
  }
  
  else{
      low = mid+1;
  }
}
 */