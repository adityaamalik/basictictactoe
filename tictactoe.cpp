#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

char gameboard[3][3] = { '1','2','3','4','5','6','7','8','9' };
char player='X';

char Win()
{

	if (gameboard[0][0] == 'X' && gameboard[0][1] == 'X' && gameboard[0][2] == 'X')
        return 'X';
    if (gameboard[1][0] == 'X' && gameboard[1][1] == 'X' && gameboard[1][2] == 'X')
        return 'X';
    if (gameboard[2][0] == 'X' && gameboard[2][1] == 'X' && gameboard[2][2] == 'X')
        return 'X';
 
    if (gameboard[0][0] == 'X' && gameboard[1][0] == 'X' && gameboard[2][0] == 'X')
        return 'X';
    if (gameboard[0][1] == 'X' && gameboard[1][1] == 'X' && gameboard[2][1] == 'X')
        return 'X';
    if (gameboard[0][2] == 'X' && gameboard[1][2] == 'X' && gameboard[2][2] == 'X')
        return 'X';
 
    if (gameboard[0][0] == 'X' && gameboard[1][1] == 'X' && gameboard[2][2] == 'X')
        return 'X';
    if (gameboard[2][0] == 'X' && gameboard[1][1] == 'X' && gameboard[0][2] == 'X')
        return 'X';
        
	//second player
	if (gameboard[0][0] == 'O' && gameboard[0][1] == 'O' && gameboard[0][2] == 'O')
		return 'O';
	if (gameboard[1][0] == 'O' && gameboard[1][1] == 'O' && gameboard[1][2] == 'O')
		return 'O';
	if (gameboard[2][0] == 'O' && gameboard[2][1] == 'O' && gameboard[2][2] == 'O')
		return 'O';

	if (gameboard[0][0] == 'O' && gameboard[1][0] == 'O' && gameboard[2][0] == 'O')
		return 'O';
	if (gameboard[0][1] == 'O' && gameboard[1][1] == 'O' && gameboard[2][1] == 'O')
		return 'O';
	if (gameboard[0][2] == 'O' && gameboard[1][2] == 'O' && gameboard[2][2] == 'O')
		return 'O';

	if (gameboard[0][0] == 'O' && gameboard[1][1] == 'O' && gameboard[2][2] == 'O')
		return 'O';
	if (gameboard[2][0] == 'O' && gameboard[1][1] == 'O' && gameboard[0][2] == 'O')
		return 'O';

	return '/';
}
void changeplayer(){
	if(player=='X')
	player='O';
	else
	player='X';
}

void firstdisplay(){
	
	cout<<" \t \t \t WELCOME TO TIC - TAC - TOE GAME \n \n \n ";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" \t \t \t "<<gameboard[i][j];
		}
		cout<<endl;
	}
}

void game(){
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<" \t \t \t "<<gameboard[i][j];
		}
		cout<<endl;
	}
	
}
	
void move(){
	
	int n;
	cout<<"ENTER THE POSITION YOU WANT TO PLACE YOUR MOVE : ";
	cin>>n;
	
	if(n==1)
	gameboard[0][0]=player;
	else if(n==2)
	gameboard[0][1]=player;
	else if(n==3)
	gameboard[0][2]=player;
	else if(n==4)
	gameboard[1][0]=player;
	else if(n==5)
	gameboard[1][1]=player;
	else if(n==6)
	gameboard[1][2]=player;
	else if(n==7)
	gameboard[2][0]=player;
	else if(n==8)
	gameboard[2][1]=player;
	else if(n==9)
	gameboard[2][2]=player;
	
}
int main(){
	
	firstdisplay();
	
	while (1)
    {
        move();
        game();
        if (Win() == 'X')
        {
            cout << " PLAYER 1 WINS !!! " << endl;
            break;
        }
        else if (Win() == 'O')
        {
            cout << " PLAYER 2 WINS !!! " << endl;
            break;
        }
        changeplayer();
    }
    system("pause");
	
	return 0;
}

