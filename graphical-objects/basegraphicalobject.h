#ifndef BASEGRAPHICALOBJECT_H
#define BASEGRAPHICALOBJECT_H

#include <QObject>

class BaseGraphicalObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseGraphicalObject(QObject *parent = nullptr);

    virtual void draw() = 0;

};

#endif // BASEGRAPHICALOBJECT_H
