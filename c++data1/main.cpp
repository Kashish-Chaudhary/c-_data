#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
     int get_id();
    virtual void get_data()=0;
    virtual void show();
};
class manager: virtual public employee
{
    public:
    int total_manager_salary,A1[10][2],b;
    manager(int x1);
    void get_data1();
    virtual void salary();
};
class engineer:public virtual employee
{
    public:
    int total_engineer_salary,A1[10][2],a;
    engineer(int x);
    void get_data2();
   virtual void salary();
};
class salary_amount:public manager, public engineer
{
    public:
    int total_salary;
    void get_data();
    salary_amount(int a,int b);
    void salary();
    void show();
};
/*int employee::get_id()
{
    cin>>id;
}*/
manager::manager(int x)
{
    b=x;
}
void manager::get_data1()
{
    total_manager_salary=0;
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<2;j++)
        {
        cin>>A1[i][j];
        total_manager_salary+=A1[i][1];

        }
    }

}
engineer::engineer(int x)
{
    a=x;
}
void engineer::get_data2()
{
    total_engineer_salary=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<2;j++)
       {
        cin>>A1[i][j];
        total_engineer_salary+=A1[i][j];
       }
    }
}
salary_amount::salary_amount(int x,int y):manager(x),engineer(y)
{
}


void salary_amount::get_data()
{
   manager::get_data1();
   engineer::get_data2();
}
void salary_amount::salary()
{
       total_salary=0;
    total_salary=total_manager_salary+total_engineer_salary;
    cout<<total_salary;
}
void salary_amount::show()
{

}

int main()
{
    int x,y;
    cin>>x; //Enter number of managers
    cin>>y; //Enter number of engineers
    salary_amount S(x,y);
    S.get_data();
    S.salary();
    S.show();
}
