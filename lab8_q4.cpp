//including in the library.
#include<iostream>
using namespace std;

//using the functions

//merging the arrays
int  mergarr(int arrA[],int arrB[],int arr[]){
	//looping the positions of the arrays
	for(int i=0;i<10;i++){
		if(i<5){
			arr[i] =int (arrA[i]);
		}
		if(i>4 && i<10){
			arr[i] =int (arrB[i-5]);
		}
	}
}
//using function for maximum element
int max(int arr[]){
	int a = arr[0];
	//using loop for checking the maximum number in array
	for (int i =0;i<10;i++){
		if(arr[i]>a){	
			a = arr[i];}
		
}
	return a;}
//using function for minimum element
int min(int arr[]){
	//using loop for checking the minimum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]< a){	
			a = arr[i];}
		
}
	return a;}


int main(){
	//defining the arrays
	int arrA[5]={1,2,10,11,5};
	int arrB[5]={6,3,2,8,4}; 
	int arr[10];
	cout<< "The arrA :{1,2,10,11,5}"<<endl;
	cout<< "The arrB :{6,3,2,8,4}"<<endl;
	cout<<"The merged array of arrA and arrB is arr: ";
	//call for the required functions
	for (int i =0;i<10;i++){
		mergarr(arrA,arrB,arr);
		cout<<arr[i]<<",";}
	cout<<endl<<"The maximum of the numbers in the array: "<<max(arr)<<endl;
	cout<<"The minimum of the numbers in the array: "<<min(arr)<<endl;
	return 0;
}
