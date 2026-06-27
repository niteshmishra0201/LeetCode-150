#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s){
    stack<char> st;

    for(char c : s ){
        if(c == '('  || c =='{' || c=='['){
            st.push(c);
        }else{
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            // Check if the closing matches the most recent opening
            if (c == ')' && top != '(') return false;
            if (c == ']' && top != '[') return false;
            if (c == '}' && top != '{') return false;
        }

    }
    return st.empty();
}

int main(){
    cout<< isValid("({{[]}})");
    cout<< isValid("{][(]}");
}
