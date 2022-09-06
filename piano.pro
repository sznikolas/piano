QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Keys/A0.wav \
    Keys/A1.wav \
    Keys/A2.wav \
    Keys/A3.wav \
    Keys/A4.wav \
    Keys/A5.wav \
    Keys/A6.wav \
    Keys/A7.wav \
    Keys/Ab1.wav \
    Keys/Ab2.wav \
    Keys/Ab3.wav \
    Keys/Ab4.wav \
    Keys/Ab5.wav \
    Keys/Ab6.wav \
    Keys/Ab7.wav \
    Keys/B0.wav \
    Keys/B1.wav \
    Keys/B2.wav \
    Keys/B3.wav \
    Keys/B4.wav \
    Keys/B5.wav \
    Keys/B6.wav \
    Keys/B7.wav \
    Keys/Bb0.wav \
    Keys/Bb1.wav \
    Keys/Bb2.wav \
    Keys/Bb3.wav \
    Keys/Bb4.wav \
    Keys/Bb5.wav \
    Keys/Bb6.wav \
    Keys/Bb7.wav \
    Keys/C1.wav \
    Keys/C2.wav \
    Keys/C3.wav \
    Keys/C4.wav \
    Keys/C5.wav \
    Keys/C6.wav \
    Keys/C7.wav \
    Keys/C8.wav \
    Keys/D1.wav \
    Keys/D2.wav \
    Keys/D3.wav \
    Keys/D4.wav \
    Keys/D5.wav \
    Keys/D6.wav \
    Keys/D7.wav \
    Keys/Db1.wav \
    Keys/Db2.wav \
    Keys/Db3.wav \
    Keys/Db4.wav \
    Keys/Db5.wav \
    Keys/Db6.wav \
    Keys/Db7.wav \
    Keys/E1.wav \
    Keys/E2.wav \
    Keys/E3.wav \
    Keys/E4.wav \
    Keys/E5.wav \
    Keys/E6.wav \
    Keys/E7.wav \
    Keys/Eb1.wav \
    Keys/Eb2.wav \
    Keys/Eb3.wav \
    Keys/Eb4.wav \
    Keys/Eb5.wav \
    Keys/Eb6.wav \
    Keys/Eb7.wav \
    Keys/F1.wav \
    Keys/F2.wav \
    Keys/F3.wav \
    Keys/F4.wav \
    Keys/F5.wav \
    Keys/F6.wav \
    Keys/F7.wav \
    Keys/G1.wav \
    Keys/G2.wav \
    Keys/G3.wav \
    Keys/G4.wav \
    Keys/G5.wav \
    Keys/G6.wav \
    Keys/G7.wav \
    Keys/Gb1.wav \
    Keys/Gb2.wav \
    Keys/Gb3.wav \
    Keys/Gb4.wav \
    Keys/Gb5.wav \
    Keys/Gb6.wav \
    Keys/Gb7.wav \
    Keys/info.txt

RESOURCES += \
    resources.qrc
