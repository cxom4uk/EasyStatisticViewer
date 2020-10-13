#ifndef FUNCTION_H
#define FUNCTION_H

#include <QObject>

#include "basegraphicalobject.h"

namespace easy {

class Function : public BaseGraphicalObject
{
    Q_OBJECT
public:
    explicit Function(int division, QObject *parent = nullptr);

};

}

#endif // FUNCTION_H
