#include <iostream>
#include "Ant.h"

using namespace std;

Ant::Ant(){
	cout << "You've created an ant object without passing values. This will be painful." << endl;
}


Ant::Ant(int userNumRows, int userNumCols, int userAntRow, int userAntCol, char userDir, int userAntSteps, int userPrintBoard){
	numRows = userNumRows;
	numCols = userNumCols;
	antRow 	= userAntRow;
	antCol 	= userAntCol;
	antDir		= userDir;
	antSteps 	= userAntSteps;
	printboard  = userPrintBoard;
	whiteSpace = true;
	setupBoard(numRows, numCols, antRow, antCol);
	displayBoard();
	displayValues();

	for(int e = 0; e < 100; e++){
		move();
		//displayBoard();
		//displayValues();
	}
	//move();
	displayBoard();



}

void Ant::move(){
	int wSpace = 3;
	int bSpace = 5;
	int antStar = 7;
	int adjustCol = antCol+1;
	int adjustRow = numRows-antRow;

	if(whiteSpace == true){
		switch(antDir){
			case 'E':
				antDir = 'S';
				if(antboard[adjustRow+1][adjustCol] == 5){
					whiteSpace = false;
				}
				antboard[adjustRow+1][adjustCol] = 7;
				antboard[adjustRow][adjustCol] = 5;
				antRow = antRow - 1;
				break;

			case 'W':
				antDir = 'N';
				if(antboard[adjustRow-1][adjustCol] == 5){
					whiteSpace = false;
				}
				antboard[adjustRow-1][adjustCol] = 7;
				antboard[adjustRow][adjustCol] = 5;
				antRow = antRow + 1;
				break;

			case 'N':
				antDir = 'E';
				if(antboard[adjustRow][adjustCol+1] == 5){
					whiteSpace = false;
				}
				antboard[adjustRow][adjustCol+1] = 7;
				antboard[adjustRow][adjustCol] = 5;
				antCol = antCol + 1;
				break;

			case 'S':
				antDir = 'W';
				if(antboard[adjustRow][adjustCol-1] == 5){
					whiteSpace = false;
				}
				antboard[adjustRow][adjustCol-1] = 7;
				antboard[adjustRow][adjustCol] = 5;
				antCol = antCol - 1;
				break;	
		}

	}
	else if(whiteSpace == false){
		switch(antDir){
			case 'E':
				antDir = 'N';
				if(antboard[adjustRow-1][adjustCol] == 3){
					whiteSpace = true;
				}
				antboard[adjustRow-1][adjustCol] = 7;
				antboard[adjustRow][adjustCol] = 3;
				antRow = antRow + 1;
				break;

			case 'W':
				antDir = 'S';
				if(antboard[adjustRow+1][adjustCol] == 3){
					whiteSpace = true;
				}
				antboard[adjustRow+1][adjustCol] = 7;
				antboard[adjustRow][adjustCol] = 3;
				antRow = antRow - 1;
				break;

			case 'N':
				antDir = 'W';
				if(antboard[adjustRow][adjustCol-1] == 3){
					whiteSpace = true;
				}
				antboard[adjustRow][adjustCol-1] = 7;
				antboard[adjustRow][adjustCol] = 3;
				antCol = antCol - 1;
				break;

			case 'S':
				antDir = 'E';
				if(antboard[adjustRow][adjustCol+1] == 3){
					whiteSpace = true;
				}
				antboard[adjustRow][adjustCol+1] = 7;
				antboard[adjustRow][adjustCol] = 3;
				antCol = antCol +1;
				break;
		}
	}
	else
		cout << "There an error in your code." << endl;

}

void Ant::displayValues(){
	cout << "\nantRow : " << antRow << endl;
	cout << "antCol : " << antCol << endl;
	cout << "antDir : " << antDir << endl;
	cout << "whiteSpace : " << boolalpha << whiteSpace << endl;
}

void Ant::setupBoard(int numRows, int numCols, int antRow, int antCol){
	int space = 3;
	int antStar = 7;
	for(int y = 0; y <=numRows+1; y++){
		for(int x = 0; x <= numCols+1; x++){

			if(antboard[y][x] != antStar){
				antboard[y][x] = space;
			}

			if(antRow == y and antCol == x){
				int adjustCol = antCol+1;
				int adjustRow = numRows-antRow;
				antboard[adjustRow][adjustCol] = antStar;
			}
		
		}
	}
}

void Ant::displayBoard(void){
	int rowCounter = numRows;
	cout << "\n\nrows" << endl;
	for(int y = 0; y <= numRows+1; y++){
		for(int x = 0; x <= numCols+1; x++){
			
			//This will print out the row numbering.
			if(x == 0 and 0 <= rowCounter){
				
				if(10<=rowCounter){
					cout << "\n" <<rowCounter <<"    \x1b[0m";
				}
				else
					cout << "\n0" <<rowCounter <<"    \x1b[0m";
				
			}

			//This will print out the column numbering.
			if(rowCounter < 0 and x == 0){
				for(int z = 0; z <= numCols+1; z++){
					if(z != 0){
						if((z-1)<10){
							cout << "0" << z-1 <<" \x1b[0m";
						}
						else
							cout << z-1 <<" \x1b[0m";
					}
					else{
						cout << "\n      \x1b[0m";
					}
					if(z == numCols+1){
						cout << "columns" << endl;
					}
				}
			}

			if(0<x and 0<rowCounter+1){
				if(antboard[y][x] == 3){
					cout << "   \x1b[0m";
				}
				if(antboard[y][x] == 5){
					cout << "#  \x1b[0m";
				}
				if(antboard[y][x] == 7){
					cout << "*  \x1b[0m";
				}


				//cout << antboard[y][x] <<  "  \x1b[0m";

				//cout << "o  \x1b[0m";
			}

		}
		rowCounter--;
	}
}



Ant::~Ant(){
}



/*
//displayboard[y][x] = char(32);
void LangtonsAnt::testValues(void){
	initNumRows = 15;
	initNumCols = 15;
	initAntRow	= 8;
	initAntCol	= 8;
	initDir		= 'E';
	antSteps 	= 5;
	printBoard 	= 1;
}
int numRows;
	int numCols;
	int antRow;
	int antCol;
	char antDir;
	int antSteps;
	int printboard;
	char antboard[25][25];
	char displayboard[25][25];
*/