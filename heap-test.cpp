#include<iostream>
#include "heap.h"
using namespace std;

signed main(){
    Heap<int, std::greater<int> > a(100);
    a.push(1);
    a.pop();
    //cout<<a.size()<<endl;
    Heap<int> heap(4);
	heap.push(0);
	heap.push(5);
	heap.push(10);
	heap.push(15);
	heap.push(20);
	heap.push(25);
    heap.pop();
    cout<<heap.top()<<" \n";
    heap.pop();
    cout<<heap.top()<<" \n";
    heap.pop();
    cout<<heap.top()<<" \n";
    heap.pop();
    cout<<heap.top()<<" \n";
    heap.pop();
    cout<<heap.top()<<" \n";
    /*cout<<a.top()<<" ";
    a.push(0);
    cout<<a.top()<<" ";
    a.push(-1);
    cout<<a.top()<<" ";
    a.push(9);
    cout<<a.top()<<" \n";
    a.pop();
    cout<<a.top()<<" *\n";
    a.pop();
    cout<<a.top()<<" *\n";
    a.pop();
    cout<<a.top()<<endl;*/
    return 0;
}