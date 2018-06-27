#ifndef ANT_H_
#define ANT_H_

class Ant{

private:
	int numRows;
	int numCols;
	int antRow;
	int antCol;
	char antDir;
	int antSteps;
	int printboard;
	int antboard[25][25];
	char displayboard[25][25];
	bool whiteSpace;


public:

	Ant();
	Ant(int userNumRows, int userNumCols, int userAntRow, int userAntCol, char userDir, int userAntSteps, int userPrintBoard);
	void setupBoard(int numRows, int numCols, int antRow, int antCol);
	void displayBoard(void);
	void move(void);
	void displayValues(void);
	~Ant();

};




#endif
/*
-what is the color of the square i'm currently on?
*turn 90 degrees respectively.
*move towards that direction.
change the square I left to the opposite of what it was. 




void LangtonsAnt::testValues(void){
	initNumRows = 15;
	initNumCols = 15;
	initAntRow	= 9;
	initAntCol	= 7;
	initDir		= 'E';
	antSteps 	= 1;
	printBoard 	= 1;
}

*/