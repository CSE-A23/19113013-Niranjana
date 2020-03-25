#include <iostream> 
using namespace std; 
class trial { 
    int code; 
    static int c; 
public: 
    void setcode(void) 
    { 
        code = ++c; 
    } 
    void showcode(void) 
    { 
        cout << "object number :" << code << "\n"; 
    } 
    static void showcount(void) 
    { 
        cout << "count:" << c << "\n"; 
    } 
}; 
int trial::c; 
int main() 
{ 
    trial t1, t2; 
    t1.setcode(); 
    t2.setcode(); 
    trial::showcount(); 
    trial t3; 
    t3.setcode(); 
    trial::showcount(); 
    t1.showcode(); 
    t2.showcode(); 
    t3.showcode(); 
    return 0; 
} 
