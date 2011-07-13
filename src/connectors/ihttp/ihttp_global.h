/*
 *  ihttp_global.h
 *  ihttp
 *
 *  Created by Paolo Quadrani on 17/09/09.
 *  Copyright 2009 B3C. All rights reserved.
 *
 *  See Licence at: http://tiny.cc/QXJ4D
 *
 */

#ifndef IHTTP_GLOBAL_H
#define IHTTP_GLOBAL_H

// Includes list
#include <QtCore/qglobal.h>

#if defined(NanogearIHTTPConnector_EXPORTS)
#  define IHTTPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define IHTTPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // IHTTP_GLOBAL_H

