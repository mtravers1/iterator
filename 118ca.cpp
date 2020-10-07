#include <list>
#include <iostream>
#include <iterator>
using namespace std;
list <int> mylist;
list <int> :: iterator T;
int main() {
	mylist.push_front(10);
	mylist.push_front(15);
	mylist.push_back(45);
	mylist.pop_front();
	mylist.push_back(100);
	mylist.push_front(36);
	
	// 36 10 45 100
	cout<<"Current Front "<<mylist.front()<<endl;
	cout<<"Current Back "<<mylist.back()<<endl;
	T=mylist.begin();
	for(T; T!=mylist.end(); T++)
	cout << *T <<" ";
	
	T=mylist.begin();
	
	for(T; T!=mylist.end(); T++)
	cout << *T <<" ";
	cout<<endl;
	T=mylist.begin();
	T++;
	
	T=mylist.end();
	T--;
	cout<<*T<<endl;

	T=mylist.begin();
	T++;
	T++;
	mylist.insert(T, 1, 23);
T=mylist.begin();
for(T; T!=mylist.end(); T++)
	cout << *T <<" ";

	mylist.reverse();
	//100 45 10 36
	return 0;
}
//Three Linked list
/*
Simple
Double Ended
Doubly*/


