#include <iostream>
//#include <iomanip>
using namespace std;

int main() {
	for (int i = 1; i < 10; i++) { // changed from 9 to 10
		for (int j = 1; j < 10; j++) {
			cout << i << " * " << j << " = " << i * j << endl; //changed the output style from simply displaying the results to displaying the entire process of calculations
			//this change ended up making the <iomanip> library obsolete, so I annotated the inclusion of <iomanip>
		}
		cout << endl;
	}
}