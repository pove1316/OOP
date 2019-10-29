//
// Created by 김혁진 on 14/10/2019.
//

#include "shared_mut.h"

namespace ptr {
shared_mut::shared_mut() {
    _mgr = new mgr();
}

shared_mut::shared_mut(Object* _obj) {
    _mgr = new mgr(_obj);
}

shared_mut::~shared_mut() {
    release();
}
shared_mut::release() {
    int count = --(_mgr->count);
    if (count == 0) {
    delete _mgr;
    }

}
shared_mut::get() const{
    return _mgr->_obj;
}
shared_mut::count {
    return _mgr->count;
}
shared_mut::increase {
    _mgr->count++;
}
shared_mut::operator+(const shared_mut &shared) {
    shared_mut l = *this;
    l.val += shared.val;
    return l;
}
shared_mut::operator-(const shared_mut &shared) {
    shaerd_mut l = *this;
    l.val -= shared.val;
    return l;
}
shared_mut::operator*(const shared_mut &shared) {
    shared_mut l = *this;
    l.val *= shared.val;
    return l;
}
shared_mut::operator/(const shared_mut &shared) {
    shared_mut l = *this;
    l.val /= shared.val;
    return l;
}
shared_mut::operator=(const shared_mut &shared) {
    release();
    _mgr = shared._mgr;
    increase();
}
shared_mut::operator->() {
return _mgr->ptr;
}
} // end of namespace ptr
