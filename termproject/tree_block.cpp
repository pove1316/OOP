#include "tree_block.h"

tree_block::tree_block(int c1, int c2, int c3) {
    min_x = 0;
    max_x = 2;
    min_y = 0;
    max_y = 2;
    block * block1 = new block(c1);
    block * block2 = new block(c2);
    block * block3 = new block(c3);
    v.push_back(block1);
    v.push_back(block2);
    v.push_back(block3);

    b[0] = NULL;
    b[1] = block1;
    b[2] = NULL;
    b[3] = NULL;
    b[4] = block2;
    b[5] = NULL;
    b[6] = NULL;
    b[7] = block3;
    b[8] = NULL:
}
void tree_block::rotate() {
    block *l = {b[7] , b[4] , b[1] ,b[8], b[5], b[2] , b[9],b[6], b[3]};
    b = l;
}