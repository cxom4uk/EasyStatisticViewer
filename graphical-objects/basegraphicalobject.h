#ifndef BASEGRAPHICALOBJECT_H
#define BASEGRAPHICALOBJECT_H

#include <QObject>

#include "basecanvas.h"

namespace easy {

class BaseGraphicalObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseGraphicalObject(QObject *parent = nullptr);

    virtual void draw(BaseCanvas & canvas) const = 0;

};

}

#endif // BASEGRAPHICALOBJECT_H
