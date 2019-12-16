#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"game start!" << endl;
    array_2d game_board = new array_2d();
    game_board.print();
    while (true) {
    big_block * controlBlock;
    srand((unsigned int)time(0));
    int blockShape = rand() % 3;
    srand((unsigned int)time(0));
    int blockColor1 = (rand() % 4) + 1;
    srand((unsigned int)time(0));
    int blockColor2 = (rand() % 4) + 1;
    srand((unsigned int)time(0));
    int blockColor3 = (rand() % 4) + 1;
    srand((unsigned int)time(0));
    int blockColor4 = (rand() % 4) + 1;
    srand((unsigned int)time(0));
    int blockColor5 = (rand() % 4) + 1;
        switch (blockShape) {
        case 0:
            controlBlock = new fold_block(blockColor1 ,blockColor2, blockColor3);
            while (true) {
                ch = getchar();
                controlBlock->move(ch);
                if (controlBlock->move(ch)) {
                    
                }
                else break;
            }
            break;
        case 1;
            controlBlock = new tree_block(blockColor1 ,blockColor2, blockColor3);
            while (true) {
                ch = getchar();
                controlBlock->move(ch);
                if (controlBlock->move(ch)) {
                    
                }
                else break;
            }
            break;
        case 2;
            controlBlock = new cross_block(blockColor1 ,blockColor2, blockColor3, blockColor4 ,blockColor5);
            while (true) {
                ch = getchar();
                if (controlBlock->move(ch)) {
                    
                }
                else break;
            }

            
            break;

    }
     
    
    }

}