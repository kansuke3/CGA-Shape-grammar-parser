
#include "scopeRule.h"
#include <iostream>
void scopeRule::apply() {
    std::cout<< "[" <<this->operationType<<"]" <<
    "["<<std::get<0>(t)<<","<<std::get<1>(t)<<","<<std::get<2>(t) <<"]"<<
    "["<<std::get<0>(s)<<","<<std::get<1>(s)<<","<<std::get<2>(s) <<"]"<<
    "["<<this->rx<<','<<this->ry<<','<<this->rz<<"]"<<"["<<this->target<< "]"<<std::endl;
}


scopeRule::scopeRule(const string &name) : generalRule("scope") {
    this->t =  std::make_tuple("0","0","0");
    this->s =  std::make_tuple("0","0","0");
    this->rx = "0";
    this->ry = "0";
    this->rz = "0";
    this->target = name;
}

const tuple<string, string, string> &scopeRule::getT() const {
    return t;
}

void scopeRule::setT(const tuple<string, string, string> &t) {
    scopeRule::t = t;
}

const tuple<string, string, string> &scopeRule::getS() const {
    return s;
}

void scopeRule::setS(const tuple<string, string, string> &s) {
    scopeRule::s = s;
}

const string &scopeRule::getRx() const {
    return rx;
}

void scopeRule::setRx(const string &rx) {
    scopeRule::rx = rx;
}

const string &scopeRule::getRy() const {
    return ry;
}

void scopeRule::setRy(const string &ry) {
    scopeRule::ry = ry;
}

const string &scopeRule::getRz() const {
    return rz;
}

void scopeRule::setRz(const string &rz) {
    scopeRule::rz = rz;
}

const string &scopeRule::getTarget() const {
    return target;
}

void scopeRule::setTarget(const string &target) {
    scopeRule::target = target;
}
