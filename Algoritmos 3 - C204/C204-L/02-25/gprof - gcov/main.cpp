#include <iostream>
using namespace std;

void function(){
	for(int i=0; i<9999; i++);
}

int main(){
	cout << "A";
	function();
	return 0;
}