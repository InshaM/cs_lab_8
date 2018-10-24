
///including in the  library
#include<iostream>
using namespace std;
 
//using the functions 
//using the function for median
void func(int arr[]){
	int i,j;
	//using loop for checking the median
	for(i=0;i<10;i++){
		int a = arr[i];
		for (j=i+1;j<10;j++){
			if(arr[j]<arr[i]){	
				a=arr[j];
				arr[j]=arr[i];
				arr[i]=a;
			}
		}
	}
}
//using function for kth largest element
int klarr(int arr[],int k){
	return arr[10-k];
}

//using function for kth smallest element
int ksarr(int arr[],int m){
	return arr[m-1];
}

int main(){
	int k,m;
	int arr[10]={1,2,10,11,5,6,3,7,8,4};
	//Asking the user
	cout<< "Define the k in kth largest number in array : "; 
	cin>>k;
	cout<< "Define the k in kth smallest number in array : "; 
	cin>>m;
	//call for the functions
	func(arr);
	cout<<"The "<< k<<"th largest number in the array :"<< klarr(arr,k)<<endl;
	cout<<"The "<< m<<"th smallest number in the array :"<< ksarr(arr,m)<<endl; 
	
return 0;
}
