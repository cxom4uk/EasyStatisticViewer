#ifndef BASECANVAS_H
#define BASECANVAS_H

#include <QWidget>

namespace easy {

class BaseCanvas : public QWidget
{
    Q_OBJECT
public:
    explicit BaseCanvas(QWidget *parent = nullptr);

};

}

#endif // BASECANVAS_H
