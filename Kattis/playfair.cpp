#include<iostream>
using namespace std;

string key, text, ans, table[5], newtext;
bool appeared[130];

int main(){
	getline ( cin, key );
	getline ( cin, text );
	int num = 0;
	for ( int i = 0; i < key.size(); i++ ){
		if ( key[i] >= 'a' && key[i] <= 'z' && !appeared[key[i] - 'a' + 'A'] ){
			table[num] += key[i] - 'a' + 'A';
			if ( table[num].size() == 5 ){
				num++;
			}
			appeared[key[i] - 'a' + 'A']= true;
		}
	}
	for ( int i = 0; i < 26; i++ ){
		char c = i + 'A';
		if ( !appeared[c] && c != 'Q' ){
			table[num] += c;
			if ( table[num].size() == 5 ){
				num++;
			}
			appeared[c] = true;
		}
	}
	for ( int i = 0; i < text.size(); i++ ){
		if ( text[i] >= 'a' && text[i] <= 'z' ){
			newtext += text[i]  - 'a' + 'A';
		}
	}
	bool last = true;
	for ( int i = 0; i + 1 < newtext.size(); i++ ){
		ans += newtext[i];
		if ( newtext[i] == newtext[i + 1] ){
			ans += 'X';
		}
		else {
			ans += newtext[i + 1];
			if ( i + 1 == newtext.size() - 1 ){
				last = false;
			}
			i++;
		}
	}
	if ( last ){
		ans += newtext[newtext.size() - 1];
	 	ans += 'X';
	}
	for ( int i = 0; i + 1 < ans.size(); i += 2 ){
		int x, y, nx, ny;
		for ( int j = 0; j < 5; j++ ){
			for ( int k = 0; k < 5; k++ ){
				if ( table[j][k] == ans[i] ){
					x = j;
					y = k;
				}
				if ( table[j][k] == ans[i + 1] ){
					nx = j;
					ny = k;
				}
			}
		}
		if ( x == nx ){
			y = ( y + 1 ) % 5;
			ny = ( ny + 1 ) % 5;
		}
		else if ( y == ny ){
			x = ( x + 1 ) % 5;
			nx = ( nx + 1 ) % 5;
		}
		else {
			swap ( y, ny );
		}
		ans[i] = table[x][y];
		ans[i + 1] = table[nx][ny];
	}
	cout << ans << '\n';
	return 0;
}
