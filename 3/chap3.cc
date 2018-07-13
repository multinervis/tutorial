#include <string> 
#include <iostream>
using std::string;
using std::cin; using std::cout;
using std::endl;

int main() {
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
	<< " separated by spaces. Hit ENTER when finished: "
	<< endl;

	string result = "";
	decltype(result.size()) n;

	while (cin >> n) {
		if (n < hexdigits.size())
			result += hexdigits[n];
		
	}
	cout << result << endl;

	
}
