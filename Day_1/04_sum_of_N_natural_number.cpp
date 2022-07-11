//
// Created by MD SAQLAIN KHAN on 7/11/2022.
//program to find the sum of first n number

#include<iostream>
using namespace std;

int main()
{
    int sum, n;
    cout<<"Enter the N natural number you want sum for: "<<endl;
    cin>>n;
    sum = n * (n + 1 ) / 2;
    cout<<"sum of N Natural Number is: "<<sum;
    return 0;
}
