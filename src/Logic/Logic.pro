include( ../../common.pri )
include( ../../lib.pri )

QT      += core

TARGET   = $$qtLibraryTarget(Logic)
TEMPLATE = lib

DEFINES += LOGIC_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

unix {
    target.path = /usr/lib
    INSTALLS += target
}
