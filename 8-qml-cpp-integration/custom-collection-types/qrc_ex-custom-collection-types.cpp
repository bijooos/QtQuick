/*************************************************************************
 *
 * Discription : QML cpp integration
 * Author      : Biju
 * Company     : Emertxe info tech
 *
 *************************************************************************/

#include <QtCore/qglobal.h>

static const unsigned char qt_resource_data[] = {
  // /home/training/addon/qml-cpp-integration/ex-custom-collection-types/chart1.qml
  0x0,0x0,0x1,0xd,
  0x69,
  0x6d,0x70,0x6f,0x72,0x74,0x20,0x51,0x74,0x51,0x75,0x69,0x63,0x6b,0x20,0x32,0x2e,
  0x30,0xa,0x69,0x6d,0x70,0x6f,0x72,0x74,0x20,0x53,0x68,0x61,0x70,0x65,0x73,0x20,
  0x38,0x2e,0x30,0xa,0xa,0x43,0x68,0x61,0x72,0x74,0x20,0x7b,0xa,0x20,0x20,0x20,
  0x20,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x31,0x32,0x30,0x3b,0x20,0x68,0x65,0x69,
  0x67,0x68,0x74,0x3a,0x20,0x31,0x32,0x30,0xa,0x20,0x20,0x20,0x20,0x62,0x61,0x72,
  0x73,0x3a,0x20,0x5b,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x42,0x61,0x72,
  0x20,0x7b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x22,0x23,0x61,0x30,0x30,0x30,
  0x30,0x30,0x22,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0x76,0x61,0x6c,0x75,0x65,0x3a,0x20,0x2d,0x32,0x30,0x20,0x7d,0x2c,0xa,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x42,0x61,0x72,0x20,0x7b,0x20,0x63,0x6f,
  0x6c,0x6f,0x72,0x3a,0x20,0x22,0x23,0x30,0x30,0x61,0x30,0x30,0x30,0x22,0xa,0x20,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x76,0x61,0x6c,
  0x75,0x65,0x3a,0x20,0x35,0x30,0x20,0x7d,0x2c,0xa,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0x42,0x61,0x72,0x20,0x7b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x22,
  0x23,0x30,0x30,0x30,0x30,0x61,0x30,0x22,0xa,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
  0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x76,0x61,0x6c,0x75,0x65,0x3a,0x20,0x31,0x30,
  0x30,0x20,0x7d,0xa,0x20,0x20,0x20,0x20,0x5d,0xa,0x7d,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // chart1.qml
  0x0,0xa,
  0x9,0x81,0x6d,0x3c,
  0x0,0x63,
  0x0,0x68,0x0,0x61,0x0,0x72,0x0,0x74,0x0,0x31,0x0,0x2e,0x0,0x71,0x0,0x6d,0x0,0x6c,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/chart1.qml
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

QT_BEGIN_NAMESPACE

extern Q_CORE_EXPORT bool qRegisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

extern Q_CORE_EXPORT bool qUnregisterResourceData
    (int, const unsigned char *, const unsigned char *, const unsigned char *);

QT_END_NAMESPACE


int QT_MANGLE_NAMESPACE(qInitResources_ex_custom_collection_types)()
{
    QT_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_ex_custom_collection_types))

int QT_MANGLE_NAMESPACE(qCleanupResources_ex_custom_collection_types)()
{
    QT_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

Q_DESTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qCleanupResources_ex_custom_collection_types))

