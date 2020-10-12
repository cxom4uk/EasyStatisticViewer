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
    graphical-objects/basegraphicalobject.h

SOURCES += \
        canvases/basecanvas.cpp \
        graphical-objects/basegraphicalobject.cpp \
        main.cpp

RESOURCES += qml.qrc

TRANSLATIONS += \
    EasyStatisticViewer_ru_RU.ts

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
