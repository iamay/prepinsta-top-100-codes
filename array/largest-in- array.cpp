// using built in stl function on vector

#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int arrSort(vector <int>& arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size() - 1];
}
int main() 
{
   vector<int> arr1 = {11,4,5,22,9};
  cout<<arrSort(arr1);
}


// Using first as max and then comparing with others


int findLargestElement(int arr[], int n) {
int max = ar[0];
for(int i = 0; i < n;i++)
{
if(max < arr[i])
  max  = arr[i];
}
return max;
}
  int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
  }
