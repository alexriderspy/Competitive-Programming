//Inversion count -> how far or close my array is to getting
//sorted

#include<bits/stdc++.h>

using namespace std;

int inversion_count_On2(int arr[],int n){
    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int arr[]={3,1,2};
    int n=3;
    cout<<inversion_count_On2(arr,n);   
}