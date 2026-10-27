#include<iostream>
using namespace std;
template<class T>
class Calculator{
T num1,num2;
public:
Calculator(T a,T b){
num1=a;
num2=b;
}
void displayResult(){
cout<<"Addition:"<<num1+num2<<endl;
cout<<"Subtraction:"<<num1-num2<<endl;
cout<<"Multiplication:"<<num1*num2<<endl;
cout<<"Division:"<<num1/num2<<endl;
  }
};
int main(){
Calculator<int>calc1(10,5);
cout<<"for integers:/n";
calc1.displayResult();
Calculator<float>calc2(9.5,3.5);
cout<<"/n for floats:/n";
calc2.displayResult();
return 0;
}


