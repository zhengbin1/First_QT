#-------------------------------------------------
#
# Project created by QtCreator 2019-04-10T17:14:01
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Meger2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        meger2_main.cpp \
    clickablelabel.cpp \
    labeltitlename.cpp \
    caddserver.cpp \
    addserverdialog.cpp \
    addserverdialogtitle.cpp \
    cshowserverblock.cpp \
    meger2_main_content.cpp \
    cdeletelabel.cpp \
    ceditlabel.cpp \
    errormessagedialogtitle.cpp \
    errormessagedialog.cpp \
    meger2content.cpp \
    meger2tabbase.cpp \
    setservertab.cpp \
    channelmanagetab.cpp \
    resourcelist.cpp \
    programattribute.cpp \
    mediaattribute.cpp \
    refreshbutton.cpp \
    resourcelist_left.cpp \
    setmedia_tab.cpp \
    setmedia_bottom.cpp \
    programattribute_left.cpp

HEADERS += \
        meger2_main.h \
    clickablelabel.h \
    labeltitlename.h \
    caddserver.h \
    addserverdialog.h \
    addserverdialogtitle.h \
    cshowserverblock.h \
    meger2_main_content.h \
    cdeletelabel.h \
    ceditlabel.h \
    errormessagedialogtitle.h \
    errormessagedialog.h \
    meger2content.h \
    meger2tabbase.h \
    setservertab.h \
    channelmanagetab.h \
    resourcelist.h \
    programattribute.h \
    mediaattribute.h \
    refreshbutton.h \
    resourcelist_left.h \
    setmedia_tab.h \
    setmedia_bottom.h \
    programattribute_left.h

FORMS += \
        meger2_main.ui \
    addserverdialog.ui \
    errormessagedialog.ui \
    meger2content.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
