//place bigger number at its place

#include<bits/stdc++.h>
using namespace std;

int bubble(int arr[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    bubble(arr,n);
     for (int i = 0; i < n; i++)
 {
  cout<<arr[i]<<" ";
 }
    
}