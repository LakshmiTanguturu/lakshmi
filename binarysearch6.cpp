#include<bits/stdc++.h>
using namespace std;
int findfixedpoint(vector<int>&arr) {
int left=0;
int right=arr.size()-1;
while(left<=right) {
int mid=left+(right-left)/2;
if(arr[mid]=mid) {
return mid;
}
else if(arr[mid]<mid) {
left=mid+1;
}
else {
right=mid-1;
}
}
return -1;
}
int main() {
vector<int>arr={-10,-5,0,3,7,9,11,13,14};
int fixedpoint=findfixedpoint(arr);
if(fixedpoint!=-1) {
cout<<"fixed pooint is at index"<<fixedpoint<<"with value"<<arr[fixedpoint]<<endl;
} else {
cout<<"no fixed point found in the array"<<endl;
}
return 0;
}
