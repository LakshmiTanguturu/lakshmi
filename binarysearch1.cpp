#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
if(high<low)
retuen -1;
int mid=(low+high)/2;
if(key==arr[mid])
return mid;
if(key>arr[mid])
return binarysearch(arr,(mid+1),high,key);
return binarysearch(arr,low,(mid-1),key);
}
int findpivot(int arr[],int low,int high)
{
if(high<low)
return -1;
if(high==low)
return low;
int mid=(low+high)/2;
if(mid<high&&arr[mid]>arr[mid+1])
retuen mid;
if(mid>low&&arr[mid]<arr[mid-1])
return (mid-1);
if(arr[low]>=arr[mid])
return findpivot(arr,low,mid-1);
return findpivot(arr,mid+1,high);
}
int pivotedbinarysearch(int arr[],int n,int key)
{
int pivot=findpivot(arr,0,n-1);
if(pivot==-1)
return binarysearch(arr,0,n-1,key);
if(arr[pivot]==key)
return pivot;
if(arr[0]<=key)
return binarysearch(arr,0,pivot-1,key);
return binarysearch(arr,pivot+1,n-1,key);
}
int main() 
{
int arr1[]={5,6,7,8,9,10,1,2,3};
int n=sizeof(arr1)/sizeof(arr1[0]);
int key=3;
cout<<"Index of the element is:"<<pivotedbinarysearch(arr1,n,key);
return 0;
}

