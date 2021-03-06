/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:19 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 58 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 39 "sipQtGuiQGraphicsSceneMouseEvent.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 52 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 92 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 55 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 58 "sipQtGuiQGraphicsSceneMouseEvent.cpp"
#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtGuiQGraphicsSceneMouseEvent.cpp"


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_pos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->scenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_scenePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->screenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_screenPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->buttonDownScenePos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScenePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttonDownScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::MouseButton a0;
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp, sipType_Qt_MouseButton, &a0))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->buttonDownScreenPos(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttonDownScreenPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->lastScenePos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScenePos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_lastScreenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->lastScreenPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_lastScreenPos, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_buttons, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::MouseButton sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->button();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_button, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneMouseEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneMouseEvent, &sipCpp))
        {
            Qt::KeyboardModifiers *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneMouseEvent, sipName_modifiers, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneMouseEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneMouseEvent(void *, int);}
static void release_QGraphicsSceneMouseEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsSceneMouseEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneMouseEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneMouseEvent[] = {{196, 255, 1}};


static PyMethodDef methods_QGraphicsSceneMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QGraphicsSceneMouseEvent_button, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownPos), meth_QGraphicsSceneMouseEvent_buttonDownPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownScenePos), meth_QGraphicsSceneMouseEvent_buttonDownScenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttonDownScreenPos), meth_QGraphicsSceneMouseEvent_buttonDownScreenPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneMouseEvent_buttons, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastPos), meth_QGraphicsSceneMouseEvent_lastPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastScenePos), meth_QGraphicsSceneMouseEvent_lastScenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lastScreenPos), meth_QGraphicsSceneMouseEvent_lastScreenPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneMouseEvent_modifiers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneMouseEvent_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneMouseEvent_scenePos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneMouseEvent_screenPos, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsSceneMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneMouseEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneMouseEvent,
        {0, 0, 1},
        12, methods_QGraphicsSceneMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneMouseEvent,
    0,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QGraphicsSceneMouseEvent,
    0,
    0,
    0,
    release_QGraphicsSceneMouseEvent,
    cast_QGraphicsSceneMouseEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
