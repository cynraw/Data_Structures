#include <iostream>
using namespace std;

void insertionSort(int a[], int n){
    for(int i = 1; i<n; i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main(){
    int a[]={5,4,10,1,6,2};
    int n = 6;
   

    insertionSort(a,n);
    cout<<"Sorted array is:";
    for(int i =0; i<n; i++){
        cout<<a[i]<<" ";
    }

    }