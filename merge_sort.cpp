#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
	int i,j,k;
	int a1=m-l+1;
	int a2=r-m;
	int temp1[a1],temp2[a2];
	for(i=0;i<a1;i++){
		temp1[i]=arr[l+i];
	}
	for(j=0;j<a2;j++){
		temp2[j]=arr[m+j+1];
	}
	i=0;
	j=0;
	k=l;
	while(i<a1 && j<a2){
		if(temp1[i]<=temp2[j]){
			arr[k]=temp1[i];
			i++;
			}
			else{
				arr[k]=temp2[j];
				j++;
			}
			k++;
	}
	while(i<a1){
		arr[k++]=temp1[i++];
	}
		while(j<a2){
		arr[k++]=temp2[j++];
	}
}

void merge_sort(int arr[],int l,int r){
	if(l<r){
	int m;
	m=(l+r)/2;
	merge_sort(arr,l,m);
	merge_sort(arr,m+1,r);
	merge(arr,l,m,r);
}
}

int main(){
	int n,q;
	cin>>n;
	int arr[n];
	for(q=0;q<n;q++){
		cin>>arr[q];
	}
	merge_sort(arr,0,n-1);
	for(q=0;q<n;q++){
		cout<<arr[q]<<" ";
	}
}
