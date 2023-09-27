#include<iostream>
using namespace std;
int a =100; //global
void sum()
{
    // int a = 200;
    cout << a;
}
int main()
{
    int a = 10; //local
    cout << a <<"\n";
    sum();
    return 0;
}