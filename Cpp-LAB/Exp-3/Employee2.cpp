#include<iostream>
#include<string>
using namespace std;
class employee{
public:
	int emp_no;
	string emp_name;
	int basic;
	float da,it,netsal;
	void read(){
	cout<<"Enter the details of employee:"<<endl;
	cin>>emp_no>>emp_name>>basic;
	}
	void display(){
	da=0.52*basic;
	it=0.03*(basic+da);
	netsal=basic+da-it;
	cout<<"employee no. is:"<<emp_no<<endl;
	cout<<"employee name is:"<<emp_name<<endl;
	cout<<"basic is:"<<basic<<endl;
	cout<<"da is:"<<da<<endl;
	cout<<"it is:"<<it<<endl;
	cout<<"Net salary is:"<<netsal<<endl;
}
};
int main(){
	employee e[2];
	int i;
	for(i=0;i<2;i++){
	e[i].read();
	}
	for(i=0;i<2;i++){
	e[i].display();
	}
return 0;
}
