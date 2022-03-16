#include<iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		string people;
		cin >> people;
		int success = 0, p = 0;
		for (int i = 0; i < people.size (); i++){
			if (people[i] == 'p'){
				p++;
			}
			else if (people[i] == 'q'){
				if (p > 0){
					success++;
					p--;
				}
			}
		}
		cout << success << '\n';
	}
	return 0;
}