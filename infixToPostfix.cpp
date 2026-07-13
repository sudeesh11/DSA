#include <iostream>
#include <string>
using namespace std;

int precedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    if (ch == '*' || ch == '/')
    {
        return 2;
    }
    if (ch == '^')
    {
        return 3;
    }
    return 0;
}

string infixToPostfix(string infix)
{
    string output = "";
    string opStack = "";
    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            output += ch;
        }
        else if (ch == '(')
        {
            opStack += ch;
        }

        else if (ch == ')')
        {
            while (opStack.back() != '(')
            {
                output += opStack.back();
                opStack.pop_back();
            }
            opStack.pop_back();
        }

        else
        {
            while (!opStack.empty() && opStack.back() != '(' && (precedence(opStack.back()) > precedence(ch) || (precedence(opStack.back()) == precedence(ch) && ch != '^')))
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
    return output;
}

int main()
{
    string input;
    cout << "Enter an expression(for infix to postfix conversion)" << endl;
    cin >> input;
    string display = infixToPostfix(input);
    cout << display << endl;
    return 0;
}