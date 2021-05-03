#include <iostream>
#include <string>
using namespace std;

int main()
{


    //simple calculator to perform basic operations by using switch case :

    int a, b;
    char op;
    cout << "enter any two numbers" << endl;
    cin >> a >> b;
    cout << "\n enter the operator that is to be applied " << endl;
    cin >> op;

    switch (op)
    {
    case ('*'):
        cout << "the result is " << a * b;
        break;

    case ('+'):
        cout << "the result is " << a + b;
        break;

    case ('-'):
        cout << "the result is " << a - b;
        break;

    case ('/'):
        cout << "the result is " << a / b;
        break;

    case ('%'):
        cout << "the result is " << a % b;
        break;

    default:
        cout << "please enter a valid entry " << endl;
        break;
    }
// **********************************************************************************************************************************




   



    return 0;
}