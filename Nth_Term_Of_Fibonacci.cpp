#include<iostream>
#include<conio.h>
using namespace std;
int Fibo_nthTerm(int number)
{//fibo series :- 0 1 1 2 3 5 8 13...

    if(number==0)
        return 1;
    else if(number==1)
        return 0;
    return Fibo_nthTerm(number-1)+Fibo_nthTerm(number-2);
}
int main()
{
    int n;
    cout<<"Enter term number n to find the nth term of fibo series :-";
    cin>>n;
    if(n<1)
        cout<<"Error";
    else
        cout<<"Fibonacci "<<n<<"th term is "<<Fibo_nthTerm(n);
    getch();
    return 0;
}
