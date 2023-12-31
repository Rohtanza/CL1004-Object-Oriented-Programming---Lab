#include <iostream>
using namespace std;
class c
{
public:
    static int y;
};
    
int main()
{
 c::y = 0;
    cout << c::y << endl;
}
