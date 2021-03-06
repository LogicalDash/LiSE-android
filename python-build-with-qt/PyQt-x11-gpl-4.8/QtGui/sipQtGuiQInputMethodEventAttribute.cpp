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

#line 504 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 522 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 41 "sipQtGuiQInputMethodEventAttribute.cpp"

#line 504 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 522 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 47 "sipQtGuiQInputMethodEventAttribute.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "sipQtGuiQInputMethodEventAttribute.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QInputMethodEvent_Attribute(void *, const sipTypeDef *);}
static void *cast_QInputMethodEvent_Attribute(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QInputMethodEvent_Attribute)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputMethodEvent_Attribute(void *, int);}
static void release_QInputMethodEvent_Attribute(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QInputMethodEvent::Attribute *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QInputMethodEvent_Attribute(sipSimpleWrapper *);}
static void dealloc_QInputMethodEvent_Attribute(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QInputMethodEvent_Attribute(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QInputMethodEvent_Attribute(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QInputMethodEvent_Attribute(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QInputMethodEvent::Attribute *sipCpp = 0;

    {
        QInputMethodEvent::AttributeType a0;
        int a1;
        int a2;
        QVariant * a3;
        int a3State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EiiJ1", sipType_QInputMethodEvent_AttributeType, &a0, &a1, &a2, sipType_QVariant,&a3, &a3State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QInputMethodEvent::Attribute(a0,a1,a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(a3,sipType_QVariant,a3State);

            return sipCpp;
        }
    }

    {
        const QInputMethodEvent::Attribute * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QInputMethodEvent_Attribute, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QInputMethodEvent::Attribute(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_length(void *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_length(void *sipSelf, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->length;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_length(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_length(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->length = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_start(void *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_start(void *sipSelf, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->start;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_start(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_start(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->start = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_type(void *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_type(void *sipSelf, PyObject *)
{
    QInputMethodEvent::AttributeType sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = sipCpp->type;

    return sipConvertFromEnum(sipVal, sipType_QInputMethodEvent_AttributeType);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_type(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QInputMethodEvent::AttributeType sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = (QInputMethodEvent::AttributeType)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QInputMethodEvent_Attribute_value(void *, PyObject *);}
static PyObject *varget_QInputMethodEvent_Attribute_value(void *sipSelf, PyObject *)
{
    QVariant *sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    sipVal = &sipCpp->value;

    return sipConvertFromType(sipVal,sipType_QVariant, NULL);
}


extern "C" {static int varset_QInputMethodEvent_Attribute_value(void *, PyObject *, PyObject *);}
static int varset_QInputMethodEvent_Attribute_value(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QVariant *sipVal;
    QInputMethodEvent::Attribute *sipCpp = reinterpret_cast<QInputMethodEvent::Attribute *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QVariant *>(sipForceConvertToType(sipPy,sipType_QVariant,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->value = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QInputMethodEvent_Attribute[] = {
    {sipName_length, varget_QInputMethodEvent_Attribute_length, varset_QInputMethodEvent_Attribute_length, 0},
    {sipName_start, varget_QInputMethodEvent_Attribute_start, varset_QInputMethodEvent_Attribute_start, 0},
    {sipName_type, varget_QInputMethodEvent_Attribute_type, varset_QInputMethodEvent_Attribute_type, 0},
    {sipName_value, varget_QInputMethodEvent_Attribute_value, varset_QInputMethodEvent_Attribute_value, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QInputMethodEvent_Attribute = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QInputMethodEvent__Attribute,
        {0}
    },
    {
        sipNameNr_Attribute,
        {248, 255, 0},
        0, 0,
        0, 0,
        4, variables_QInputMethodEvent_Attribute,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QInputMethodEvent_Attribute,
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
    dealloc_QInputMethodEvent_Attribute,
    0,
    0,
    0,
    release_QInputMethodEvent_Attribute,
    cast_QInputMethodEvent_Attribute,
    0,
    0,
    0
},
    0,
    0,
    0
};
