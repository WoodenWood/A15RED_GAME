#include <QCoreApplication>

#include <QFile>
#include <QTextStream>
#include <QDebug>

#include <stdio.h>
//#include <conio.h>
#include <ostream>
#include <iostream>
#include <string.h>
#include <fstream>

#include "unitDB.h"

using namespace std;

int main(int argc, char *argv[])
{
    int size;
    sUnit *psUnitsArray = NULL;
    psUnitsArray = readUnitsData(size);

    std::cout << psUnitsArray[0].meType << std::endl;
    std::cout << psUnitsArray[0].miInithealth << std::endl;

    std::cout << psUnitsArray[1].meType << std::endl;
    std::cout << psUnitsArray[1].miInithealth << std::endl;

    std::cout << psUnitsArray[2].meType << std::endl;
    std::cout << psUnitsArray[2].miInithealth << std::endl;


    /*
    std::ofstream outFile;
    outFile.open("system.dll", ios_base::in | ios_base::binary | ios_base::app);

    cout << "for end input, input price = -1.0" << endl;

    while(1)
    {
        cout << "input:";
        cin >> inputstr;
        cout << "price:";
        cin >> price;
        if(price == -1.0)
            break;

        outFile << inputstr << endl;
        outFile << price << endl;
    }
    outFile.close();
    */

    return 0;
    //QCoreApplication a(argc, argv);
    //return a.exec();
}







//    sTest test;
//    void *p = 0;
//    p = &test;
//    std::cout << p << endl;
//    *((int*)p) = 100;
//    p +=4;
//    *((double*)p) = 1.11123;
//    p += 8;
//    *((char*)p) = 'A';
//    p++;
//    *((short*)p) = 123;
