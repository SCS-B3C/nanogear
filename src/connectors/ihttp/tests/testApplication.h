/*
 * Nanogear - C++ web development framework
 *
 * This library is based on Restlet (R) <http://www.restlet.org> by Noelios Technologies
 * Copyright (C) 2005-2008 by Noelios Technologies <http://www.noelios.com>
 * Restlet is a registered trademark of Noelios Technologies. All other marks and
 * trademarks are property of their respective owners.
 *
 * Copyright (C) 2008-2009 Lorenzo Villani.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, version 3 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef TESTAPPLICATION_H
#define TESTAPPLICATION_H

#include "nanogear_global.h"
#include <napplication.h>
#include "nresourcecustom.h"

/*!
 * \class TestApplication
 * \brief A Nanogear application
 *
 * This class represents a Nanogear application and it's used to handle a set
 * of dependant resources.
 * It is responsible for starting the event loop and the attached connector.
 */
class TestApplication : public NApplication
{
public:
    /*!
     * Initialize this Nanogear application
     *
     * The argc and argv arguments are processed by the application, and made
     * available in a more convenient form by the arguments() function.
     *
     * Warning: The data pointed to by argc and argv must stay valid for the
     * entire lifetime of the QCoreApplication object.
     */
    TestApplication(int argc, char** argv) : NApplication(argc, argv) {}

    /*!
     * Every application must implement this function to create the root resource in the heap
     * (which will answer requests to every URI)
     * \note The instance of the object returned by this method is automatically deleted
     *       by a Server implementation after handling the request.
     * \return A pointer to the created resource
     */
    virtual NResource* createRoot() {
        return new NResourceCustom();
    };
};

#endif /* TESTAPPLICATION_H */
