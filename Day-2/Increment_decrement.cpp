#include <iostream>
using namespace std;

int main(){
    //,++,--
    int x = 10;
    x*=10;
    cout<<x<<endl;
    x++;
    cout<<x<<endl;
    x--;
    cout<<x<<endl;
    ++x;
    cout<<x<<endl;
    --x;
    cout<<x<<endl;
    
//pre increment/decerement
//modify and return

//post increment/decerement
//make a copy of x; update x; return copy;
    // --------x;
    x-=4;
    cout<<x<<endl; 
}
