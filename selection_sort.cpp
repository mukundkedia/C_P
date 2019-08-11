#include<iostream>
using namespace std;
int main(){
	int i,j,n,min,temp,pos;
	cin>>n;//size of array to be sorted
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
		min=arr[i];
		for(j=i+1;j<n;j++){
			if(arr[j]<min){
			min=arr[j];
			pos=j;	
			}
		}
		temp=arr[i];
		arr[i]=min;
		arr[pos]=temp;
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";//printing sorted elements of array
	}
}
