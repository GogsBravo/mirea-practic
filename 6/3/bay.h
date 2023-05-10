#ifndef MIREA_PRACTIC_YANG_BRAVO_BAY_H
#define MIREA_PRACTIC_YANG_BRAVO_BAY_H

#include "sea.h"
#include <string>

class Bay : public Sea {
protected:
    string nearby;
public:
    Bay();
    Bay(string name, string location, float size, float depth, string nearby, string type);
    virtual void showInfo();
};


#endif //MIREA_PRACTIC_YANG_BRAVO_BAY_H
