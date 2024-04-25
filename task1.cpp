#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
    
        for(;j>=0;j--){
            
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    vector<int> arr={6,2,4,9,7};
    insertion(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }  
}
