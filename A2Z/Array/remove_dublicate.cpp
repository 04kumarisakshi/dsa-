// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

// Note: Return k after placing the final result in the first k slots of the array.
// Example 1: 

// Input: arr[1,1,2,2,2,3,3]

// Output: arr[1,2,3,_,_,_,_]

// Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.


#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<"Enter number of element in array: ";
    int n,i;
     cin>>n;
    int arr[n];
    unordered_set<int>s;
    for ( i = 0; i < n; i++)

    {
        cin>>arr[i];
        s.insert(i);
    }
    
    //  for ( i = s.begin(); i!=s.end(); i++)

    // {
    //    cout<<s[i];
    // }

    


}