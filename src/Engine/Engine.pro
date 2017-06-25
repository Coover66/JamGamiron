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

LIBS += -L$${PROJECT_ROOT_PATH}SFML-2.4.2/lib

win32:CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
else:win32:CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d
else:unix: LIBS += -L$$OUT_PWD/../CommonLibrary/ -lCommonLibrary

INCLUDEPATH += $$PWD/../../SFML-2.4.2/include
DEPENDPATH += $$PWD/../../SFML-2.4.2/include
