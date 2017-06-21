include( ../../common.pri )
include( ../../lib.pri )

QT      += core

TARGET   = $$qtLibraryTarget(Engine)
TEMPLATE = lib

DEFINES += ENGINE_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

unix {
    target.path = /usr/lib
    INSTALLS += target
}

HEADERS += \
    Game.h

SOURCES += \
    Game.cpp
