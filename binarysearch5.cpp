#include<bits/stdc++.h>
using namespace std;
int minlength(vector<int>& arr)
{
    vector<int>temp=arr;
    int s=0,e=0;
    sort(temp.begin(),temp.end());
    for(int i=0;i<arr.size();i++)
    {
    if(arr[i]!=temp[i])
    {
     s=i;
     break;
    }
    }
    for(int i=arr.size()-1;i>=0;i--) {
    
        if(arr[i]!=temp[i])
        {
            e=i;
            break;
        }
    }
    return e-s+1;

}
int main()
{
    vector<int>arr={3,87,24,32,6,56,92,98,234};
    cout<<"min length of sub array is"<<minlength(arr);
    return 0;
}
