//including in the library
#include<iostream>
using namespace std;

//using functions 

//using function for maximum element
int func1(int arr[]){
	//using loop for checking the maximum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]>a){	
			a = arr[i];}
		
}
	return a;}


//using function for getting the minimum element
int func2(int arr[]){
	//using loop for checking the minimum number in array
	int a = arr[0];
	for (int i =0;i<10;i++){
		if(arr[i]< a){	
			a = arr[i];}
		
}
	return a;
}
//using function for mean
int func3(int arr[]){
	float sum=0;
	//using loop for adding every numbers in array
	for (int i=0;i<10; i++){
		sum+=arr[i];
	}
	//returning the mean to the user
	return sum/10;

}
//using the function for median
void func4(int arr[]){
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
	float m = (float(arr[4])/2)+(float(arr[5])/2);
		cout<<"The median of the elements in the array is "<<m<<endl;	
}

//finding the most frequent element
int func5(int arr[]) 
{ 
    // find the max frequency 
    int max = 1, a = arr[0], pre = 1; 
    for (int i = 1; i < 10; i++) { 
        if (arr[i] == arr[i - 1]) 
            pre++; 
        else { 
            if (pre > max) { 
                max = pre; 
                a = arr[i - 1]; 
            } 
            pre = 1; 
        } 
    } 
  
    // If last element is the most frequent one . 
    if (pre > max) 
    { 
        max = pre; 
        a = arr[10 - 1]; 
    } 
   
    return a; 
}  
int main(){
	int arr[10]={1,2,10,9,5,6,3,2,8,4};  
	//call for functions
	cout<<"The maximum of the numbers in the array: "<<func1(arr)<<endl;
	cout<<"The minimum of the numbers in the array: "<<func2(arr)<<endl;
	cout<<"The mean of the numbers in the array: "<<func3(arr)<<endl;
	func4(arr);
	cout<<"The most frequent element in the array :"<<func5(arr)<<endl;
	return 0;
}
