#include<iostream>
#include<conio.h>
using namespace std;
int pow(int number,int exponent)
{
    if(exponent==1)
        return number;
    return number*pow(number,exponent-1);
}
int main()
{
    int n,e;
    cout<<"Enter number and exponent to calculate power :-";
    cin>>n>>e;
    if(e<0)
        cout<<e<<"th Power of "<<n<<" is "<<(float)1/pow(n,-e);
    else
        cout<<e<<"th Power of "<<n<<" is "<<pow(n,e);
    getch();
    return 0;
}

