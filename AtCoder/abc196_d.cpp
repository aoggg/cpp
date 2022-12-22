#include<iostream>
using namespace std;

int ans = 0;
bool visited[16][16];

void counting (int x, int y, int h, int w, int area, int anum, int bnum){
	if (area == h * w){//剛好占滿
		ans++;
		return;
	}
	if (x == h && y == w){//還沒滿但是已經沒有位置了 
		return;
	}
	if (y == w){//跑過一遍發現沒辦法放  所以跑到下一行從頭看 
		counting (x + 1, 0, h, w, area, anum, bnum);
		return;
	}
	if (visited[x][y]){ //已經有東西放在那裏了  所以跑到下一格看 
		counting (x, y + 1, h, w, area, anum, bnum);
		return;
	}
	if (y + 1 < w && !visited[x][y + 1] && anum != 0){ //殼以把1 * 2的橫著放owob
		visited[x][y + 1] = true;
		visited[x][y] = true;
		counting (x, y + 2, h, w, area + 2, anum - 1, bnum);
		visited[x][y + 1] = false;
		visited[x][y] = false; //歸零因為別人還妹油用過 
	}
	if (x + 1 < h && !visited[x + 1][y] && anum != 0){ //殼以把1 * 2的直著放
		visited[x][y] = true;
		visited[x + 1][y] = true;
		counting (x, y + 1, h, w, area + 2, anum - 1, bnum);
		visited[x][y] = false;
		visited[x + 1][y] = false;
	}
	if (bnum != 0){ //還有小方塊owo 
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
