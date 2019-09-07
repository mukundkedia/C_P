#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i,sum=0;
		string s;
		cin>>s;
		for(i=0;i<s.length();i++){
			if(s[i]=='1'){
				sum++;
				}
		}
		if(sum%2==0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}

