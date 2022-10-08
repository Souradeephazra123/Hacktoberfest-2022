#include <iostream>
using namespace std;

int main()
{
     int n;
    cout<<"Enter the array size greater than 0: "<<endl;
    cin>>n;
    const int number=n;
    int a[number];
    bool p=0;
    for (int i=0; i<number; i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<number/2;i++)
    {
        if(a[i]==a[number-1-i])
        {
           p=1;
        }
        else
        {
           p=0;
        }
    }
    if(p==1)
    {
        cout<<"congrats ! it's a palindrome"<<endl;
    }
    else
    {
        cout<<"it is not a palindrome"<<endl;
    }
    return 0;
}
