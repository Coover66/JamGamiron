include ( ../../common.pri )
include ( ../../app.pri )

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestEngine
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp

HEADERS  +=

LIBS += -L$${PROJECT_ROOT_PATH}SFML-2.4.2/lib

win32:CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
else:win32:CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d
else:unix: LIBS += -L$$OUT_PWD/../CommonLibrary/ -lCommonLibrary

INCLUDEPATH += $$PWD/../../SFML-2.4.2/include
DEPENDPATH += $$PWD/../../SFML-2.4.2/include

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../Engine/release/ -lEngine
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../Engine/debug/ -lEngined
else:unix: LIBS += -L$$OUT_PWD/../Engine/ -lEngine

INCLUDEPATH += $$PWD/../Engine
DEPENDPATH += $$PWD/../Engine
