#include<iostream>
#include<exception>
using namespace std;
int main(){
   int a,b,result;
   cout<<"enter the values of a and b:"<<endl;
   cin>>a>>b;
   try{
     if(b==0){
        throw(b);
        }
        else{
        result=a/b;
        cout<<"result is:"<<result<<endl;
        }
    }
    catch(char result){
        cout<<"exception caught:  char type"<<endl;
    }

    catch(...){
        cout<<"exception caught:divide by zero"<<endl;
   }
   }

