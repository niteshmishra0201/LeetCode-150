#include <iostream>
#include <stack>
#include <string>
using namespace std;

string process(string s)
{
    string stack = ""; // string acts as our stack

    for (char c : s)
    {
        if (c == '#')
        {
            // backspace: delete most recent character
            if (!stack.empty())
            {
                stack.pop_back(); // pop top
            }
            // if empty, do nothing — backspace has no effect
        }
        else
        {
            stack.push_back(c); // push character
        }
    }
    return stack; // final typed string
}

bool backspaceCompare(string s, string t)
{
    return process(s) == process(t);
}
