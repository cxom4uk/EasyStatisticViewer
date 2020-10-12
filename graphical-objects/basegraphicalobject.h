#ifndef BASEGRAPHICALOBJECT_H
#define BASEGRAPHICALOBJECT_H

#include <QObject>

#include "basecanvas.h"

class BaseGraphicalObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseGraphicalObject(QObject *parent = nullptr);

    virtual void draw(BaseCanvas & canvas) = 0;

};

#endif // BASEGRAPHICALOBJECT_H
