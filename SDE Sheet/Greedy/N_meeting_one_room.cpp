// Problem Statement: There is one meeting room in a firm. You are given two arrays, start and end each of size N.For an index ‘i’, start[i] denotes the starting time of the ith meeting while end[i]  will denote the ending time of the ith meeting. Find the maximum number of meetings that can be accommodated if only one meeting can happen in the room at a  particular time. Print the order in which these meetings will be performed.

// Example:

// Input:  N = 6,  start[] = {1,3,0,5,8,5}, end[] =  {2,4,5,7,9,9}

// Output: 1 2 4 5

// Explanation: See the figure for a better understanding. 

#include<bits/stdc++.h>
using namespace std;
void meeting(int start[],int end[],int n)
{ 
   for(int i=0;i<n;i++)
    { 
     if(start[i+1]<=end[i])
    {
        cout<<(i)<<" ";
  
     }
     
    }
  
}
int main(){
  int n=6 ;
   int start[]={1,3,0,5,8,5};
   int  end[]={2,4,5,7,9,9};
   
 meeting(start,end,n);

  

   } 

