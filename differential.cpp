#include <iostream>
using namespace std;

int main() {
    int expo, coef, diffrential, exporeduc;
    cout << "Enter exponent of x: ";
    cin >> expo;
    cout << "Enter the coefficient of x: ";
    cin >>coef;
    diffrential = expo * coef;
    exporeduc = expo - 1;
   
    if(expo == 0){
        cout << "Therefore d/dx(" << coef << ") = 0";
    }
    else if(expo == 1){
        cout << "Therefore d/dx(" << coef << "x" ") = "  << coef;
    }
    else if(expo <= -1){
        exporeduc = -exporeduc;
        cout << "Therefore d/dx(" << coef << "x^" << expo << ") = " << diffrential << "/x^" << exporeduc;
    }
    else{
         cout << "Therefore d/dx(" << coef << "x^" << expo << ") = " << diffrential << "x^" << exporeduc;
    }

    return 0;
}
