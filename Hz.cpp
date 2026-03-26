#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
mt19937 rng(time(0));
void write(string a){
	int n=a.size(),f=0;
	for(auto i:a){
		n--;
		if(f==0&&rng()&1){cout<<i;f=1;continue;} 
		cout<<i;
		Sleep(10);
		if(f)Sleep(10);
		f=0;
	}
}
int main(){
	write("=== 听声辨调游戏 ===\n");
	write("每个音会播放1秒钟\n");
	write("请输入你听到的频率(300-1200Hz,100的倍数)\n");
	write("预热阶段会播放10个示例音\n\n");
	Sleep(1000); 
	map<int,string>m;
	m[3]="300";
	m[4]="400";
	m[5]="500";
	m[6]="600";
	m[7]="700";
	m[8]="800";
	m[9]="900"; 
	m[10]="1000"; 
	m[11]="1100"; 
	m[12]="1200"; 
	for(int i=3;i<=12;i++){
		system("cls");
		write(m[i]+"Hz:");
		Beep(i*100,1000);
		system("cls");
	}
	while(1){
		int ans=(rand()%9+3)*100,in;
		Beep(ans,1000);
		while(cin>>in){
			if(in==ans){cout<<"Correct\n";system("cls");break;}
			cout<<"Wrong\n";
			Beep(ans,1000);
		}
	}
} 
