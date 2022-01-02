/*
    Palindromic String
    - Read a sentence/paragraph & check if it is palindrome or not
*/

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char arr[]){
    int start = 0;
    int end = strlen(arr) - 1;
    
    while(start < end){
        if(arr[start] == arr[end]){
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    char arr[1000];
    cout << "Enter your sentence: ";
    cin.getline(arr, 1000);

    if(isPalindrome(arr)){
        cout << "Yes, it's Palendromic string" << endl;
    }else{
        cout << "Not a Palendromic string" << endl;
    }

    return 0;
}

/* 
OUTPUT:

Case1:
    Enter your sentence: abc121cba
    Yes, it's Palendromic string

Case2:
    Enter your sentence: ab cd dc ba
    Yes, it's Palendromic string

Case3:
    Enter your sentence: aman
    Not a Palendromic string
*/