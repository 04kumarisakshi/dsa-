// Given an array of size N. The task is to find the maximum and the minimum element of the array 
// using the minimum number of comparisons.

// Examples:

// Input: arr[] = {3, 5, 4, 1, 9}
// Output: Minimum element is: 1
//               Maximum element is: 9

// Input: arr[] = {22, 14, 8, 17, 35, 3}
// Output:  Minimum element is: 3
//               Maximum element is: 35

#include <bits/stdc++.h>
using namespace std;

int main(){

    int i,n;
    cin>>n;
     cout<<"Enter the element of array\n";
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
 sort(arr,arr+n);

 cout<<"Minimum element is: "<<arr[0]<<"  Maximum element is: "<<arr[n-1];
}