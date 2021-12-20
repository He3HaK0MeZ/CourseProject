QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    sources/adminwindow.cpp \
    sources/client_orderwindow.cpp \
    sources/clientdatabase.cpp \
    sources/clientdbwindow.cpp \
    sources/clientwindow.cpp \
    sources/courierwindow.cpp \
    sources/main.cpp \
    sources/mainwindow.cpp

HEADERS += \
    include/adminwindow.h \
    include/client_orderwindow.h \
    include/clientdatabase.h \
    include/clientdbwindow.h \
    include/clientwindow.h \
    include/courierwindow.h \
    include/mainwindow.h

FORMS += \
    forms/adminwindow.ui \
    forms/client_orderwindow.ui \
    forms/clientdbwindow.ui \
    forms/clientwindow.ui \
    forms/courierwindow.ui \
    forms/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
INCLUDEPATH = include
