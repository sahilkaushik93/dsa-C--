# include <iostream>
using namespace std;

int main(){
    int a = 1;
    cout << "this is the variable of int type:";
    cout << a <<endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2323;
    cout<< f <<endl;

    int a_size = sizeof(a);
    cout<< "Size of a: " << a_size <<endl;

    // Type Casting (converting type of a pre-existing variable)
    float g = 'a';
    cout<< g <<endl;

    char ch = 98;
    cout<< ch <<endl;
}
