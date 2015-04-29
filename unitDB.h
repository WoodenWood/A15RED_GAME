#ifndef UNITDB_H
#define UNITDB_H

#ifndef NULL
#define NULL 0
#endif

const char COMMENT_CHAR = ';';

enum eUnitType
{
   MEDIC = 0
  ,UNKNOWN
};

struct sUnit
{
    int miInithealth;
    int miMaxhealth;
    int miPoints;
    int miRange;
    int miPower;
    int miHealingrange;

    eUnitType meType;
};

sUnit *readUnitsData(int &outSize);

#endif // UNITDB_H
