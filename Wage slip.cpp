#include<iostream>
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
}
void sales::in_data(){
    wage=100.28;
    totalwage=0.0;
    cout<<"\nEnter the id of employee";
    cin>>sno;
    cout<<"\nEnter the total working hours";
    cin>>whr;
    cout<<"Enter name of employee";
    gets(sname);
    calcwage();
}
void sales::out_data(){
    cout<<"\n\t\t\t\t\t\t\t KK & co ";
    cout<<"\n\t\t\t\t\t\t\t ~~~~~~~";
    cout<<"ID:"<<sno;
    cout<<"Name:"<<sname;
    cout<<"wage per hour:"<<"$"<<wage;
    cout<<"Total hours worked:"<<whr;
    cout<<"Total Wages:"<<"$"<<totalwage;
}
int main(){
    sales sal;
    sal.in_data();
    sal.out_data();
    return 0;
}