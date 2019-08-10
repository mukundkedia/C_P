#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int r,int f){
	if(r>=l){
		int mid = (l+r)/2 ;
		if(arr[mid]==f){
			
			return mid;
			
		}
		else if(arr[mid]>f){
			return binarysearch(arr,l,mid-1,f);
		}
		else {
			return binarysearch(arr,mid+1,r,f);
		}
		}
		return -1;
	}
	


int main(){
	
	int n;//n is size of array
	cout<<"Size of array :- ";
	cin>>n;
	int i,pos,arr[n];// must be a sorted array
	cout<<"Input the array elements"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int n1;
	cout<<"Input the element to be searched in array :-";
	cin>>n1; //no. to be searched in sorted array
	pos=binarysearch(arr,0,n-1,n1);
	if(pos==-1){
		cout<<"NUMBER NOT FOUND"<<endl;
		exit(0);
	}
	cout<<"Position of searched number in array is :-"<<pos+1;
}
