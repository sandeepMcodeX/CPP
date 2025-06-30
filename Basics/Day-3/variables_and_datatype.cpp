

#include <iostream>  
using namespace std; 

int main()
{

    /* ───── Integers (4 bytes) ───── */
    int a;             // declaration
    a = 10;            // definition 
    cout << a << endl; 

    /* ───── Characters (1 byte) ───── */
    char c = 'a';      
    cout << c << endl;  

    /* ───── Floating‑point numbers (4 bytes) ───── */
    float f = 3.14f;   
    cout << f << endl; 

    /* ───── Double‑precision numbers (8 bytes) ───── */
    double d = 4.23334; 
    cout << d << endl;  

    /* ───── Boolean (1 byte) ───── */
    bool b = 0;        
    cout << b << endl; 

    
    // bool b = true;
    // cout << b << endl;  // print: 1

    return 0; 
};

