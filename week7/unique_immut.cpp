//
// Created by 김혁진 on 14/10/2019.
//

#include "unique_immut.h"

namespace ptr {
unique_immut::unique_immut() {
    _mgr = new mgr();
}

unique_immut::unique_immut(Object *obj) {
    _mgr = new mgr(obj);
}

unique_immut::unique_immut(const unique_immut &immut) {
    if (immut._mgr) {
        int val = immut._mgr->ptr->get();
        _mgr = new mgr(val);
    }
}

unique_immut::~unique_immut() {
    release();
}
unique_immut::release() {
 if (_mgr != nullptr) {
     delete _mgr;
 }
}
unique_immut::get() const{
    return _mgr->ptr;
}
unique_immut::operator+(const unique_immut &unique){
    unique_immut l = *this;
    l.val += unique.val;
    l -> release();
    return l;
}
unique_immut::operator-(const unique_immut &unique){
    unique_immut l = *this;
    l.val -= unique.val;
    l->release();
    return l;
}
unique_immut::operator*(const unique_immut &unique) {
    unique_immut l = *this;
    l.val *= unique.val;
    l->release();
    return l;
}
unique_immut::operator/(const unique_immut &unique) {
    unique_immut l = *this;
    l.val /= unique.val;
    l->release();
    return l;
}
unique_immut::operator=(const unique_immut &unique) {
release();
_mgr = unique._mgr;
increase();
}
unique_immut::operator->() {
return _mgr->ptr
}

} // end of namespace ptr
