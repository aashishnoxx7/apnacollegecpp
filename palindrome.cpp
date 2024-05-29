#include <iostream>
using namespace std;
int reverse(int n){
    int res = 0;
    while(n>0){
        int lastDigit = n % 10;
        res = res * 10 + lastDigit;
        n = n/10;
    }
    return res;

}
int isPalindrome (int n){
    if(n == reverse(n)){
        cout<<"It is a palindrome number"<<endl;
    }else{
        cout<<"It is not a palindrome number"<<endl;
   }
}


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    isPalindrome(n);
}

