#include<iostream>
using namespace std;

int ans = 0;
bool visited[16][16];

void counting (int x, int y, int h, int w, int area, int anum, int bnum){
	if (area == h * w){//��n�e�� 
		ans++;
		return;
	}
	if (x == h && y == w){//�٨S�����O�w�g�S����m�F 
		return;
	}
	if (y == w){//�]�L�@�M�o�{�S��k��  �ҥH�]��U�@��q�Y�� 
		counting (x + 1, 0, h, w, area, anum, bnum);
		return;
	}
	if (visited[x][y]){ //�w�g���F���b���ؤF  �ҥH�]��U�@��� 
		counting (x, y + 1, h, w, area, anum, bnum);
		return;
	}
	if (y + 1 < w && !visited[x][y + 1] && anum != 0){ //�ߥH��1 * 2����۩�owob
		visited[x][y + 1] = true;
		visited[x][y] = true;
		counting (x, y + 2, h, w, area + 2, anum - 1, bnum);
		visited[x][y + 1] = false;
		visited[x][y] = false; //�n�k�s�]���O�H�٩f�o�ιL 
	}
	if (x + 1 < h && !visited[x + 1][y] && anum != 0){ //�ߥH��1 * 2�����۩� 
		visited[x][y] = true;
		visited[x + 1][y] = true;
		counting (x, y + 1, h, w, area + 2, anum - 1, bnum);
		visited[x][y] = false;
		visited[x + 1][y] = false;
	}
	if (bnum != 0){ //�٦��p���owo 
		visited[x][y] = true;
		counting (x, y + 1, h, w, area + 1, anum, bnum - 1);
		visited[x][y] = false;
	}
}

int main(){
	int H, W, A, B;
	cin >> H >> W >> A >> B;
	counting (0, 0, H, W, 0, A, B);
	cout << ans << '\n'; 
	return 0;
}
