#include<iostream>
#include<math.h>
using namespace std;

int max_sum_subarray(int ar[],int size){
	int max_so_far=0,max_ending_here=0;
	int i;
	for(i=0;i<size;i++){
		max_ending_here = max_ending_here + ar[i];
		if(max_ending_here>max_so_far){
			max_so_far=max_ending_here;
		}
		
		if(max_ending_here<0){
			max_ending_here=0;
		} 
		
	}
	return max_so_far;
}

int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	int ans=max_sum_subarray(arr,n);
	cout<<ans;
	}
