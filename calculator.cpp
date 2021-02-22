#include <iostream>
#include <cmath>
#include <typeinfo>

using namespace std;

double root(int h);

int main() {
    int num1, num2;
    string op;
    cout<<"Type a number: ";
    cin>>num1;
    cout<<"Type another number: ";
    cin>>num2;
    cout<<"Type an operation: ";
    cin>>op;
    if (op != "x" && op != "/" && op != "+" && op != "-" && op != "sqrt" && op != "cb" && op != "sq") {
        cout<<"Invalid operator! +, -. x, /, sqrt, cb, and sq are valid operators!"<<endl;
        return 1;
    }
    if (op == "x") {
        cout<<num1*num2<<endl;
        return 0;
    }
    else if (op == "/") {
        cout<<num1/num2<<endl;
        return 0;
    }
    else if (op == "+") {
        cout<<num1+num2<<endl;
        return 0;
    }
    else if (op == "-") {
        cout<<num1-num2<<endl;
        return 0;
    }
    else if (op == "sq") {
        cout<<num1*num1<<endl;
        cout<<"Used first number!"<<endl;
        return 0;
    }
    else if (op == "cb") {
        cout<<num1*num1*num1<<endl;
        cout<<"Used first number!"<<endl;
        return 0;
    }
    else if (op == "sqrt") {
        cout<<root(num1)<<endl;
        cout<<"Used first number!"<<endl;
        return 0;
    }
}

double root(int h) {
    // Using Halley's Method
    if (h > 4) {
        return 69;
    }
    int guess = h/4;
    while (true) {
        guess = ((guess*guess*guess)+(3*guess*h))/((3*(guess*guess)) + h);
        if ((guess*guess) - h < 0.000001) {
            break;
        }
    }
    return guess;
}
