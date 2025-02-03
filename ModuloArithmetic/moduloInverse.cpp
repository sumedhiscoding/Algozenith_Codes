
#include <iostream>
using namespace std;

// Function to calculate modular exponentiation using Fermat's Little Theorem
int power_mod(int base, int exponent, int modulus) {
    int result = 1;
    base %= modulus;

    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        exponent /= 2;
        base = (base * base) % modulus;
    }
    result %=modulus;
    return result;
}

// Function to calculate modular inverse using Fermat's Little Theorem
int mod_inverse(int a, int m) {
    return power_mod(a, m - 2, m);
}

// Function to calculate (a / b) mod m using Fermat's Little Theorem
int divide_modulo(int a, int b, int m) {
    // Calculate a * (modular inverse of b) mod m
    int inverse_b = mod_inverse(b, m);
    cout<<"modulo inverse of B is "<<mod_inverse(b,m)<<endl;
    int result = (a * inverse_b) % m;
    return result;
}

int main() {
    int a = 2; // Numerator
    int b = 3;  // Denominator
    int m = 17; // Modulus

    // Calculate (a / b) mod m
    int result = divide_modulo(a, b, m);

    std::cout << a << " / " << b << " mod " << m << " = " << result << std::endl;

    return 0;
}
