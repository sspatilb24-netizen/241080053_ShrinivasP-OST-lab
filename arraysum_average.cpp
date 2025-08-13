#include<iostream>
using namespace std;
int main(){
int n; int arr[n]; int sum=0; int average;
cout<<"Enter number of elements"<<endl;
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter "<<i+1<<" th element of array"<<endl;
cin>>arr[i];
sum=sum+arr[i];
}
average=sum/n;
cout<<"Sum of "<<n<<" numbers is:"<<sum<<endl;
cout<<"Average of "<<n<<" numbers is:"<<average<<endl;
}


