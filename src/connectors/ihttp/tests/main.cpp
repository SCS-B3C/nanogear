/*
 *  main.cpp
 *  nanogear server test
 *
 *  Created by Daniele Giunchi on 25/07/11.
 *  Copyright 2011 B3C. All rights reserved.
 *
 *  See Licence at: http://tiny.cc/QXJ4D
 *
 */

#include <QtCore/QCoreApplication>

#include "testApplication.h"
#include <nhttpserver.h>

int main(int argc, char *argv[]) {
    /*if(argc != 2) {
        qDebug("%s", QObject::tr("Usage: \nRESTserver port").toAscii().data());
        exit(0);
    }*/

    TestApplication a(argc, argv);

    NHTTPServer restServer;
    a.setServer(&restServer);
    
    return a.exec();
}

