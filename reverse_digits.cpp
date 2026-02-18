//write a program to print the reverse of a corresponding number and print the reverse number (if a number has trailling zeroes the number will not inlcude them)
//reverse of 10400 will be 401 instead of 00401
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int revnum=0;
    int ld ;
    while (n>0)
    {
        ld = n% 10;
        revnum = revnum * 10+ ld;
        n=n/10;

    }
    cout<< revnum;
        return 0;

}