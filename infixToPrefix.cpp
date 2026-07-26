#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;

    return 0;
}

string infixToPrefix(string infix)
{
    string output = "";
    string opStack = "";

    for (int i = infix.length() - 1; i >= 0; i--)
    {
        char ch = infix[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            output += ch;
        }

        else if (ch == ')')
        {
            opStack += ch;
        }

        else if (ch == '(')
        {
            while ( opStack.back() != ')')
            {
                output += opStack.back();
                opStack.pop_back();
            }
            opStack.pop_back();
        }

        else
        {
            while (!opStack.empty() && opStack.back() != ')' && (precedence(opStack.back()) > precedence(ch) || (precedence(opStack.back()) == precedence(ch) && ch == '^')))
            {
                output += opStack.back();
                opStack.pop_back();
            }
            opStack += ch;
        }
    }
    while (!opStack.empty())
    {
        output += opStack.back();
        opStack.pop_back();
    }
    reverse(output.begin(), output.end());

    return output;
}

int main()
{
    string input;
    cout << "Enter an expression(for infix to prefix conversion):";
    cin >> input;
    string display = infixToPrefix(input);
    cout << display << endl;
    return 0;
}