#include<bits/stdc++.h>
using namespace std;
int floorSearch(int arr[],int low,int high,int x)
{
int i;
if(x>=arr[high])
return high;
for(i=high;i>low;i--)
{
if(arr[i]=x)
return i;
if(arr[i-1]<=x&&arr[i]>x)
return i-1;
}
return -1;
}
int main()
{
int arr[]={1,2,8,10,10,12,19};
int n=sizeof(arr)/sizeof(arr[0]);
int x=3;
int index=floorSearch(arr,0,n-1,x);
if(index=-1)
cout<<"flooring of "<<x<<"doesn't exist in array";
else
cout<<"flooring of "<<x<<" is "<<arr[index];
return 0;
}

