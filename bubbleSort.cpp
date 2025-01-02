#include <iostream>
using namespace std;

void bubblesort(int a[], int n){
    for (int i = 0; i<n-1; i++){
        for (int j= i+1; j<n; j++){
            if(a[j]<a[i]){
                swap(a[j], a[i]);
            }
        }
    }
}

int main(){
    int array[] = {2,7,4,1,5,3};
    int n = 6;
    
    bubblesort(array, n);
    cout<<"sorted array is :";
    for(int i=0; i<n;i++){
        cout<<array[i]<<" ";
    }
}