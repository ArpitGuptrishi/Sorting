#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Size:";
    int n=5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter element:";
        int x;
        cin>>x;
        arr[i]=x;
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;

            if(arr[i]<arr[j]){
                count++;
            }
        }
        int aidx=n-count-1;
        int diff=aidx-i;
        if (diff<0) diff= -diff;
        if (diff>1){
            flag=false;
            break;
        }
        
    }
    cout<<flag;
    
}