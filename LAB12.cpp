// to access private members outside a class without friend using pointers. 
#include <iostream>
using namespace std;
  
class A {
private:
    int x;
    int y;
};
  
// Driver Code
int main()
{
    A a;
    int* p = (int*)&a;
    *p = 3;
    p++;
    *p = 9;
    p--;
    cout << endl << "x = " << *p;
    p++;
    cout << endl << "y = " << *p;
    return 0;
}

