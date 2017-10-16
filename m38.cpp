#include <iostream.h>
void main()
{
    int a, b;
    cin >> a >> b;
    cout << a << '/' << b << '=';
    if ( a % b ==0 )
        cout << a / b << endl;
    else
        cout << a / b << "..." << a % b << endl;
}
