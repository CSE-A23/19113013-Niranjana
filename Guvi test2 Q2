#include<conio.h>
#include<iomanip>
using namespace std;
class mytime
{
  int hrs;
  int mins;
  int secs;
  public:
  void read();
  void print();
  mytime operator+(mytime t2);
};
void mytime::read()
{
  cout<<"\nEnter hour,minutes and seconds\n";
  cin>>hrs>>mins>>secs;
}
void mytime::print()
{
  cout<<"\nTime is-> "<<setfill('0')<<setw(2)<<hrs;
  cout<<":"<<setfill('0')<<setw(2)<<mins;
  cout<<":"<<setfill('0')<<setw(2)<<secs<<endl;
}
mytime::operator+(time t2)
{
  time t;
  t.hrs=hrs+t2.hrs;
  t.mins=mins+t2.mins;
  t.secs=secs+t2.secs;
  return t;
}
void main()
{
  clrscr();
  time t1,t2,t3;
  t1.read();
  t1.print();
  t2.read();
  t2.print();
  t3=t1+t2;
  cout<<"\nTime1+ Time2:\n";
  t3.print();
  getch();
}
