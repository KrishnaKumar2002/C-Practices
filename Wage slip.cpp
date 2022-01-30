#include<iostream>
#include<stdlib.h>
using namespace std;
class sales{
    int sno;
    char sname[100];
    float whr,wage,totalwage;
    void calcwage(){
        totalwage=whr*wage;
    }
    public:
        void in_data();
        void out_data();
};
void sales::in_data(){
    wage=100.28;
    totalwage=0.0;
    cout<<"\nEnter the id of employee";
    cin>>sno;
    cout<<"Enter name of employee";
    gets(sname);
    cout<<"\nEnter the total working hours";
    cin>>whr;
    
    calcwage();
}
void sales::out_data(){
    cout<<"\n\t\t\t\t\t\t\t KK & co ";
    cout<<"\n\t\t\t\t\t\t\t ~~~~~~~"<<"\n";
    cout<<"\n\t\t\t\t\t\t\t ID:"<<sno<<"\n";
    cout<<"\n\t\t\t\t\t\t\t Name:"<<sname<<"\n";
    cout<<"\n\t\t\t\t\t\t\t wage per hour:"<<"$"<<wage<<"\n";
    cout<<"\n\t\t\t\t\t\t\t Total hours worked:"<<whr<<"\n";
    cout<<"\n\t\t\t\t\t\t\t Total Wages:"<<"$"<<totalwage<<"\n";
}
int main(){
    sales sal;
    sal.in_data();
    sal.out_data();
    return 0;
}