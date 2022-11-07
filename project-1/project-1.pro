QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    contactdialog.cpp \
    desplayteam.cpp \
    helpdialog.cpp \
    main.cpp \
    dialog.cpp \
    team.cpp

HEADERS += \
    contactdialog.h \
    desplayteam.h \
    dialog.h \
    helpdialog.h \
    team.h

FORMS += \
    contactdialog.ui \
    desplayteam.ui \
    dialog.ui \
    helpdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    NFL Information.csv
