#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

string reverseWords(const string &sentence)
{
    stringstream ss(sentence);
    string word, result;
    stack<char> charStack;

    while (ss >> word)
    {
        string reversedWord;

        for (char ch : word)
        {
            charStack.push(ch);
        }

        while (!charStack.empty())
        {
            reversedWord.push_back(charStack.top());
            charStack.pop();
        }

        if (!result.empty())
            result += " ";
        result += reversedWord;
    }

    return result;
}

int main()
{
    string input;
    cout << "Masukkan kalimat (minimal 3 kata) : ";
    getline(cin, input);

    stringstream ss(input);
    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
    }

    if (count < 3)
    {
        cout << "Kalimat harus terdiri dari minimal 3 kata.\n";
    }
    else
    {
        string reversedSentence = reverseWords(input);
        cout << "Datastack Array : " << endl;
        cout << "Data : " << reversedSentence << endl;
    }

    return 0;
}
