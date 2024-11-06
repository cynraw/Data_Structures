#include <iostream>

using namespace std;
//num = 121


bool isPalindrome(int num){
    int originalNum = num;
    int reversedNum = 0;

    while(num > 0 ){
        int digit;
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main(){
    int x;
    cout<< "Enter a number you wish to check if its a palindrome: ";
    cin>> x;
    isPalindrome(x);
    if(isPalindrome(x)== true){
        cout<< x <<" "<< "is a palindrome";
    }else{
        cout<< x <<" "<<" is not a palindrome";
    }

    return 0;
}