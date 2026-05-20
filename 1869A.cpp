#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    for (int i = 0; i < 100; i++)
    {
        num = num ^ i;
        cout << num << endl;
    }
    return 0;
}