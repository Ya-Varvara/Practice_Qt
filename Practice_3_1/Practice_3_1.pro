QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Del.cpp \
    WorkWithData.cpp \
    add_ml.cpp \
    all_lines.cpp \
    average_l.cpp \
    delete_ml.cpp \
    graphics.cpp \
    lines_by_year.cpp \
    main.cpp \
    window.cpp

HEADERS += \
    Del.h \
    WorkWithData.h \
    add_ml.h \
    all_lines.h \
    average_l.h \
    delete_ml.h \
    graphics.h \
    lines_by_year.h \
    window.h

FORMS += \
    add_ml.ui \
    all_lines.ui \
    average_l.ui \
    delete_ml.ui \
    graphics.ui \
    lines_by_year.ui \
    window.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
