#include<iostream>
#include<string>

using namespace std;

class employee{
	string name;
	int id;
	float salary;
	public:
	void read(){
		cout<<"Enter the name:"<<endl;
		cin>>name;
		cout<<"Enter the id:"<<endl;
		cin>>id;
		cout<<"Enter the salary:"<<endl;
		cin>>salary;
		}
	void display(){
		cout<<name<<endl<<id<<endl<<salary<<endl;
	}
};
int main(){
	employee e;
	employee*ptr;
	ptr=&e;
	ptr->read();
	ptr->display();
	return 0;
}
