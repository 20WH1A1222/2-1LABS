#include<iostream>
#include<string>
using namespace std;
class employee{
public:
	int emp_no;
	string emp_name;
	int basic,da,it,netsal;
	void read(){
	cout<<"Enter the details of employee:"<<endl;
	cin>>emp_no>>emp_name>>basic>>da>>it;
	}
	void display(){
	cout<<emp_no<<endl<<emp_name<<endl<<basic<<endl<<da<<endl<<it<<endl;
	}
	void calculate_netsalary();};
	void employee::calculate_netsalary(){
	netsal=basic+da-it;
	cout<<"Net salary is:"<<netsal<<endl;
}
int main(){
	employee e;
	e.read();
	e.display();
	e.calculate_netsalary();
return 0;
}
