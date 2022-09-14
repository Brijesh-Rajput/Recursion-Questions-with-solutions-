#include<iostream>
#include<conio.h>
using namespace std;
int fact(int number) //NOTE:- number>=0
{
    if(number==1)
        return number;
    return number*fact(number-1);
}
int main()
{
    int n;
    cout<<"Enter a Number(>=0) to find factorial of that number :- ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    getch();
}
