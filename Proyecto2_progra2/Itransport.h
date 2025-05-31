#ifndef ITRANSPORT_H
#define ITRANSPORT_H
#include <iostream>
#include <sstream>
using namespace std;
#pragma once
//class interface (superclass)
class Itransport
{
public:
//virtual methods

virtual string toString()=0;
virtual ~Itransport() = default;
};

#endif