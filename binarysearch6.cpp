#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int x,int n)
{
    int *low=lower_bound(arr,arr+n,x);
    int *high=upper_bound(arr,arr+n,x);
    return high-low;
}
int main()
{
    int arr[]={1,2,2,3,3,3,3,3,4};
    int x=3;
    int n=9;
    int c=count(arr,x,n);
    printf("%d occurs %d times",x,c);
    return 0;
}
