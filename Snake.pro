TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    horisontalline.cpp \
    point.cpp \
    verticalline.cpp \
    figure.cpp \
    snake.cpp \
    foodcreator.cpp \
    walls.cpp

HEADERS += \
    horisontalline.h \
    verticalline.h \
    figure.h \
    snake.h \
    foodcreator.h \
    point.h \
    walls.h

