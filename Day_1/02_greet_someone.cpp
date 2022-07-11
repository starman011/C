//
// Created by MD SAQLAIN KHAN on 7/10/2022.
//program to ask someone there name and greet them

#include <iostream>
using namespace std;

int main ()
{
    string name;
    cout<<"Enter Your Name Please"<<endl;
    getline(cin, name); //we could have used cin, but it would have picked up only the first letter of the name
    cout<<"Welcome"<<" "<<name;
    return 0;
}

