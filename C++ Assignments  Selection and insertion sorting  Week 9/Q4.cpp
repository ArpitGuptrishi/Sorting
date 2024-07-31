#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,1,2};
    int n=5;
    for(int i=0;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    int num1=0,num2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            num1=num1*10+arr[i];
        }
        if(i%2!=0){
            num2=num2*10+arr[i];
        }
    }
    cout<<num1<<" and "<<num2<<endl<<"Sum: "<<num1+num2;
}