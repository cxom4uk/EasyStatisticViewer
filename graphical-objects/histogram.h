#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <QObject>

#include "basegraphicalobject.h"

namespace easy {

class Histogram : public BaseGraphicalObject
{
    Q_OBJECT
public:
    explicit Histogram(int division, QObject *parent = nullptr);

};

}

#endif // HISTOGRAM_H
