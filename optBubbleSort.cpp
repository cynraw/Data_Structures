#include <iostream>
using namespace std;

void optBubbleSort(int a[], int n){
    for(int i=0; i < n-1; i++){
        int flag = 0;
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                flag = 1;
            }
        }
        if (flag == 0){
            break;
        }
    }
}

int main(){
    int A[]= {15,16,6,8,5};
    int n = 5;

    optBubbleSort(A,n);
    cout<<"Sorted array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<A[i] << " ";
    }
}
