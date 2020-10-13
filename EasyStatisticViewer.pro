QT += quick widgets

CONFIG += c++11

INCLUDEPATH += \
    graphical-objects/ \
    canvases/

DEPENDPATH += \
    graphical-objects/ \
    canvases/

HEADERS += \
    canvases/basecanvas.h \
    graphical-objects/basegraphicalobject.h \
    graphical-objects/function.h \
    graphical-objects/graph.h \
    graphical-objects/histogram.h

SOURCES += \
    canvases/basecanvas.cpp \
    graphical-objects/basegraphicalobject.cpp \
    graphical-objects/function.cpp \
    graphical-objects/graph.cpp \
    graphical-objects/histogram.cpp \
    main.cpp

RESOURCES += \
    qml.qrc

TRANSLATIONS += \
    EasyStatisticViewer_ru_RU.ts
