#include <iostream>
using namespace std;
int sum(int n){
    int res = 0;
    while(n>0){
        int lastdigit = n % 10;
        res = res + lastdigit;
        n /= 10;
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;

    cout<<"The sum of digits of "<<n<<" is "<<sum(n)<<endl;


}