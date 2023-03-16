#include <iostream>
#include <cstdlib>
using namespace std;

char pion[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int tebak;

void render(){
	cout<<"===Selamat Datang di Game Tic Tac Toe==="<<endl<<endl;
	
	cout<<"     |     |     "<<endl;
	cout<<"  "<<pion[0]<<"  |  "<<pion[1]<<"  |  "<<pion[2]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<pion[3]<<"  |  "<<pion[4]<<"  |  "<<pion[5]<<"  "<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout<<"     |     |     "<<endl;
	cout<<"  "<<pion[6]<<"  |  "<<pion[7]<<"  |  "<<pion[8]<<"  "<<endl;
	cout<<"     |     |     "<<endl;	
}

void exe_player1(){
	for(int i = 1; i < 10; i++){
		if(i == tebak){
			pion[i-1] = 'X';
		}
	}
}

void exe_player2(){
	for(int i = 1; i < 10; i++){
		if(i == tebak){
			pion[i-1] = 'O';
		}
	}
}

int main(){
	render();
	for(int i = 0; i < 9; i++){
		cout<<"Player 1 : ";
		cin>>tebak;
		exe_player1();
		system("cls");
		render();
	
		cout<<"Player 2 : ";
		cin>>tebak;
		exe_player2();
		
		i++;
		system("cls");
		render();
	}
}
