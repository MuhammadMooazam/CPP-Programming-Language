#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int num1 = 5, num2 = 4;
    int result = add(num1, num2);
    cout << result;

    return 0;
}
