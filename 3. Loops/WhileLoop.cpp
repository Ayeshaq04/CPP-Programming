#include <iostream>
using namespace std;
int main()
{
    int n, r, sum;
    cout<<"Enter a no.: ";
    cin>>n;

    while(n!=0)
    {
        r=n % 10;
        n = n / 10;
        sum=sum+r;
    }
    cout<<sum<<endl;

    return 0;
}