#ifndef GRAPH_H
#define GRAPH_H

#include <QObject>

#include "basegraphicalobject.h"

#include "basecanvas.h"

namespace easy {

class Graph : public BaseGraphicalObject
{
    Q_OBJECT
public:
    explicit Graph(QObject *parent = nullptr);

    void draw(BaseCanvas & canvas) const override;

};

}

#endif // GRAPH_H
