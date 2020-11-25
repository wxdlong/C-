#include<iostream>
#include<any>

using namespace std;
int main(){
    any a = (1), b = string("hello");
    cout << b.type().name() << ":" << any_cast<string>(b) << endl;
    cout << a.type().name() << ":" << any_cast<int>(a) << endl;
}