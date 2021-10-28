//Kadane's algorithm 
// suppose we have an array with -2,3,4,-1,5,-12,6,1,3
// now first i will make an cs=0 and ms=0
// -2
// cs=arr[i]+cs  -2+0=-2 it is -ve so instead of -ve i will use 0  cs=0,ms=0
// 3
// cs=arr[i]+cs 3+0=3 cs=3,ms=3
// 4
// cs=arr[i]+cs 4+3=7 cs=7,ms=7
// -1
// cs=7-1=6 cs=6 ms=7
// 5
// cs=6+5=11 cs=11 ms=11
// -12
// cs=-12+11=-1 ve cs=0 ms=11
// 6
// cs=0+6=6 cs=6 ms=11
// 1
// cs=6+1=7 ms=11
// 3
// cs=7+3=10 ms=11
#include<iostream>
using namespace std;
int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    int ms=0;
    int cs=0;
    for(int i=0; i<n; i++)
    {
        cs=arr[i]+cs;
        if(cs<0)
        {
            cs=0;
        }
        else if(cs>ms)
        {
            ms=cs;
        }
    }
    cout<<ms;
    return 0;
}