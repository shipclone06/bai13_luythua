#include <iostream>
using namespace std;
int main()
{
    cout << "luy thua\n";
    int so, luythua = 1,mc;
    cin >> so;
    cout << "nhap luythua:";
    cin >> mc;
    for (int a = 1; a < so; a++)
    {
        luythua *= so;
    }
    cout << luythua * so;
        return 0;
}
