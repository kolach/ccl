/****************************************************************************
 *          ValArraySize_t                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArraySize_t
#define tagValArray tagValArraySize_tInterface
#define ElementType size_t
#define ValArrayInterface ValArraySize_tInterface
#define ValArray ValArraySize_t
#include "valarraygen.h"
extern ValArraySize_tInterface iValArraySize_t;

/****************************************************************************
 *          ValArrayShort                                                   *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayShort
#define tagValArray tagValArrayShortInterface
#define ElementType short
#define ValArrayInterface ValArrayShortInterface
#define ValArray ValArrayShort
#include "valarraygen.h"
extern ValArrayInterface iValArrayShort;

/****************************************************************************
 *          ValArrayInt                                                     *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayInt
#define tagValArray tagValArrayIntInterface
#define ElementType int
#define ValArrayInterface ValArrayIntInterface
#define ValArray ValArrayInt
#include "valarraygen.h"
extern ValArrayInterface iValArrayInt;

/****************************************************************************
 *          ValArrayLong                                                    *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLong
#define tagValArray tagValArrayLongInterface
#define ElementType long
#define ValArrayInterface ValArrayLongInterface
#define ValArray ValArrayLong
#include "valarraygen.h"
extern ValArrayInterface iValArrayLong;


/****************************************************************************
 *          ValArrayDouble                                                  *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayDouble
#define tagValArray tagValArrayDoubleInterface
#define ElementType double
#define ValArrayInterface ValArrayDoubleInterface
#define ValArray ValArrayDouble
#include "valarraygen.h"
extern ValArrayDoubleInterface iValArrayDouble;

/****************************************************************************
 *          ValArrayLongDouble                                              *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLongDouble
#define tagValArray tagValArrayLongDoubleInterface
#define ElementType long double
#define ValArrayInterface ValArrayLongDoubleInterface
#define ValArray ValArrayLongDouble
#include "valarraygen.h"
extern ValArrayInterface iValArrayLongDouble;

/****************************************************************************
 *          ValArrayLongLong                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayLongLong
#define tagValArray tagValArrayLongLongInterface
#define ElementType long long
#define ValArrayInterface ValArrayLongLongInterface
#define ValArray ValArrayLongLong
#include "valarraygen.h"
extern ValArrayInterface iValArrayLongLong;

/****************************************************************************
 *          ValArrayFloat                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayFloat
#define tagValArray tagValArrayFloatInterface
#define ElementType float
#define ValArrayInterface ValArrayFloatInterface
#define ValArray ValArrayFloat
#include "valarraygen.h"
extern ValArrayInterface iValArrayFloat;


/****************************************************************************
 *          ValArrayUInt                                                *
 ****************************************************************************/
#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray
#define _ValArray _ValArrayUInt
#define tagValArray tagValArrayUIntInterface
#define ElementType unsigned int
#define ValArrayInterface ValArrayUIntInterface
#define ValArray ValArrayUInt
#define IS_UNSIGNED
#include "valarraygen.h"
#undef IS_UNSIGNED
extern ValArrayInterface iValArrayUInt;


#undef ElementType
#undef ValArrayInterface
#undef ElementType
#undef ValArray
#undef tagValArray
#undef _ValArray

