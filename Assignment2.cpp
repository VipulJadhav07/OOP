#include<iostream>
using namespace std;
class employee
{
    public:
    int ID;
    string employeename;
    string departmentname;
    void display()
    {
        cout<<"------Employe Details------"<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"employeename"<<employeename<<endl;
        cout<<"departmentname:"<<departmentname<<endl;
    }
};
int main()
{
    employee e1;
    e1.ID=123465;
    e1.employeename="Vipul_Jadhav";
    e1.departmentname="SOAI";
    e1.display();
    return 0;
}
