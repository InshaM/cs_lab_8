//Write a program to find sum of all elements of an array. (By Using functions)

//including in the library
#include<iostream>
using namespace std;

//using  the functions
int func(int arr[],int n){
	int sum=0;
	//using the  loop for adding every number in array
	for (int i=0;i<n; i++){
		sum+=arr[i];
	}
	return sum;

}
int main(){
	int arr[7]={1,2,10,11,5,6,3};  
	//call for the function 
	cout<<"The sum of the numbers in the array: "<<func(arr,8)<<endl;
	return 0;
}
