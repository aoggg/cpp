#include<iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	bool ae = false, be = false;
	
	if (a % 2 != 0){
		cout << "Odd\n";
	}
	else {
		cout << "Even\n";
		ae = true;
	}
	if (b % 2 != 0){
		cout << "Odd\n";
	}
	else {
		cout << "Even\n";
		be = true;
	}
	if (ae == be){
		if (a < b){
			cout << "Koying\n";
		}
		else {
			cout << "Gunjyo\n";
		}
	}
	else if (ae){
		cout << "Koying\n";
	}
	else {
		cout << "Gunjyo\n"; 
	}
	return 0;
}
