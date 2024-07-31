#include<iostream>
#include<string>
using namespace std;
int main(){
   string arr[]={"hema","rekha","jaya","sushma","nirma"};
    //int arr[]={5,4,1,3,2};
    cout<<"Input:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]) ;
        }
    }
    cout<<"Sorted :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}