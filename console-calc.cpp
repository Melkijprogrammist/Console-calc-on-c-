#include <iostream>

using namespace std;

int main(){
    char op;
    double a, b;
    
    cout << "Enter operation  (+, -, *, /): " << endl;
    cin >> op;
    
    cout << "Enter you two number: " << endl;
    cin >> a >> b;
    
    switch(op){
        case '+':
        cout << a + b;
        break;
        case '-':
        cout << a - b;
        break;
        case '*':
        cout << a * b;
        break;
        case '/':
        cout << a / b;
    break;
    default:
    cout<< "Sorry,  pleace input correact operation and number!";
        
    }
}
