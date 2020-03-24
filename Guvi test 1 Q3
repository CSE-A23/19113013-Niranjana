#include<iostream>
using namespace std;
class data
{     
    private:
    char name[30];
    int age,dau,sum,total;
    float salary;
    public:
    void get()
    {
        cout<<"Enter name:"<<"\n";
        cin>>name;
        cout<<"Enter salary:"<<"\n";
        cin>>salary;
        cout<<"Enter no. of daughters:"<<"\n";
        cin>>dau;
        cout<<"Enter age:"<<"\n";
        cin>>age;
    }
    void calculate()
    {
        sum=0;
        if(dau>1)
        {
            sum=sum+10;
        }
        if(salary>30000)
        {
            sum=sum+15;
        }
        if(age>=40)
        {
            sum=sum+30;
        }
        total=(salary*sum)/100;
        cout<<"Increased salary="<<total<<"\n";
    }
    void print()
    {
        cout<<"Name:"<<name<<"\n";
        cout<<"salary:"<<salary<<"\n";
        cout<<"No. of daughters:"<<dau<<"\n";
        cout<<"Age:"<<age<<"\n";
        cout<<"Increment:"<<total<<"\n";
    }
};
int main()
{
    data emp[50];
    int n,i;
    cout<<"How many members of details do you want?\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
       emp[i].get();
    }
    for(i=0;i<n;i++)
    {
        emp[i].calculate();
    }
    cout<<"Do you want to display?\n";
    for(i=0;i<n;i++)
    {
        emp[i].print();
    }
}
