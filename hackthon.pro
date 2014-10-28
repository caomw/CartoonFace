TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    functions.cpp

INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv \
               /usr/local/include/opencv2

LIBS += /usr/local/lib/libopencv_highgui.so \
        /usr/local/lib/libopencv_calib3d.so \
        /usr/local/lib/libopencv_contrib.so \
        /usr/local/lib/libopencv_core.so    \
        /usr/local/lib/libopencv_features2d.so \
        /usr/local/lib/libopencv_flann.so  \
        /usr/local/lib/libopencv_gpu.so    \
        /usr/local/lib/libopencv_imgproc.so \
        /usr/local/lib/libopencv_legacy.so \
        /usr/local/lib/libopencv_ml.so     \
        /usr/local/lib/libopencv_nonfree.so \
        /usr/local/lib/libopencv_objdetect.so \
        /usr/local/lib/libopencv_photo.so     \
        /usr/local/lib/libopencv_stitching.so  \
        /usr/local/lib/libopencv_ts.so     \
        /usr/local/lib/libopencv_video.so  \
        /usr/local/lib/libopencv_videostab.so

HEADERS += \
    functions.h
