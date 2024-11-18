#include <iostream>
using namespace std;
int main()
{
    cout << "luy thua\n";
    int so, luythua = 1,mc;
    cout << "nhap so:\n";
    cin >> so;
    cout << "nhap luythua:";
    cin >> mc;
    for (int a = 1; a < mc; a++)
    {
        luythua *= so;
    }
    cout << luythua * so;
        return 0;
}
