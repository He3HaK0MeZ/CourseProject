QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    sources/adminwindow.cpp \
    sources/clientloginwindow.cpp \
    sources/clientorderwindow.cpp \
    sources/clientregistwindow.cpp \
    sources/clientwindow.cpp \
    sources/courierwindow.cpp \
    sources/main.cpp \
    sources/mainwindow.cpp

HEADERS += \
    include/adminwindow.h \
    include/clientloginwindow.h \
    include/clientorderwindow.h \
    include/clientregistwindow.h \
    include/clientwindow.h \
    include/courierwindow.h \
    include/mainwindow.h

FORMS += \
    forms/adminwindow.ui \
    forms/clientloginwindow.ui \
    forms/clientorderwindow.ui \
    forms/clientregistwindow.ui \
    forms/clientwindow.ui \
    forms/courierwindow.ui \
    forms/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
INCLUDEPATH = include
