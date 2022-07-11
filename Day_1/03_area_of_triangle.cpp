//
// Created by MD SAQLAIN KHAN on 7/11/2022.
//program to calculate the area of a triangle

#include<iostream>
using namespace std;

int main()
{
    float area, length, breadth;
    cout << "Enter the length and breadth: "<<endl;
    cin >> length >> breadth;
    area = (length * breadth) / 2;
    cout << "The Area is" <<" "<< area;
    return 0;
}