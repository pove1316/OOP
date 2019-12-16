#include "big_block.h"

big_block::~big_block() {
    for (int i = 0 ; i <v.size() ; i ++) {
        delete v[i];
    }
}

bool big_block::can_left() {
    bool flag = true;
    for (int i = min_y; i < max_y + 1 ; i++) {
        if ((array_2d->block_array[i][min_x - 1]) != NULL) {
            flag = false;
            break;
        }
    }
    return flag;
    
}
bool big_block::can_right() {
    bool flag = true;
    for (int i = min_y; i < max_y + 1 ; i++) {
        if ((array_2d->block_array[i][max_x - 1]) != NULL) {
            flag = false;
            break;
        }
    }
    return flag;
}
bool big_block::can_down() {
    bool flag = true;
    for (int i = min_x; i < max_x + 1 ; i++) {
        if ((array_2d->block_array[min_y][i]) != NULL) {
            flag = false;
            break;
        }
    }
    if (!flag) {
        
    }
    return flag;
}
void big_block::left() {
    if (can_left()) {
        for (block * sblock :v) {
             sblock.left();
        }
    }
    
}
void big_block::right() {
    if (can_right()) {
        for (block * sblock :v) {
        sblock.right();
    }
    }
}
bool big_block::down() {
    if (can_down()) {
        for (block * sblock :v) {
        sblock.down();
    }
    }
}
bool big_block::down_all() {
    while (can_down()) {
        down();
    }
}
bool move(char input) {
    switch(input) {
        case 'a':
            left();
            return true;
        case 'd' :
            right();
            return true;
        case 's' :
            down();
            return true;
        case 'x' :
            down_all();
            return true;
        default :
            return false;
    }
}
