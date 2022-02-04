#include<fstream>
#include<iostream>
using namespace std;

int main(){
	char input[30];
	ofstream os;
	os.open("Details.txt");
	cout<<"Details of 1222:"<<endl;
	cout<<"Name of the student:";
	cin.getline(input, 30);
	os<<input<<endl;
	cout<<"Enter the department and section:";
	cin>> input;
	os<<input<<endl;
	os.close();
	ifstream is;
	string line;
	is.open("Details.txt");
	cout<<"Reading from the file"<<endl;
	while(getline(is, line)){
		cout<<line<<endl;
	}
	is.close();
	return 0;
}
