#include<bits/stdc++.h>
using namespace std;
const int mod = 7;

class LimitsOfCPP {
public:
	void rangesOfInts() {
		cout << "Value of INT_MAX : " << INT_MAX << endl;
		cout << "Value of INT_MIN : " << INT_MIN << endl;
		// cout << "Value of INT_MAX + 1 : " <<INT_MAX+1<<endl;
	}

	void cyclic(int x, int y) {
		cout << "cyclic nature of modulus" << endl;
		for (int i = 0; i < y; i++) {
			cout << "i is " << i << " => " << i << "%" << x << " = " << i % x << "\n";
		}
		cout << endl;
	}
	void cyclicNegative(int x , int y) {
		cout << "cyclic in terms of negative" << endl;
		for (int i = -0; i != -y; --i)
		{
			cout << "i is " << i << " => " << i << "%" << x << " = " << i % x << "\n";
		}
		cout << endl;
	}
	int binaryPower1(int a, int b) {
		if (0 == b) {
			//power 0
			return 1;
		}
		else {
			if (b % 2) {
				//if b is odd
				return a * binaryPower1(a, b - 1) % mod;
			}
			else {
				int ans = binaryPower1(a, b / 2) ;
				return (ans % mod * ans % mod) % mod ;
			}
		}
	}
	int binaryPower2(int a, int b) {
		int result = 1;
		if (b == 0) return 1;
		for (int i = 1; i <= b; i++) {
			result = (result % mod * a % mod) % mod;
		}
		return result;
	}




};



int main() {
	LimitsOfCPP lims;
	lims.rangesOfInts();
	// lims.cyclic(3,5);
	// lims.cyclicNegative(3,5);
	cout << lims.binaryPower1(2, 2) << endl;
	cout << lims.binaryPower2(2, 2) << endl;


	cout <<  (lims.binaryPower1(2, 20)  + lims.binaryPower1(11 , 7)  + lims.binaryPower1(4, 40)  + lims.binaryPower1(3, 30) + lims.binaryPower1(5, 50) ) % 7 << endl ;

	// int a = 2147483647;
	// int b = 2147483647;
	// // cout<<a+b<<endl;
	// int res1 = (a + b) % a;
	// int res2 = (a - b) % a;
	// cout << res1 << " " << res2;


	int a = 2147483646;
	int b = 2147483645;

	int res1 = (a % 11 * b % 11) % 11;
	int res2 = (a * b) % 11;
	int res3 = (a * 1LL * b) % 11;
	int res4 = (a * b * 1LL) % 11;

	cout << res1 << " " << res2 << " " << res3 << " " << res4;

	// long long a = 2147483647;
	// 	long long b = 2147483647;

	// 	int res1 = (a + b) % a;
	// 	int res2 = (a - b) % a;
	// 	cout << res1 << " " << res2;




}