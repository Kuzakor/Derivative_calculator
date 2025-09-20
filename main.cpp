/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
using namespace std;
#include <iostream>
#include <vector>

bool is_number(char str) {
	return (str - '0' < 10);
}

vector<int> factors(string input) {
	vector<int> result;
	string current_number = "";
	for (int i = 0; i <= input.length(); i++) {
        if (is_number(input[i])) {
            current_number = current_number + input[i];
		} else {
		    if (current_number != "") {
		        result.push_back(stoi(current_number));
		    }
		    current_number = "";
		}
	}
	result.push_back(stoi(current_number));
	return result;
}


int main() {
    vector<int> a = factors("x");
	for (int i = 0; i < a.size(); i++) {
	    cout<<a[i]<<endl;
	}
	return 0;
}