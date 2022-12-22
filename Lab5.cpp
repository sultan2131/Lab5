#include <iostream> 
using namespace std;
int main()
{
	int array[] = {30, 50, 20, 10, 40, 60};
	int *n1 = new int, *n2 = new int;
	int amout = sizeof(array);
	bool exist1 = false, exist2 = false;

	cout << "input first number: ";
	cin >> n1;
	cout << "input second number: ";
	cin >> n2;
	cout << "-----------------" << "\n";


	for (int i = 0; i < amout; i++) {
		if (array[i] == n1){
			cout << n1 << " number in array" << "\nadress: " << &n1 << "\n\n";
			exist1=true;
		}
		if (array[i] == n2){ 
			cout << n2 << " number in array" << "\nadress: "  << &n2 << "\n\n";
			exist2=true;
		}
		else{
			 exist1=true;
		}
	if (exist1==true && exist2==true){
		cout << "2 numbers in array" << "\n\n";
	}
	if (exist1!=exist2){
		cout << "1 number in array" << "\n\n";
	}
	if (exist1==true && exist2==false){
		cout << "0 number in array" << "\n\n";
	}
	}
	delet n1, n2;
	return 0;
}
