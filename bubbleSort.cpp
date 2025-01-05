#include <iostream>
using namespace std;

void bubblesort(int a[], int n){
    for (int i = 0; i<n-1; i++){
        for (int j= 0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
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