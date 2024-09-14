#include <iostream>
using namespace std;

int main() {
    
    string type;
    string into;
    int temp;
    
    cout << "Input the temperature... "<<endl;
    cin >> temp;
    cout << "What's the type... "<<endl;
    cin >> type;
    cout << "Convert to... "<<endl;
    cin >> into;
    cout << "result..."<<endl;
    
    float a = temp + 273.15;
    float b = temp - 273.15;
    float c = (temp - 32) * 5/9;
    float d = temp * (9/5) + 32;
    float e = (temp - 32) * 5/9 + 273.15;
    float f = (temp - 273.15) * 9/5 + 32;
    
    if (type == "celcius")
        if (into == "kelvin"){
        cout << a;
    }
    if (type == "kelvin")
        if (into == "celcius"){
        cout << b;
    }
    if (type == "fahrenheit")
        if (into == "celcius"){
        cout << c;
    }
    if (type == "celcius")
        if (into == "fahrenheit"){
        cout << d;
    }
    if (type == "fahrenheit")
        if (into == "kelvin"){
        cout << e;
    }
    if (type == "kevin")
        if (into == "fahrenheit"){
        cout << f;
    }


}
