#include<iostream>
#include<string>

using namespace std;
class employee{
public:
	int id;
	string name;
	float salary;
	employee(int id,string name,float salary){
		this->id=id;
		this->name=name;
		this->salary=salary;
	}
	void display(){
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};
int main(){
	employee e1=employee(22,"mounika",120000);
	e1.display();
	return 0;
}
