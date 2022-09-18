#include<iostream>
#include<conio.h>
using namespace std;
void ReverseArray(int a[],int start,int end)
{   if(start<end) //if start==end then no swapping is required
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        ReverseArray(a,start+1,end-1);
    }
}
//  E.g:-  1,5,8,9,69,4,96,24,63,85
//Output:- 85,63,24,96,4,69,9,8,5,1  --->even no. of elements
int main()
{
    int arr[]={1,56,87,35,45,78,35};
    ReverseArray(arr,0,6);
    for(int i=0;i<=6;i++)
        cout<<arr[i]<<" ";
    getch();
}
