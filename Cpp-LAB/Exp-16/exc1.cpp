#include<exception>
#include<iostream>
int main(){
   using namespace std ;
   int num1,num2,res;
   cout<<"enter the values:"<<endl;
   cin>>num1>>num2;
   try{
      if(num2==0){
        throw  num2;
        }
        else{
        res=num1/num2;
        cout<<"result is:"<<res<<endl;
        }
        }
        catch(int num2){
          cout<<"divide by zero exception caught"<<endl;
    }
    }

