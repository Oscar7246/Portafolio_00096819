#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("1.4");
    s.push("3.4");
    s.push("5.6");
    s.push("7.8");

    cout << "El tamaño de la pila es: " << s.size() << endl;

    s.pop();
    s.pop();
    s.pop();

    cout << "El elemento del TOP es: " << s.top() << endl;

    s.pop();

    if(s.empty())
        cout << "La pila esta vacia\n";
    else
        cout << "La pila no esta vacia\n";

    return 0;
}
