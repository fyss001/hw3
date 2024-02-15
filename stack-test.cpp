#include<iostream>
#include "stack.h"
using namespace std;

signed main(){
    Stack<int> a;
    a.push(1);
    a.push(4);
    a.push(5);
    cout<<a.size()<<endl;
    cout<<a.top()<<endl;
    a.pop();
    cout<<a.top()<<endl;
    a.pop();
    a.pop();
    a.pop();
    return 0;
}