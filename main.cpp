#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int rem = 0;
    int rev = 0;

    int num;
    cout << "Enter number :" << endl;
    cin >> num;

    num1 = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if (num1 == rev)
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }



    return 0;







}