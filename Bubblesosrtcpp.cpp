#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int check=0;
        for(int j=0;j<n-1;j++){
            cout<<"i="<<i<<" j="<<j<<" i*j="<<i*j<<endl;
            if(arr[j]>arr[j+1]){
                check=1;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(check==0){
            return;
        }
    }
}
int main(){
    // int arr[10]={9,7,2,5,4,10,3,8,1,6};
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}
