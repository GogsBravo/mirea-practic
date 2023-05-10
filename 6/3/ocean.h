#ifndef MIREA_PRACTIC_YANG_BRAVO_OCEAN_H
#define MIREA_PRACTIC_YANG_BRAVO_OCEAN_H

#include <string>

using namespace std;

class Ocean {
protected:
    string name;
    string location;
    float size;
    float depth;
public:
    Ocean();
    Ocean(string name, string location, float size, float depth);
    virtual void showInfo();
};

#endif //MIREA_PRACTIC_YANG_BRAVO_OCEAN_H
