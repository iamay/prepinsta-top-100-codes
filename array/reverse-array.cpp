// using stl build it function


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseAr(int ar[] , int n)
{
  reverse(ar , ar + n);
}
int main() 
{
  int ar[20];
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
    {
      cin>>ar[i];
    }
    reverseAr(ar , n);
    for(int i =0;i<n;i++)
    {
      cout<<ar[i]<<" ";
    }
}



// iterative approach using two pointers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseAr(int arr[] , int n)
{
  
   int p1 = 0, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   
}
}
int main() 
{
  int ar[20];
  int n;
  cin>>n;
  for(int i = 0; i < n; i++)
    {
      cin>>ar[i];
    }
    reverseAr(ar , n);
    for(int i =0;i<n;i++)
    {
      cout<<ar[i]<<" ";
    }
}


// using an extra array 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Function to print array

void printArray(int ans[], int n) {
  cout << "The reversed array is:- " << endl;
   for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
   }
}

//Function to reverse array using an auxiliary array

void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}
int main() {
   int n = 5;
   int arr[] = {5,4,3,2,1};
   reverseArray(arr, n);
   return 0;
}
