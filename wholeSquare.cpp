#include <iostream>
using namespace std;
int square(int a, int b){
    int res;
    res = a*a + b*b + 2*a*b;
    return res;
}
int main()
{
    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Answer is "<<square(a,b)<<endl;
}