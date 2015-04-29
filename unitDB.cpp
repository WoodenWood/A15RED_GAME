#include "unitDB.h"

#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

const string FILE_UNITDB = "/home/ruslan/Документы/Game/unitsdb.db";//парсинг


sUnit *readUnitsData(int &outSize)
{
    sUnit *res = NULL;
    outSize = 0;

    fstream inFile;
    inFile.open(FILE_UNITDB.c_str(), ios_base::in);

    string readLine;
    bool isReadSize = false;

    int index = 0;
    while(getline(inFile, readLine))
    {
        if(readLine[0] == COMMENT_CHAR)
            continue;

        if(isReadSize == false)
        {
            outSize = atoi(readLine.c_str());
            res = new sUnit[outSize];
            isReadSize = true;
        }

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].meType = (eUnitType)atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miInithealth = atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miMaxhealth = atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miPoints = atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miRange = atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miPower = atoi(readLine.c_str());

        getline(inFile, readLine);
        cout << readLine << " ";
        res[index].miHealingrange = atoi(readLine.c_str());
        cout << readLine << "\n";
        ++index;
    }

    inFile.close();
    return res;
}
