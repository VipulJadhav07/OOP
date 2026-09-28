#include<iostream>
using namespace std;
class employee
{
    public:
    int ID;
    int Salary;
    string EmployeeName;
    string EmployeePosition;
    employee(int ID,int Salary,string EmployeeName,string EmployeePosition)
    {
        this->ID=ID;
        this->Salary=Salary;
        this->EmployeeName=EmployeeName;
        this->EmployeePosition=EmployeePosition;
        cout<<"Employee Details created!!"<<endl;
    }
    ~employee()
    {
        cout<<"Employee Record delelted!!"<<endl;
    }
    void display()
    {
        cout<<"ID="<<ID<<endl;
        cout<<"Salary="<<Salary<<endl;
        cout<<"EmployeeName="<<EmployeeName<<endl;
        cout<<"EmployeePosition="<<EmployeePosition<<endl;
    }
};
int main()
{
    employee e1(1234975,76543,"Vipul_Jadhav","HR");
    e1.display();
    return 0;
}
