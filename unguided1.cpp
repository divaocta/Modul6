#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    stack<char> charStack;
    int length = str.length();
    int i, mid = length / 2;

    for (i = 0; i < mid; i++)
    {
        charStack.push(str[i]);
    }

    for (i = mid + length % 2; i < length; i++)
    {
        if (charStack.top() != str[i])
        {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main()
{
    string kalimat;
    cout << "Masukkan Kalimat : ";
    getline(cin, kalimat);

    if (isPalindrome(kalimat))
    {
        cout << "Kalimat tersebut adalah : Palindrom";
    }
    else
    {
        cout << "Kalimat tersebut adalah : Bukan Palindrom";
    }

    return 0;
}
