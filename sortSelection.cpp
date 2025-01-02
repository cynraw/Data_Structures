#include <iostream>
using namespace std;

void selectionSort(int A[], int n){
    for(int i=0; i < n-1; i++){
        int min = i;
        for (int j=i+1; j < n; j++){
            if (A[j] < A[min]){
                min = j;
            }
            swap(A[i], A[min]);
        }
    }
}

int main(){
    int array[] = {2,7,4,1,5,3};
    int n = 6;

    selectionSort(array, n);
    cout<<"sorted array is:";
    for(int i =0; i<n; i++){
        cout<<array[i]<< " " ;   
        }
        cout << endl;

        return 0;
}
