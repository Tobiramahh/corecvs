#ifndef RATE_PARAMETERS_H_
#define RATE_PARAMETERS_H_
/**
 * \file rateParameters.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from physics.xml
 */

#include "core/reflection/reflection.h"
#include "core/reflection/defaultSetter.h"
#include "core/reflection/printerVisitor.h"

/*
 *  Embed includes.
 */
/*
 *  Additional includes for Composite Types.
 */

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief Rate Parameters 
 * Rate Parameters 
 **/
class RateParameters : public corecvs::BaseReflection<RateParameters>
{
public:
    enum FieldId {
        RC_RATE_ID,
        SUPER_RATE_ID,
        RC_EXPO_ID,
        RATE_PARAMETERS_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief rc rate 
     * rc rate 
     */
    double mRcRate;

    /** 
     * \brief super rate 
     * super rate 
     */
    double mSuperRate;

    /** 
     * \brief rc expo 
     * rc expo 
     */
    double mRcExpo;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    double rcRate() const
    {
        return mRcRate;
    }

    double superRate() const
    {
        return mSuperRate;
    }

    double rcExpo() const
    {
        return mRcExpo;
    }

    /* Section with setters */
    void setRcRate(double rcRate)
    {
        mRcRate = rcRate;
    }

    void setSuperRate(double superRate)
    {
        mSuperRate = superRate;
    }

    void setRcExpo(double rcExpo)
    {
        mRcExpo = rcExpo;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit(mRcRate,                    static_cast<const corecvs::DoubleField *>(fields()[RC_RATE_ID]));
        visitor.visit(mSuperRate,                 static_cast<const corecvs::DoubleField *>(fields()[SUPER_RATE_ID]));
        visitor.visit(mRcExpo,                    static_cast<const corecvs::DoubleField *>(fields()[RC_EXPO_ID]));
    }

    RateParameters()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    RateParameters(
          double rcRate
        , double superRate
        , double rcExpo
    )
    {
        mRcRate = rcRate;
        mSuperRate = superRate;
        mRcExpo = rcExpo;
    }

    bool operator ==(const RateParameters &other) const 
    {
        if ( !(this->mRcRate == other.mRcRate)) return false;
        if ( !(this->mSuperRate == other.mSuperRate)) return false;
        if ( !(this->mRcExpo == other.mRcExpo)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, RateParameters &toSave)
    {
        corecvs::PrinterVisitor printer(out);
        toSave.accept<corecvs::PrinterVisitor>(printer);
        return out;
    }

    void print ()
    {
        std::cout << *this;
    }
};
#endif  //RATE_PARAMETERS_H_
