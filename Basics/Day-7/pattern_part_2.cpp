
#include <iostream>
using namespace std;
void butterfly(int n)
{
    // upper wings
    for (int i = 1; i <= n; ++i)
    {
        // left stars
        for (int j = 1; j <= i; ++j)
            std::cout << '*';
        // middle spaces
        for (int j = 1; j <= 2 * (n - i); ++j)
            std::cout << ' ';
        // right stars
        for (int j = 1; j <= i; ++j)
            std::cout << '*';
        std::cout << '\n';
    }
    // lower wings (mirror image)
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
            std::cout << '*';
        for (int j = 1; j <= 2 * (n - i); ++j)
            std::cout << ' ';
        for (int j = 1; j <= i; ++j)
            std::cout << '*';
        std::cout << '\n';
    }
}

// int main()
// {
//     butterfly(5);
// }

void numPalindromePyramid(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        // leading spaces
        for (int s = 1; s <= n - i; ++s)
            std::cout << ' ';
        // ascending numbers
        for (int num = 1; num <= i; ++num)
            std::cout << num;
        // descending numbers (skip the peak to avoid duplication)
        for (int num = i - 1; num >= 1; --num)
            std::cout << num;
        std::cout << '\n';
    }
}
int main(){
    numPalindromePyramid(6);

}