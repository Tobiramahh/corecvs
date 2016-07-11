/**
 * \file scannerParameters.cpp
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 */

#include <vector>
#include <stddef.h>
#include "scannerParameters.h"

/**
 *  Looks extremely unsafe because it depends on the order of static initialization.
 *  Should check standard if this is ok
 *
 *  Also it's not clear why removing "= Reflection()" breaks the code;
 **/

namespace corecvs {
template<>
Reflection BaseReflection<ScannerParameters>::reflection = Reflection();
template<>
int BaseReflection<ScannerParameters>::dummy = ScannerParameters::staticInit();
} // namespace corecvs 

SUPPRESS_OFFSET_WARNING_BEGIN

int ScannerParameters::staticInit()
{

    ReflectionNaming &nameing = naming();
    nameing = ReflectionNaming(
        "Scanner Parameters",
        "Scanner parameters",
        ""
    );
     

    fields().push_back(
        new EnumField
        (
          ScannerParameters::ALGO_ID,
          offsetof(ScannerParameters, mAlgo),
          0,
          "algo",
          "algo",
          "algo",
          new EnumReflection(2
          , new EnumOption(0,"Brightness")
          , new EnumOption(1,"Hue")
          )
        )
    );
    fields().push_back(
        new IntField
        (
          ScannerParameters::RED_THRESHOLD_ID,
          offsetof(ScannerParameters, mRedThreshold),
          200,
          "red threshold",
          "red threshold",
          "red threshold",
          true,
         0,
         255
        )
    );
    fields().push_back(
        new DoubleField
        (
          ScannerParameters::HEIGHT_ID,
          offsetof(ScannerParameters, mHeight),
          10,
          "height",
          "height",
          "height"
        )
    );
   return 0;
}

SUPPRESS_OFFSET_WARNING_END

