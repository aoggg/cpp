// #include <bits/stdc++.h>
#include <iostream>
#include <deque>
using namespace std;

typedef struct A
{
  int h,w;
  int from_h,from_w;
  int step;
  char cell,dir;
}Point;

Point mp[1005][1005];
// vis[0] = have moved vertical
// vis[1] = have moved horizontal
bool vis[1005][1005][2] = {false};
deque <Point> dq;
int h,w,sh,sw;
int dh[4] = {1,-1,0,0};
int dw[4] = {0,0,1,-1};

int bfs_search(int i,int j){

  dq.push_back(mp[i][j]);
  vis[i][j][0] = true;
  vis[i][j][1] = true;

  while (!dq.empty())
  {
    
    Point now = dq.front();
    // cout<<now.h<<" "<<now.w<<"  from:"<< now.from_h<<" "<<now.from_w << "  step="<< now.step <<endl;
    //Test if is to the Goal
    if(now.cell == 'G'){
      cout<<now.step<<endl;
      return 0;
    }

    // Push the next step to deque
    int d_start=0,d_end=3;
    if(now.cell == 'S' && now.dir=='\0'){ // at start cell, move both vertaical and horizontal
      d_start=0;
      d_end=3;
    }
    else if(now.dir == 'v'){ // From vertical ,then move horizontal
      d_start=2;
      d_end=3;
    }
    else if(now.dir == 'h'){ // From horizontal ,then move vertical
      d_start=0;
      d_end=1;
    }

    for(int d=d_start;d<=d_end;d++){
      int mh = now.h + dh[d];
      int mw = now.w + dw[d];
      // check is Not outside
      if(mh<=h && mh >=1 && mw<=w && mw>=1 && mp[mh][mw].cell!='#' && (!vis[mh][mw][0] || !vis[mh][mw][1])){
        
        
        if((d==0 || d==1)  && !vis[mh][mw][0]){
          mp[mh][mw].dir = 'v';// move vertically
          vis[mh][mw][0] = true;
        }
        else if((d==2 || d==3)  && !vis[mh][mw][1]){
          mp[mh][mw].dir = 'h';// move horizontally
          vis[mh][mw][1] = true;
        }

        mp[mh][mw].step = now.step+1;
        mp[mh][mw].from_h = now.h;
        mp[mh][mw].from_w = now.w;

        dq.push_back(mp[mh][mw]);
        
      }
    }
    // Pop out the fornt
    dq.pop_front();
    
  }
  return -1;
  

}
int main()
{
  
  cin>>h>>w;
  for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
      cin>>mp[i][j].cell;
      mp[i][j].h = i;
      mp[i][j].w = j;
      mp[i][j].step = 0;
      mp[i][j].dir = '\0';
      
      if(mp[i][j].cell == 'S'){
        sh = i;
        sw = j;
      }
    }
  }
  // cout <<"startcell"<<"("<< sh <<","<< sw <<")"<<endl;

  int res = bfs_search(sh,sw);
  if(res == -1){
    cout<<"-1"<<endl;
  }
  
  return 0;
}