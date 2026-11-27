#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> brackets;

        for (char c : s)
        {
            if (c == '{' || c == '[' || c == '(')
            {
                brackets.push(c);
                continue;
            }
            else
            {
                if (brackets.empty())
                    return false;
                char top = brackets.top();
                if ((top == '{' && c == '}') ||
                    (top == '[' && c == ']') ||
                    (top == '(' && c == ')'))
                {
                    brackets.pop();
                    continue;
                }
                return false;
            }
        }

        return brackets.empty();
    }
};