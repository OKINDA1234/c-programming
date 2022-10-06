//program to calculate the product function of a circle;
#include<iostream>
using namespace std;
float c (int f);//function prototype 
int main(){
int f;
float celcius;
cout<<"enter faranite";
cin>>f;

celcius=c(f);//function calling
cout<<"the degree is"<<celcius;
return 0;
}
float c(int f){//function definition
float celcius;
celcius=5/9*(f-32);
return celcius;
}