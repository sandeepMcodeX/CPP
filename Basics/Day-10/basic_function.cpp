// return_type function_name(parameters) {
//     // code
// }

// Pass by Value in C++
#include <iostream>
using namespace std;

void passByValue(int x)
{
    x = x + 10;
    cout << "Inside function (pass by value): " << x << endl;
}

int main()
{
    int a = 5;
    passByValue(a);
    cout << "After function call: " << a << endl;
    return 0;
}



// Pass by Reference in C++
#include <iostream>
using namespace std;

void passByReference(int &x)
{
    x = x + 10;
    cout << "Inside function (pass by reference): " << x << endl;
}

int main()
{
    int a = 5;
    passByReference(a);
    cout << "After function call: " << a << endl;
    return 0;
}
