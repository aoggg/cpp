#include<iostream>
using namespace std;

const string NOTE = "WHQESTX";
const int ID[] = {64, 32, 16, 8, 4, 2, 1};

int main(){
	string song;
	while (cin >> song){
		if (song == "*"){
			break;
		}
		int correct = 0;
		int duration;
		for (int i = 0; i < song.size() - 1; i++){
			if (song[i] == '/'){
				if (i != 0 && duration == 64){
					correct++;
				}
				duration = 0;
				continue;
			}
			for (int j = 0; j < NOTE.size(); j++){
				if (song[i] == NOTE[j]){
					duration += ID[j];
					break;
				}
			}
		}
		if (duration == 64){
			correct++;
		}
		cout << correct << '\n';
	}
	return 0;
}
