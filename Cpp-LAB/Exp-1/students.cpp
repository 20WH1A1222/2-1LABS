#include<iostream>
using namespace std;
class student{
	char name[50];
	int roll;
	char grade[5];
	int i;
public:
	void read(){
	cout<<"Enter the details of student:"<<endl;
	cin>>name>>roll>>grade;
	}
	void display(){
	cout<<name<<endl<<roll<<endl<<grade<<endl;
	}
};
int main(){
	student s[3];
	int i;
	for(i=0;i<3;i++){
		s[i].read();
	}
	for(i=0;i<3;i++){
		s[i].display();
	}
return 0;
}
