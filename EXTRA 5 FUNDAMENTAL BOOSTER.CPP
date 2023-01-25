#include<iostream>

using namespace std;

main(){
	
	int i;
	int a[5];
	int cube[5];
	
	for(i=0; i<=4; i++){
		
		cout<<"Enter value:";
		cin>>a[i];
		
		cube[i] = a[i]*a[i]*a[i];
	}
	for(i=0; i<=4; i++){
		
		cout<<cube[i]<<"\n\t";
	}
}
