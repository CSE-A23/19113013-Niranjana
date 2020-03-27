#include <iostream> 
using namespace std; 
  
class construct { 
public: 
    int a, b; 
  
    construct();// constructor
    
    construct(int x,int y)
    {
        cout<<"\nProduct is:"<<x*y;
    }
    
    ~construct()//destructor
    {
        cout<<"\ndestroyed";
    }
    
};
void construct::construct();
{ 
        a = 10; 
        b = 20; 
} 
int main() 
{ 
    
    construct c; 
    cout << "a: " << c.a << endl //access specifiers
         << "b: " << c.b; 
    construct(5,3);
    return 1; 
}
