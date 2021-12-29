#include <iostream>
using namespace std;
int main()
{
    int iqraAge;
    cout << "enter the age of iqra" << endl;
    cin >> iqraAge;
    if (iqraAge == 18)
    {
        cout << "eligible for driving" << endl;
    }
    else if (iqraAge > 18)
    {
        cout << "it can be drive and go to anywhere " << endl;
    }
    else
    {
        cout << "she is not eligible to drive  and see " << endl;
    }
}
