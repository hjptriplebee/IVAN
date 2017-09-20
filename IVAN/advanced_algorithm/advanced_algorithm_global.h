#ifndef ADVANCED_ALGORITHM_GLOBAL_H
#define ADVANCED_ALGORITHM_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(ADVANCED_ALGORITHM_LIBRARY)
#  define ADVANCED_ALGORITHMSHARED_EXPORT Q_DECL_EXPORT
#else
#  define ADVANCED_ALGORITHMSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // ADVANCED_ALGORITHM_GLOBAL_H