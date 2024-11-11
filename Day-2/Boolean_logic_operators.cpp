#include <iostream>

using namespace std;

int main() {
 // and &&, or ||, not !

 // and
 // if there is one false -> false ; all true -> true

 // or
 // if there is one true -> true ; all false -> false

 // not
 // if true -> false ; if false -> true

 bool hungry = true;
 bool tired = false;
 bool nope = false;
 cout << (hungry and tired) << endl;
 cout << (hungry or tired) << endl;
 cout << (!nope) << endl;

    bool keyDisabled = false;
    bool keyUp = true;
    bool keyDown = false;
    bool keyLeft = false;
    bool keyRight = false;
    if(!keyDisabled) {
        if(keyUp)  cout << "Move up" << endl;
        else if(keyDown)  cout << "Move down" << endl;
        else if(keyLeft)  cout << "Move left" << endl;
        else if(keyRight)  cout << "Move right" << endl;
        else cout<<'player stays still'<<endl;
    }

}