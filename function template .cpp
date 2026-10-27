#include<iostream>
using namespace std;
template<class T>
T add(T a,T b){
return a+b;
}
int main(){
cout<<"sum of integer:"<<add(5,10)<<endl;
cout<<"sum of float:"<<add(5.7,3.4)<<endl;
cout<<"sum of character:"<<add('A','D')<<endl;
return 0;
}

