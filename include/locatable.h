#ifndef LOCATABLE_H_DEFINED
#define LOCATABLE_H_DEFINED

#include "position.h"

class Locatable {
public:
    Position& getPosition() const;
private:
    Position position;
};

#endif // LOCATABLE_H_DEFINED