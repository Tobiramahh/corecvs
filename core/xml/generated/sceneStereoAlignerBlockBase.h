#ifndef SCENESTEREOALIGNERBLOCKBASE_H_
#define SCENESTEREOALIGNERBLOCKBASE_H_
/**
 * \file sceneStereoAlignerBlockBase.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from bufferFilters.xml
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
#include "core/xml/generated/stereoAlignParameters.h"

// using namespace corecvs;

/*
 *  Additional includes for Pointer Types.
 */

// namespace corecvs {
namespace corecvs {
class FixtureScene;
}
namespace corecvs {
class RGB24Buffer;
}
namespace corecvs {
class FixtureCamera;
}
// }
/*
 *  Additional includes for enum section.
 */

/**
 * \brief SceneStereoAlignerBlockBase 
 * SceneStereoAlignerBlockBase 
 **/
class SceneStereoAlignerBlockBase : public corecvs::BaseReflection<SceneStereoAlignerBlockBase>
{
public:
    enum FieldId {
        INSCENE_ID,
        INFIXTURE1_ID,
        INCAMERA1_ID,
        INFIXTURE2_ID,
        INCAMERA2_ID,
        PARAMETERS_ID,
        INIMAGE1_ID,
        INIMAGE2_ID,
        OUTIMAGE1_ID,
        OUTIMAGE2_ID,
        OUTCAMERA1_ID,
        OUTCAMERA2_ID,
        SCENESTEREOALIGNERBLOCKBASE_FIELD_ID_NUM
    };

    /** Section with variables */

    /** 
     * \brief inScene 
     * inScene 
     */
    corecvs::FixtureScene * mInScene;

    /** 
     * \brief inFixture1 
     * fixture1 
     */
    int mInFixture1;

    /** 
     * \brief inCamera1 
     * camera1 
     */
    int mInCamera1;

    /** 
     * \brief inFixture2 
     * fixture2 
     */
    int mInFixture2;

    /** 
     * \brief inCamera2 
     * camera2 
     */
    int mInCamera2;

    /** 
     * \brief parameters 
     * parameters 
     */
    StereoAlignParameters mParameters;

    /** 
     * \brief inImage1 
     * inImage1 
     */
    corecvs::RGB24Buffer * mInImage1;

    /** 
     * \brief inImage2 
     * inImage2 
     */
    corecvs::RGB24Buffer * mInImage2;

    /** 
     * \brief outImage1 
     * outImage1 
     */
    corecvs::RGB24Buffer * mOutImage1;

    /** 
     * \brief outImage2 
     * outImage2 
     */
    corecvs::RGB24Buffer * mOutImage2;

    /** 
     * \brief outCamera1 
     * outCamera1 
     */
    corecvs::FixtureCamera * mOutCamera1;

    /** 
     * \brief outCamera2 
     * outCamera2 
     */
    corecvs::FixtureCamera * mOutCamera2;

    /** Static fields init function, this is used for "dynamic" field initialization */ 
    static int staticInit(corecvs::Reflection *toFill);

    static int relinkCompositeFields();

    /** Section with getters */
    const void *getPtrById(int fieldId) const
    {
        return (const unsigned char *)(this) + fields()[fieldId]->offset;
    }
    corecvs::FixtureScene * inScene() const
    {
        return mInScene;
    }

    int inFixture1() const
    {
        return mInFixture1;
    }

    int inCamera1() const
    {
        return mInCamera1;
    }

    int inFixture2() const
    {
        return mInFixture2;
    }

    int inCamera2() const
    {
        return mInCamera2;
    }

    StereoAlignParameters parameters() const
    {
        return mParameters;
    }

    corecvs::RGB24Buffer * inImage1() const
    {
        return mInImage1;
    }

    corecvs::RGB24Buffer * inImage2() const
    {
        return mInImage2;
    }

    corecvs::RGB24Buffer * outImage1() const
    {
        return mOutImage1;
    }

    corecvs::RGB24Buffer * outImage2() const
    {
        return mOutImage2;
    }

    corecvs::FixtureCamera * outCamera1() const
    {
        return mOutCamera1;
    }

    corecvs::FixtureCamera * outCamera2() const
    {
        return mOutCamera2;
    }

    /* Section with setters */
    void setInScene(corecvs::FixtureScene * inScene)
    {
        mInScene = inScene;
    }

    void setInFixture1(int inFixture1)
    {
        mInFixture1 = inFixture1;
    }

    void setInCamera1(int inCamera1)
    {
        mInCamera1 = inCamera1;
    }

    void setInFixture2(int inFixture2)
    {
        mInFixture2 = inFixture2;
    }

    void setInCamera2(int inCamera2)
    {
        mInCamera2 = inCamera2;
    }

    void setParameters(StereoAlignParameters const &parameters)
    {
        mParameters = parameters;
    }

    void setInImage1(corecvs::RGB24Buffer * inImage1)
    {
        mInImage1 = inImage1;
    }

    void setInImage2(corecvs::RGB24Buffer * inImage2)
    {
        mInImage2 = inImage2;
    }

    void setOutImage1(corecvs::RGB24Buffer * outImage1)
    {
        mOutImage1 = outImage1;
    }

    void setOutImage2(corecvs::RGB24Buffer * outImage2)
    {
        mOutImage2 = outImage2;
    }

    void setOutCamera1(corecvs::FixtureCamera * outCamera1)
    {
        mOutCamera1 = outCamera1;
    }

    void setOutCamera2(corecvs::FixtureCamera * outCamera2)
    {
        mOutCamera2 = outCamera2;
    }

    /* Section with embedded classes */
    /* visitor pattern - http://en.wikipedia.org/wiki/Visitor_pattern */
template<class VisitorType>
    void accept(VisitorType &visitor)
    {
        visitor.visit((void * &)mInScene,         static_cast<const corecvs::PointerField *>(fields()[INSCENE_ID]));
        visitor.visit(mInFixture1,                static_cast<const corecvs::IntField *>(fields()[INFIXTURE1_ID]));
        visitor.visit(mInCamera1,                 static_cast<const corecvs::IntField *>(fields()[INCAMERA1_ID]));
        visitor.visit(mInFixture2,                static_cast<const corecvs::IntField *>(fields()[INFIXTURE2_ID]));
        visitor.visit(mInCamera2,                 static_cast<const corecvs::IntField *>(fields()[INCAMERA2_ID]));
        visitor.visit(mParameters,                static_cast<const corecvs::CompositeField *>(fields()[PARAMETERS_ID]));
        visitor.visit((void * &)mInImage1,        static_cast<const corecvs::PointerField *>(fields()[INIMAGE1_ID]));
        visitor.visit((void * &)mInImage2,        static_cast<const corecvs::PointerField *>(fields()[INIMAGE2_ID]));
        visitor.visit((void * &)mOutImage1,       static_cast<const corecvs::PointerField *>(fields()[OUTIMAGE1_ID]));
        visitor.visit((void * &)mOutImage2,       static_cast<const corecvs::PointerField *>(fields()[OUTIMAGE2_ID]));
        visitor.visit((void * &)mOutCamera1,      static_cast<const corecvs::PointerField *>(fields()[OUTCAMERA1_ID]));
        visitor.visit((void * &)mOutCamera2,      static_cast<const corecvs::PointerField *>(fields()[OUTCAMERA2_ID]));
    }

    SceneStereoAlignerBlockBase()
    {
        corecvs::DefaultSetter setter;
        accept(setter);
    }

    SceneStereoAlignerBlockBase(
          corecvs::FixtureScene * inScene
        , int inFixture1
        , int inCamera1
        , int inFixture2
        , int inCamera2
        , StereoAlignParameters parameters
        , corecvs::RGB24Buffer * inImage1
        , corecvs::RGB24Buffer * inImage2
        , corecvs::RGB24Buffer * outImage1
        , corecvs::RGB24Buffer * outImage2
        , corecvs::FixtureCamera * outCamera1
        , corecvs::FixtureCamera * outCamera2
    )
    {
        mInScene = inScene;
        mInFixture1 = inFixture1;
        mInCamera1 = inCamera1;
        mInFixture2 = inFixture2;
        mInCamera2 = inCamera2;
        mParameters = parameters;
        mInImage1 = inImage1;
        mInImage2 = inImage2;
        mOutImage1 = outImage1;
        mOutImage2 = outImage2;
        mOutCamera1 = outCamera1;
        mOutCamera2 = outCamera2;
    }

    bool operator ==(const SceneStereoAlignerBlockBase &other) const 
    {
        if ( !(this->mInFixture1 == other.mInFixture1)) return false;
        if ( !(this->mInCamera1 == other.mInCamera1)) return false;
        if ( !(this->mInFixture2 == other.mInFixture2)) return false;
        if ( !(this->mInCamera2 == other.mInCamera2)) return false;
        if ( !(this->mParameters == other.mParameters)) return false;
        return true;
    }
    friend std::ostream& operator << (std::ostream &out, SceneStereoAlignerBlockBase &toSave)
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
#endif  //SCENESTEREOALIGNERBLOCKBASE_H_
