#include <iostream>
using namespace std;
char after(char ch){
    if(ch == 'z'){
        return 'a';
    }else{
        return ch + 1;
    }
}
int main()
{
    char ch;
    cout<<"Enter a character from a to z: ";
    cin>> ch;

    cout<<"Character after "<<ch<<" is "<<after(ch)<<endl;
}