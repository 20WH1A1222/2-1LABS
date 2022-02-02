#include<iostream>
#include<string>
using namespace std;

struct student{
	string name;
	int roll;
	string branch;
	char grade;
}s;
int main(){
	
	cout<<"Enter the name:"<<endl;
	cin>>s.name;
	cout<<"Enter the roll_no:"<<endl;
	cin>>s.roll;
	cout<<"Enter the branch:"<<endl;
	cin>>s.branch;
	cout<<"Enter the grade:"<<endl;
	cin>>s.grade;

	cout<<s.name<<endl<<s.roll<<endl<<s.branch<<endl<<s.grade;
	return 0;
}
