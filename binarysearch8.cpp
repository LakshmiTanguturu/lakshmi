#include<bits/stdc++.h>
using namespace std;
vector<int>mergesortedarrays(const vector<int>&nums1,int m,const vector<int>&nums2,int n) {
vector<int>result;
int i=0,j=0;
while(i<m&&j<n) {
if(nums1[i]<=nums2[j]) {
result.push_back(nums1[i]);
i++;
}
else {
result.push_back(nums2[j]);
j++;
}
}
while(i<m) {
result.push_back(nums1[i]);
i++;
}
while(j<n) {
result.push_back(nums2[j]);
j++;
}
return result;
}
int main() 
{
vector<int>nums1={1,3,5,7};
vector<int>nums2={2,4,6};
int m=nums1.size();
int n=nums2.size();
vector<int>merged=mergesortedarrays(nums1,m,nums2,n);
cout<<"merge sorted array is:";
for(int num:merged) {
cout<<num<<" ";
}
cout<<endl;
return 0;
}
