/*
 *  nanogear_global.h
 *  nanogear
 *
 *  Created by Paolo Quadrani on 17/09/09.
 *  Copyright 2009 B3C. All rights reserved.
 *
 *  See Licence at: http://tiny.cc/QXJ4D
 *
 */

#ifndef NANOGEAR_GLOBAL_H
#define NANOGEAR_GLOBAL_H

// Includes list
#include <QtCore/qglobal.h>

#if defined(NANOGEARSHARED)
  #if defined(Nanogear_EXPORTS)
  #  define NANOGEARSHARED_EXPORT Q_DECL_EXPORT
  #else
  #  define NANOGEARSHARED_EXPORT Q_DECL_IMPORT
  #endif
#else
  #  define NANOGEARSHARED_EXPORT
#endif

#endif // NANOGEAR_GLOBAL_H

