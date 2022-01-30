#include<iostream>
using namespace std;
int a=100;
class A{
    int a;
    public:
        void fun(){
            a=10;
            a+=::a;
            cout<<a;

        }
}cl;
int main(){
    cl.fun();
    return 0;
}