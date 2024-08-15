#include<iostream>
#include<algorithm>
using namespace std;
int selement(int k,int arr[],int n){
    sort(arr,arr + n);
    return arr[k-1];
}
int main(){
    int arr[]={4,5,2,9,0};
    int n=5;
    int k=4;
    cout<<k<<"th smallest element : "<<selement(k,arr,n);
}