#include "fold_block.h"

fold_block::fold_block(int c1, int c2 ,int c3) {
    nin_x = 0;
    max_x = 1;
    min_y = 0;
    max_y = 1;   
    block * block1 = new block(c1);
    block * block2 = new block(c2);
    block * block3 = new block(c3);
    v.push_back(block1);
    v.push_back(block2);
    v.push_back(block3);

    b[0] = null;
    b[1] = block1;
    b[2] = block2;
    b[3] = block3;

    
    
}
void fold_block::rotate() {
    block *l = {b[3] , b[4] , b[1] , b[2]};
    b = l;
}