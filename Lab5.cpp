#include <iostream> 
using namespace std;
int main()
{
	short array[] = {30, 50, 20, 10, 40, 60};
	int n1, n2;
	int amout = sizeof(array) / sizeof(*array);
	bool exist1, exist2 = false;

	cout << "input first number: ";
	cin >> n1;
	cout << "input second number: ";
	cin >> n2;
	cout << "-----------------" << "\n";


	for (int i = 1; i < amout-1; i++) {
		if (array[i] == n1){
			cout << n1 << " number in array" << "\nadress: " << &n1 << "\n\n";
			exist1=true;
		}
		if (array[i] == n2){ 
			cout << n2 << " number in array" << "\nadress: "  << &n2 << "\n\n";
			exist2=true;
		}
		else{
			int exist1, exist2=0;
		}
	if (exist1==true && exist2==true){
		cout << "2 numbers in array" << "\n\n";
	}
	if (exist1!=exist2){
		cout << "1 number in array" << "\n\n";
	}
	if (exist1==0 && exist2==0){
		cout << "0 number in array" << "\n\n";
	}
	}
	return 0;
}