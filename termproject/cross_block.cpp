#include "cross_block.h"

cross_block::cross_block(int c1, int c2 ,int c3, int c4 ,in c5) {
    min_x = 0;
    max_x = 2;
    min_y = 0;
    max_y = 2;
    block * block1 = new block(c1);
    block * block2 = new block(c2);
    block * block3 = new block(c3);
    block * block4 = new block(c4);
    block * block5 = new block(c5);
    v.push_back(block1);
    v.push_back(block2);
    v.push_back(block3);
    v.push_back(block4);
    v.push_back(block5);
    
    b[0] = NULL;
    b[1] = block1;
    b[2] = NULL;
    b[3] = block2;
    b[4] = block3;
    b[5] = block4;
    b[6] = NULL;
    b[7] = block5;
    b[8] = NULL:
    
    
}
void cross_block::rotate() {
    block *l = {b[7] , b[4] , b[1] ,b[8], b[5], b[2] , b[9],b[6], b[3]};
    b = l;
}