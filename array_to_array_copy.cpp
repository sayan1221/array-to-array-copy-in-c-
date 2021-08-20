#include<iostream>
using namespace std;
int main(){
	int a[10],ar[10],n;
	cout<<"Enter the size of array :";
	cin>>n;
	cout<<"Enter the element of array :";
	for(int i=1;i<=n;i++)
		cin>>a[i];
	
	cout<<"First array : ";
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" "; 
	
	cout<<endl;
	for(int i=1;i<=n;i++)
		ar[i]=a[i];
	
	cout<<"Second array : ";
	for(int i=1;i<=n;i++)
		cout<<ar[i]<<" ";
	
	return 0;
}
	
	
	
