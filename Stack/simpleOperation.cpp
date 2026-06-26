#include <iostream>
#include <stack>
using namespace std;

//This is not any DSA Question , this is just a stack practice for myself

int main(){
    stack<int> st;
//Push Operation to add the elemnts into the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //stack top element and size of the stack 
    cout<< "stack top Elemrnt" << st.top()<<endl;
    cout<< "size of the stack"<< st.size()<<endl;

    //Pop operation 
    st.pop();
    cout<<"after pop"<<st.top()<<endl;


    //printing a stack

    while (!st.empty())
    {
        cout<<st.top()<<endl;
    }
    


}