#include<bits/stdc++.h>
using namespace std;
int findmaximum(int arr[],int low,int high)
{
if(low==high)
return arr[high];
int mid=low+(high-low)/2;
if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1])
return arr[mid];
else if(arr[mid]<arr[mid+1])
return findmaximum(arr,mid+1,high);
else
return findmaximum(arr,low,mid-1);
}
int main() 
{
int arr[]={1,3,50,70,10,9,7,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"The maximum element is"<<findmaximum(arr,0,n-1);
return 0;
}
