#include<iostream>
#include<string>
using namespace std;
class toy
{
    public:
    char c1[4],c2[10],tex[15];
    double s1,s2;
    
    void get()
    {
        int n;
        toy t1;
        cout<<"Combination Of Color.";
        cout<<"How many toys?";
        cin>>n;
        if(n==1)
        {
            cout<<"Enter color of toy:"<<"\n";
            cin>>c1;
            operator !();
        }
        else
        {
            cout<<"Enter color of toy1:"<<"\n";
            cin>>c1;
            cout<<"Enter color of toy2:"<<"\n";
            cin>>c2;
            cout<<"Enter size of toy1:"<<"\n";
            cin>>s1;
            cout<<"Enter size of toy2:"<<"\n";
            cin>>s2;
        }
    }
    void operator !()
    {
        if(strcmpi(c1,"blue")==0)
        {
            cout<<"Color:Purple";
        }
        else if(strcmpi(c1,"red")==0)
        {
             cout<<"Color:Blue";
        }
        else
        {
            cout<<"Color:Black";
        }
    }
    void operator +()
    {
        cout<<"New Toy Is of\nColor:Red\nTexture:Silky\nSize:"<<s1*s2;
    }
};
int main()
{
    toy t1;
    cout<<"Combination Of Color.";
    t1.get();
    t1.get();
}
