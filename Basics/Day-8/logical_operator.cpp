
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 5;

    // Logical AND (&&)
    if (a > 0 && b > 0)
    {
        cout << "Both numbers are positive (AND)\n";
    }

    // Logical OR (||)
    if (a > 0 || b < 0)
    {
        cout << "At least one condition is true (OR)\n";
    }

    // Logical NOT (!)
    bool isRaining = false;
    if (!isRaining)
    {
        cout << "Go outside, it's not raining (NOT)\n";
    }

    return 0;
}

#include<iostream>
using namespace std;
 int main(){
     bool a = true, b = false;
     cout << (a && b) << endl; // AND -> 0
     cout << (a || b) << endl; // OR  -> 1
     cout << (!a) << endl;     // NOT -> 0
}
