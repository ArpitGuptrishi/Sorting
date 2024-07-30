#include<iostream>
#include<algorithm>
using namespace std;
void createArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Enter element:";
        cin>>arr[i];
    }
}
void printArray(int arr[],int n){
    for(int x=0;x<n;x++){
        cout<<arr[x]<<" ";
    }
}
void sorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    cout<<"Enter Size:";
    int n;
    cin>>n;
    int numbers[n];
    createArray(numbers,n);
    sorting(numbers,n);
    printArray(numbers,n);
}