#include<iostream>
#include<stack>
using namespace std;

int main(){
	ios_base::sync_with_stdio (false);
	cin.tie (0);
	int n;
	cin >> n;
	for (int time = 0; time < n; time++){
		stack <int> p;
		string people;
		cin >> people;
		int success = 0;
		for (int i = 0; i < people.size (); i++){
			if (people[i] == 'p'){
				p.push (1);
			}
			else if (people[i] == 'q'){
				if (p.size () != 0){
					p.pop ();
					success++;
				}
			}
		}
		cout << success << '\n';
	}
	return 0;
}