#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
//numbers - int, float,double
20;500;100;0;-100 ; // int(Whole Numbers)
1.4f;20.6f;12.124f; // float(7 place precision)
1.5;9.99;12.1223; //double(15 place precision)
//logical values (boolean) - bool
true;false;
//character - char 
'a'; 'b';'$';'5'; // any character enclosed in single quotes
const double pi  = 3.14 ;
int age= 22;
cout <<"Age:" << age << endl;
cout << typeid(age).name() <<endl;

float height= 1.75f;
cout << "Height: " << height << endl;
cout << typeid(height).name() <<endl;

double weight= 75.5;
cout << "Weight: " << weight << endl;
cout << typeid(weight).name() <<endl;

bool isAdult=true;
cout << "is adult ? : " << isAdult << endl;
cout << typeid(isAdult).name() <<endl;

char grade='A';

cout << "Grade: " << grade << endl;
cout << typeid(grade).name() <<endl;

// i = int , f = float , d = double , b = bool, c = char

cout<< typeid(1.5).name() << endl;

}
