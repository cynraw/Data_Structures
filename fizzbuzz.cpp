#include<iostream>
using namespace std;

void fizzbuzz(){
    int n;
    cout << "Enter the range of numbers:";
    cin>> n;

    for(int i=1; i<=n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "fizzBuzz" << endl;
        }
        else if( i % 5 == 0){
            cout << "Buzz"<<endl;
        }
        else if(i % 3 == 0){
            cout<< "fizz" <<endl;
        }
        else
        cout << i << endl;
    }

}

int main(){
    fizzbuzz();

    return 0;
}
