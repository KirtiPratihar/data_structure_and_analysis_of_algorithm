// // // #include <iostream>
// // // using namespace std;


// // // int main()
// // // {   int i;
// // //     cin>>i;
// // //     if(i==1){
// // //         cout<<"one";
// // //     }
// // //     else if(i==2){
// // //         cout<<"two";}
// // //     else if (i==3){
// // //         cout<<"three";
// // //     }
// // //     else if (i==4){
// // //         cout<<"four";
// // //     }
// // //     else if (i==5){
// // //         cout<<"five";
// // //     }
// // //     else if (i==6){
// // //         cout<<"six";
// // //     }
// // //     else if (i==7){
// // //         cout<<"seven";     
// // //     }
// // //     else if (i==8){
// // //         cout<<"eight";
// // //     }    
// // //     else if(i>=9){    
// // //         cout<<"Greater than 9";
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int a, b;
// //     cin >> a >> b;

// //     // Function to print English representation of numbers from 1 to 9
// //     auto printNumber = [](int n) {
// //         switch(n) {
// //             case 1: cout << "one"; break;
// //             case 2: cout << "two"; break;
// //             case 3: cout << "three"; break;
// //             case 4: cout << "four"; break;
// //             case 5: cout << "five"; break;
// //             case 6: cout << "six"; break;
// //             case 7: cout << "seven"; break;
// //             case 8: cout << "eight"; break;
// //             case 9: cout << "nine"; break;
// //             default: cout<<"nine";break;
// //         }
// //     };
// //     if (a >= 1 && a <= 9) {
// //         printNumber(a);};
    
// //     cout << endl;
    
// //     if (b >= 1 && b <= 9) {
// //         printNumber(b);
// //     } 
// // /*
// //     } if (a > 9 && a % 2 == 0) {
// //         cout << "even";
// //     } else if (a > 9 && a % 2 != 0) {
// //         cout << "odd";
// //     }
// //     cout << endl;
// //     if (b > 9 && b % 2 == 0) {
// //         cout << "even";
// //     } else if (b > 9 && b % 2 != 0) {
// //         cout << "odd";
// //     }

// // */
// //     return 0;
// // }


// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;
// #include <iostream>


// class Complex {
// private:
//     double real;
//     double imaginary;

// public:
//     Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

//     Complex operator+(const Complex& other) const {
//         return Complex(real + other.real, imaginary + other.imaginary);
//     }

//     friend ostream& operator<<(ostream& out, const Complex& c) {
//         out << c.real <<"+"<<"i"<< c.imaginary ;
//         return out;
//     }
// };

// int main() {
//     int a,b,c,d;
//     cin>>a>>b;
//     Complex c1(a,b);
//     cin>>c>>d;
//     Complex c2(c,d);
//     Complex sum = c1+ c2;

//     cout<< sum << endl;

//     return 0;
// }

















#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ostream>
#include <sstream>
using namespace std;

class Complex{
public:
    int real,imaginary;
    void setReal(int r){
        real = r;
    }
    void setImaginary(int i){
        imaginary = i;
    }
Complex operator+(const Complex &c){
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}
friend ostream& operator<<(ostream& os, const Complex &c){
    os << c.real << "+i" << c.imaginary;
    return os;
}
};
int main() {
    Complex comp1,comp2;
    int a,b,c,d;
    char ch;
    string input1,input2;
    stringstream ss;
    
    cin >>input1>>input2;
    
    ss << input1;
    ss >> a >> ch >> ch >> b;
    
    ss.clear();
    
    ss << input2;
    ss >> c >> ch >> ch >> d;
    
    comp1.setReal(a);
    comp1.setImaginary(b);
    
    comp2.setReal(c);
    comp2.setImaginary(d);
    
    Complex r = comp1 + comp2;
    
    cout<<r<<endl;
        
return 0;
}