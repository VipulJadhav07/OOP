#include<iostream>
using namespace std;
class employee
{
    public:
    int ID;
    int Salary;
    string Employename;
    string Employedepartmentname;
    void display()
    {
        cout<<"----Employe Details----"<<endl;
        cout<<"ID:"<<ID<<endl;
        cout<<"Salary:"<<Salary<<endl;
        cout<<"EmployeName:"<<Employename<<endl;
        cout<<"EmployeDepartmentName:"<<Employedepartmentname<<endl;
    }
};
int main()
{
    employee e1;
    e1.ID=123465;
    e1.Salary=1505566;
    e1.Employename="Vipul_Jadhav";
    e1.Employedepartmentname="SOAI";
    e1.display();
    return 0;
}
