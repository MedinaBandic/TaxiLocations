#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_Split_2 = 5,
UID_SV1_Extract_Split_out0 = 6,
UID_SV1_Extract_Split_out1 = 7,
UID_SV1_Extract_Split_out2 = 8,
UID_SV1_Extract_Split_out3 = 9,
UID_Process_3 = 10,
UID_Process_3_Data0 = 11,
UID_Process_4 = 12,
UID_Process_4_Data0 = 13,
UID_Process_5 = 14,
UID_Process_5_Data0 = 15,
UID_Process_6 = 16,
UID_Process_6_Data0 = 17,
UID_SV2_Process_out0 = 18,
UID_Process_8 = 19,
UID_Process_8_Data0 = 20,
UID_Process_9 = 21,
UID_Process_9_Data0 = 22,
UID_Process_10 = 23,
UID_Process_10_Data0 = 24,
UID_Process_11 = 25,
UID_Process_11_Data0 = 26,
UID_SV3_Process_out0 = 27,
UID_Process_13 = 28,
UID_Process_13_Data0 = 29,
UID_Process_14 = 30,
UID_Process_14_Data0 = 31,
UID_Process_15 = 32,
UID_Process_15_Data0 = 33,
UID_Process_16 = 34,
UID_Process_16_Data0 = 35,
UID_SV4_Process_out0 = 36,
UID_Process_18 = 37,
UID_Process_18_Data0 = 38,
UID_Process_19 = 39,
UID_Process_19_Data0 = 40,
UID_Process_20 = 41,
UID_Process_20_Data0 = 42,
UID_Process_21 = 43,
UID_Process_21_Data0 = 44,
UID_SV5_Process_out0 = 45,
UID_Split_2_0,
UID_Split_2_1,
UID_Split_2_2,
UID_Split_2_3,
UID_Process_4_Prefix,
UID_Process_9_Prefix,
UID_Process_14_Prefix,
UID_Process_19_Prefix,
UID_ParallelUnionAll_Process_1
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        int m_TaxiID;
        ScopeDateTime m_Timestamp;
        double m_Lat;
        double m_Lon;
        NativeNullable<double> m_Speed;
        NativeNullable<int> m_Staying;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\tTaxiID:\t" << row.m_TaxiID << endl;
        os << "\tTimestamp:\t" << row.m_Timestamp << endl;
        os << "\tLat:\t" << row.m_Lat << endl;
        os << "\tLon:\t" << row.m_Lon << endl;
        os << "\tSpeed:\t" << row.m_Speed << endl;
        os << "\tStaying:\t" << row.m_Staying << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        int m_TaxiID;
        ScopeDateTime m_Timestamp;
        NativeNullable<double> m_Speed;
        NativeNullable<int> m_Staying;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_1_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_1_Data0 & row)
    {
        os << "\tTaxiID:\t" << row.m_TaxiID << endl;
        os << "\tTimestamp:\t" << row.m_Timestamp << endl;
        os << "\tSpeed:\t" << row.m_Speed << endl;
        os << "\tStaying:\t" << row.m_Staying << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV1_Extract_Split_out0
    {
    public:
        int m_SpeedPartition;
        __int64 m_partialagg6__;
        SV1_Extract_Split_out0();
        SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out0 & row)
    {
        os << "\tSpeedPartition:\t" << row.m_SpeedPartition << endl;
        os << "\tpartialagg6__:\t" << row.m_partialagg6__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV1_Extract_Split_out1
    {
    public:
        int m_Expr_0;
        __int64 m_partialagg7__;
        NativeNullable<double> m_partialagg8__;
        __int64 m_partialagg9__;
        SV1_Extract_Split_out1();
        SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out1 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out1 & row)
    {
        os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
        os << "\tpartialagg7__:\t" << row.m_partialagg7__ << endl;
        os << "\tpartialagg8__:\t" << row.m_partialagg8__ << endl;
        os << "\tpartialagg9__:\t" << row.m_partialagg9__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV1_Extract_Split_out2
    {
    public:
        int m_Expr_0;
        __int64 m_partialaggA__;
        NativeNullable<double> m_partialaggB__;
        __int64 m_partialaggC__;
        SV1_Extract_Split_out2();
        SV1_Extract_Split_out2(const SV1_Extract_Split_out2 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out2(const SV1_Extract_Split_out2 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out2 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out2 & row)
    {
        os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
        os << "\tpartialaggA__:\t" << row.m_partialaggA__ << endl;
        os << "\tpartialaggB__:\t" << row.m_partialaggB__ << endl;
        os << "\tpartialaggC__:\t" << row.m_partialaggC__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV1_Extract_Split_out3
    {
    public:
        int m_TaxiID;
        NativeNullable<double> m_partialaggD__;
        __int64 m_partialaggE__;
        SV1_Extract_Split_out3();
        SV1_Extract_Split_out3(const SV1_Extract_Split_out3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_Split_out3(const SV1_Extract_Split_out3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_Split_out3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_Split_out3 & row)
    {
        os << "\tTaxiID:\t" << row.m_TaxiID << endl;
        os << "\tpartialaggD__:\t" << row.m_partialaggD__ << endl;
        os << "\tpartialaggE__:\t" << row.m_partialaggE__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorKey_Process_3
    {
    public:
        int m_SpeedPartition;
        HashAggregatorKey_Process_3();
        HashAggregatorKey_Process_3(const HashAggregatorKey_Process_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorKey_Process_3(const HashAggregatorKey_Process_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorKey_Process_3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorKey_Process_3 & row)
    {
        os << "\tSpeedPartition:\t" << row.m_SpeedPartition << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_3
    {
    public:
        __int64 m_UNCHECKED_SUM_partialagg6__;
        HashAggregatorState_Process_3();
        HashAggregatorState_Process_3(const HashAggregatorState_Process_3 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_3(const HashAggregatorState_Process_3 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_3 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_3 & row)
    {
        os << "\tUNCHECKED_SUM_partialagg6__:\t" << row.m_UNCHECKED_SUM_partialagg6__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_6_Data0
    {
    public:
        int m_Speed;
        NativeNullable<__int64> m_PointCount;
        Process_6_Data0();
        Process_6_Data0(const Process_6_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_6_Data0(const Process_6_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_6_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_6_Data0 & row)
    {
        os << "\tSpeed:\t" << row.m_Speed << endl;
        os << "\tPointCount:\t" << row.m_PointCount << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorKey_Process_8
    {
    public:
        int m_Expr_0;
        HashAggregatorKey_Process_8();
        HashAggregatorKey_Process_8(const HashAggregatorKey_Process_8 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorKey_Process_8(const HashAggregatorKey_Process_8 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorKey_Process_8 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorKey_Process_8 & row)
    {
        os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_8
    {
    public:
        __int64 m_UNCHECKED_SUM_partialagg7__;
        double m_SUM_partialagg8__;
        bool m_SUM_fEmpty_partialagg8__;
        __int64 m_UNCHECKED_SUM_partialagg9__;
        HashAggregatorState_Process_8();
        HashAggregatorState_Process_8(const HashAggregatorState_Process_8 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_8(const HashAggregatorState_Process_8 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_8 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_8 & row)
    {
        os << "\tUNCHECKED_SUM_partialagg7__:\t" << row.m_UNCHECKED_SUM_partialagg7__ << endl;
        os << "\tSUM_partialagg8__:\t" << row.m_SUM_partialagg8__ << endl;
        os << "\tSUM_fEmpty_partialagg8__:\t" << row.m_SUM_fEmpty_partialagg8__ << endl;
        os << "\tUNCHECKED_SUM_partialagg9__:\t" << row.m_UNCHECKED_SUM_partialagg9__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_11_Data0
    {
    public:
        int m_Hour;
        NativeNullable<__int64> m_HourCount;
        NativeNullable<double> m_AvgSpeed;
        Process_11_Data0();
        Process_11_Data0(const Process_11_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_11_Data0(const Process_11_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_11_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_11_Data0 & row)
    {
        os << "\tHour:\t" << row.m_Hour << endl;
        os << "\tHourCount:\t" << row.m_HourCount << endl;
        os << "\tAvgSpeed:\t" << row.m_AvgSpeed << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_13
    {
    public:
        __int64 m_UNCHECKED_SUM_partialaggA__;
        double m_SUM_partialaggB__;
        bool m_SUM_fEmpty_partialaggB__;
        __int64 m_UNCHECKED_SUM_partialaggC__;
        HashAggregatorState_Process_13();
        HashAggregatorState_Process_13(const HashAggregatorState_Process_13 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_13(const HashAggregatorState_Process_13 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_13 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_13 & row)
    {
        os << "\tUNCHECKED_SUM_partialaggA__:\t" << row.m_UNCHECKED_SUM_partialaggA__ << endl;
        os << "\tSUM_partialaggB__:\t" << row.m_SUM_partialaggB__ << endl;
        os << "\tSUM_fEmpty_partialaggB__:\t" << row.m_SUM_fEmpty_partialaggB__ << endl;
        os << "\tUNCHECKED_SUM_partialaggC__:\t" << row.m_UNCHECKED_SUM_partialaggC__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorKey_Process_18
    {
    public:
        int m_TaxiID;
        HashAggregatorKey_Process_18();
        HashAggregatorKey_Process_18(const HashAggregatorKey_Process_18 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorKey_Process_18(const HashAggregatorKey_Process_18 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorKey_Process_18 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorKey_Process_18 & row)
    {
        os << "\tTaxiID:\t" << row.m_TaxiID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_18
    {
    public:
        double m_SUM_partialaggD__;
        bool m_SUM_fEmpty_partialaggD__;
        __int64 m_UNCHECKED_SUM_partialaggE__;
        HashAggregatorState_Process_18();
        HashAggregatorState_Process_18(const HashAggregatorState_Process_18 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_18(const HashAggregatorState_Process_18 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_18 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_18 & row)
    {
        os << "\tSUM_partialaggD__:\t" << row.m_SUM_partialaggD__ << endl;
        os << "\tSUM_fEmpty_partialaggD__:\t" << row.m_SUM_fEmpty_partialaggD__ << endl;
        os << "\tUNCHECKED_SUM_partialaggE__:\t" << row.m_UNCHECKED_SUM_partialaggE__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_21_Data0
    {
    public:
        int m_TaxiID;
        NativeNullable<double> m_Average;
        Process_21_Data0();
        Process_21_Data0(const Process_21_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_21_Data0(const Process_21_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_21_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_21_Data0 & row)
    {
        os << "\tTaxiID:\t" << row.m_TaxiID << endl;
        os << "\tAverage:\t" << row.m_Average << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(6);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_TaxiID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Timestamp), T_DateTime);
            offset[2] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Lat), T_Double);
            offset[3] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Lon), T_Double);
            offset[4] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Speed), T_DoubleQ);
            offset[5] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Staying), T_IntegerQ);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(6);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("TaxiID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "TaxiID") >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("Timestamp", System::DateTime::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Timestamp") >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("Lat", System::Double::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Lat") >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("Lon", System::Double::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Lon") >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn("Speed", System::Nullable<System::Double>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Speed") >= 0, /*isSystem*/false);
            c[5] = gcnew ScopeEngineManaged::SqlIpColumn("Staying", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Staying") >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    

#endif // defined(COMPILE_MANAGED)

//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out0 & row)
        {
            try
            {
                input->Read(row.m_SpeedPartition);
                input->Read(row.m_partialagg6__);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_SpeedPartition);
            output->Write(row.m_partialagg6__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, rowSize, rowLimit);
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out1>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out1 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Expr_0);
                    input->Read(row.m_partialagg7__);
                    input->Read(row.m_partialagg8__);
                    input->Read(row.m_partialagg9__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_Expr_0);
                    input->Read(row.m_partialagg7__);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialagg8__);
                    }
                    else
                    {
                        row.m_partialagg8__.SetNull();
                    }
                    input->Read(row.m_partialagg9__);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out1>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out1 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialagg8__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_Expr_0);
            output->Write(row.m_partialagg7__);
            if (!row.m_partialagg8__.IsNull())
            {
                output->Write(row.m_partialagg8__);
            }
            output->Write(row.m_partialagg9__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, rowSize, rowLimit);
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out1 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out1 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out2>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out2 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_Expr_0);
                    input->Read(row.m_partialaggA__);
                    input->Read(row.m_partialaggB__);
                    input->Read(row.m_partialaggC__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_Expr_0);
                    input->Read(row.m_partialaggA__);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialaggB__);
                    }
                    else
                    {
                        row.m_partialaggB__.SetNull();
                    }
                    input->Read(row.m_partialaggC__);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out2>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out2 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialaggB__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_Expr_0);
            output->Write(row.m_partialaggA__);
            if (!row.m_partialaggB__.IsNull())
            {
                output->Write(row.m_partialaggB__);
            }
            output->Write(row.m_partialaggC__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, rowSize, rowLimit);
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out2 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out2 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_Split_out3>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_Split_out3 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_TaxiID);
                    input->Read(row.m_partialaggD__);
                    input->Read(row.m_partialaggE__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_TaxiID);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialaggD__);
                    }
                    else
                    {
                        row.m_partialaggD__.SetNull();
                    }
                    input->Read(row.m_partialaggE__);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_Split_out3>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, SV1_Extract_Split_out3 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialaggD__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_TaxiID);
            if (!row.m_partialaggD__.IsNull())
            {
                output->Write(row.m_partialaggD__);
            }
            output->Write(row.m_partialaggE__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, rowSize, rowLimit);
            }
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_Split_out3 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_Split_out3 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
        m_TaxiID = 0;
        m_Lat = 0.0;
        m_Lon = 0.0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
        m_TaxiID = 0;
    }
    INLINE Process_1_Data0::Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc) :
            m_Timestamp(c.m_Timestamp),
            m_Speed(c.m_Speed),
            m_Staying(c.m_Staying)
    {
        m_TaxiID = c.m_TaxiID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out0::SV1_Extract_Split_out0()
    {
        m_SpeedPartition = 0;
        m_partialagg6__ = 0;
    }
    INLINE SV1_Extract_Split_out0::SV1_Extract_Split_out0(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc)
    {
        m_SpeedPartition = c.m_SpeedPartition;
        m_partialagg6__ = c.m_partialagg6__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out1::SV1_Extract_Split_out1()
    {
        m_Expr_0 = 0;
        m_partialagg7__ = 0;
        m_partialagg9__ = 0;
    }
    INLINE SV1_Extract_Split_out1::SV1_Extract_Split_out1(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
            m_partialagg8__(c.m_partialagg8__)
    {
        m_Expr_0 = c.m_Expr_0;
        m_partialagg7__ = c.m_partialagg7__;
        m_partialagg9__ = c.m_partialagg9__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out2::SV1_Extract_Split_out2()
    {
        m_Expr_0 = 0;
        m_partialaggA__ = 0;
        m_partialaggC__ = 0;
    }
    INLINE SV1_Extract_Split_out2::SV1_Extract_Split_out2(const SV1_Extract_Split_out2 & c, IncrementalAllocator * alloc) :
            m_partialaggB__(c.m_partialaggB__)
    {
        m_Expr_0 = c.m_Expr_0;
        m_partialaggA__ = c.m_partialaggA__;
        m_partialaggC__ = c.m_partialaggC__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_Split_out3::SV1_Extract_Split_out3()
    {
        m_TaxiID = 0;
        m_partialaggE__ = 0;
    }
    INLINE SV1_Extract_Split_out3::SV1_Extract_Split_out3(const SV1_Extract_Split_out3 & c, IncrementalAllocator * alloc) :
            m_partialaggD__(c.m_partialaggD__)
    {
        m_TaxiID = c.m_TaxiID;
        m_partialaggE__ = c.m_partialaggE__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorKey_Process_3::HashAggregatorKey_Process_3()
    {
        m_SpeedPartition = 0;
    }
    INLINE HashAggregatorKey_Process_3::HashAggregatorKey_Process_3(const HashAggregatorKey_Process_3 & c, IncrementalAllocator * alloc)
    {
        m_SpeedPartition = c.m_SpeedPartition;
    }

    template <typename Allocator>
    INLINE HashAggregatorKey_Process_3::HashAggregatorKey_Process_3(const HashAggregatorKey_Process_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SpeedPartition = c.m_SpeedPartition;
    }

    template <typename Allocator>
    INLINE void HashAggregatorKey_Process_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_3::HashAggregatorState_Process_3()
    {
        m_UNCHECKED_SUM_partialagg6__ = 0;
    }
    INLINE HashAggregatorState_Process_3::HashAggregatorState_Process_3(const HashAggregatorState_Process_3 & c, IncrementalAllocator * alloc)
    {
        m_UNCHECKED_SUM_partialagg6__ = c.m_UNCHECKED_SUM_partialagg6__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_3::HashAggregatorState_Process_3(const HashAggregatorState_Process_3 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UNCHECKED_SUM_partialagg6__ = c.m_UNCHECKED_SUM_partialagg6__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_3::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_6_Data0::Process_6_Data0()
    {
        m_Speed = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorKey_Process_8::HashAggregatorKey_Process_8()
    {
        m_Expr_0 = 0;
    }
    INLINE HashAggregatorKey_Process_8::HashAggregatorKey_Process_8(const HashAggregatorKey_Process_8 & c, IncrementalAllocator * alloc)
    {
        m_Expr_0 = c.m_Expr_0;
    }

    template <typename Allocator>
    INLINE HashAggregatorKey_Process_8::HashAggregatorKey_Process_8(const HashAggregatorKey_Process_8 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Expr_0 = c.m_Expr_0;
    }

    template <typename Allocator>
    INLINE void HashAggregatorKey_Process_8::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_8::HashAggregatorState_Process_8()
    {
        m_UNCHECKED_SUM_partialagg7__ = 0;
        m_SUM_partialagg8__ = 0.0;
        m_SUM_fEmpty_partialagg8__ = false;
        m_UNCHECKED_SUM_partialagg9__ = 0;
    }
    INLINE HashAggregatorState_Process_8::HashAggregatorState_Process_8(const HashAggregatorState_Process_8 & c, IncrementalAllocator * alloc)
    {
        m_UNCHECKED_SUM_partialagg7__ = c.m_UNCHECKED_SUM_partialagg7__;
        m_SUM_partialagg8__ = c.m_SUM_partialagg8__;
        m_SUM_fEmpty_partialagg8__ = c.m_SUM_fEmpty_partialagg8__;
        m_UNCHECKED_SUM_partialagg9__ = c.m_UNCHECKED_SUM_partialagg9__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_8::HashAggregatorState_Process_8(const HashAggregatorState_Process_8 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UNCHECKED_SUM_partialagg7__ = c.m_UNCHECKED_SUM_partialagg7__;
        m_SUM_partialagg8__ = c.m_SUM_partialagg8__;
        m_SUM_fEmpty_partialagg8__ = c.m_SUM_fEmpty_partialagg8__;
        m_UNCHECKED_SUM_partialagg9__ = c.m_UNCHECKED_SUM_partialagg9__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_8::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_11_Data0::Process_11_Data0()
    {
        m_Hour = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_13::HashAggregatorState_Process_13()
    {
        m_UNCHECKED_SUM_partialaggA__ = 0;
        m_SUM_partialaggB__ = 0.0;
        m_SUM_fEmpty_partialaggB__ = false;
        m_UNCHECKED_SUM_partialaggC__ = 0;
    }
    INLINE HashAggregatorState_Process_13::HashAggregatorState_Process_13(const HashAggregatorState_Process_13 & c, IncrementalAllocator * alloc)
    {
        m_UNCHECKED_SUM_partialaggA__ = c.m_UNCHECKED_SUM_partialaggA__;
        m_SUM_partialaggB__ = c.m_SUM_partialaggB__;
        m_SUM_fEmpty_partialaggB__ = c.m_SUM_fEmpty_partialaggB__;
        m_UNCHECKED_SUM_partialaggC__ = c.m_UNCHECKED_SUM_partialaggC__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_13::HashAggregatorState_Process_13(const HashAggregatorState_Process_13 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UNCHECKED_SUM_partialaggA__ = c.m_UNCHECKED_SUM_partialaggA__;
        m_SUM_partialaggB__ = c.m_SUM_partialaggB__;
        m_SUM_fEmpty_partialaggB__ = c.m_SUM_fEmpty_partialaggB__;
        m_UNCHECKED_SUM_partialaggC__ = c.m_UNCHECKED_SUM_partialaggC__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_13::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorKey_Process_18::HashAggregatorKey_Process_18()
    {
        m_TaxiID = 0;
    }
    INLINE HashAggregatorKey_Process_18::HashAggregatorKey_Process_18(const HashAggregatorKey_Process_18 & c, IncrementalAllocator * alloc)
    {
        m_TaxiID = c.m_TaxiID;
    }

    template <typename Allocator>
    INLINE HashAggregatorKey_Process_18::HashAggregatorKey_Process_18(const HashAggregatorKey_Process_18 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_TaxiID = c.m_TaxiID;
    }

    template <typename Allocator>
    INLINE void HashAggregatorKey_Process_18::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_18::HashAggregatorState_Process_18()
    {
        m_SUM_partialaggD__ = 0.0;
        m_SUM_fEmpty_partialaggD__ = false;
        m_UNCHECKED_SUM_partialaggE__ = 0;
    }
    INLINE HashAggregatorState_Process_18::HashAggregatorState_Process_18(const HashAggregatorState_Process_18 & c, IncrementalAllocator * alloc)
    {
        m_SUM_partialaggD__ = c.m_SUM_partialaggD__;
        m_SUM_fEmpty_partialaggD__ = c.m_SUM_fEmpty_partialaggD__;
        m_UNCHECKED_SUM_partialaggE__ = c.m_UNCHECKED_SUM_partialaggE__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_18::HashAggregatorState_Process_18(const HashAggregatorState_Process_18 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SUM_partialaggD__ = c.m_SUM_partialaggD__;
        m_SUM_fEmpty_partialaggD__ = c.m_SUM_fEmpty_partialaggD__;
        m_UNCHECKED_SUM_partialaggE__ = c.m_UNCHECKED_SUM_partialaggE__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_18::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_21_Data0::Process_21_Data0()
    {
        m_TaxiID = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif
#endif
#pragma region SV1_Extract_Split
#if defined(COMPILE_SV1_EXTRACT_SPLIT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Extract_0>
    {
        typedef Microsoft::Analytics::Interfaces::IExtractor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Extract_0());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Extract_0, "Constructor", ex);
                throw;
            }
        }

        int StreamIdColumnIndex()
        {
            return -1;
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, Extract_0_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_TaxiID, ((SqlIpRow^)managedRow)->GetInternal<System::Int32>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Timestamp, ((SqlIpRow^)managedRow)->GetInternal<System::DateTime>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Lat, ((SqlIpRow^)managedRow)->GetInternal<System::Double>(2), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Lon, ((SqlIpRow^)managedRow)->GetInternal<System::Double>(3), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Speed, ((SqlIpRow^)managedRow)->GetInternal<System::Nullable<System::Double>>(4), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Staying, ((SqlIpRow^)managedRow)->GetInternal<System::Nullable<System::Int32>>(5), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_1 [] =
    {
        "TaxiID",
        "Timestamp",
        "Speed",
        "Staying",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_TaxiID = input.m_TaxiID;
                exceptionIndex++;
                output.m_Timestamp = input.m_Timestamp;
                exceptionIndex++;
                output.m_Speed = input.m_Speed;
                exceptionIndex++;
                output.m_Staying = input.m_Staying;
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_1[exceptionIndex]);
            }
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Split_2_0 [] =
    {
        "Speed.HasValue",
        "(int)(Speed / 10) * 10",
        "1L",
        "\"*** After Last Expression ***\"",
    };

    // FilterTransform policy for splitter #0 of Split_2
    template<> 
    class RowTransformPolicy<typename Process_1_Data0, typename SV1_Extract_Split_out0, UID_Split_2_0> 
    {
    public:
        void Init(ManagedRow<Process_1_Data0> *)
        {
            // Nothing to do
        }

        bool FilterTransformRow(Process_1_Data0 & input, SV1_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                
                if (!input.m_Speed.IsNull())
                {
                    exceptionIndex++;
                    output.m_SpeedPartition = scope_cast<int>((input.m_Speed / scope_cast<NativeNullable<double>>(10))) * 10;
                    exceptionIndex++;
                    
                    output.m_partialagg6__ = 1LL;
                    exceptionIndex++;
                    
    
                    return true;
                }

                return false;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Split_2_0[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Split_2_0[exceptionIndex]);
            }
        }

        OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };
    static const char * StringTable_Split_2_1 [] =
    {
        "Staying.HasValue && Staying < 4",
        "Timestamp.Hour",
        "1L",
        "(Speed == null ? 0 : Speed)",
        "(long)(Speed == null ? 0 : 1)",
        "\"*** After Last Expression ***\"",
    };

    // FilterTransform policy for splitter #1 of Split_2
    template<> 
    class RowTransformPolicy<typename Process_1_Data0, typename SV1_Extract_Split_out1, UID_Split_2_1> 
    {
    public:
        void Init(ManagedRow<Process_1_Data0> *)
        {
            // Nothing to do
        }

        bool FilterTransformRow(Process_1_Data0 & input, SV1_Extract_Split_out1 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                
                if (!input.m_Staying.IsNull() && input.m_Staying < scope_cast<NativeNullable<int>>(4))
                {
                    exceptionIndex++;
                    output.m_Expr_0 = input.m_Timestamp.Hour();
                    exceptionIndex++;
                    
                    output.m_partialagg7__ = 1LL;
                    exceptionIndex++;
                    
                    output.m_partialagg8__ = ((input.m_Speed.IsNull() ? scope_cast<NativeNullable<double>>(0) : input.m_Speed));
                    exceptionIndex++;
                    
                    output.m_partialagg9__ = scope_cast<__int64>(((input.m_Speed.IsNull() ? 0 : 1)));
                    exceptionIndex++;
                    
    
                    return true;
                }

                return false;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Split_2_1[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Split_2_1[exceptionIndex]);
            }
        }

        OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };
    static const char * StringTable_Split_2_2 [] =
    {
        "Staying.HasValue && Staying >= 4",
        "Timestamp.Hour",
        "1L",
        "(Speed == null ? 0 : Speed)",
        "(long)(Speed == null ? 0 : 1)",
        "\"*** After Last Expression ***\"",
    };

    // FilterTransform policy for splitter #2 of Split_2
    template<> 
    class RowTransformPolicy<typename Process_1_Data0, typename SV1_Extract_Split_out2, UID_Split_2_2> 
    {
    public:
        void Init(ManagedRow<Process_1_Data0> *)
        {
            // Nothing to do
        }

        bool FilterTransformRow(Process_1_Data0 & input, SV1_Extract_Split_out2 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                
                if (!input.m_Staying.IsNull() && input.m_Staying >= scope_cast<NativeNullable<int>>(4))
                {
                    exceptionIndex++;
                    output.m_Expr_0 = input.m_Timestamp.Hour();
                    exceptionIndex++;
                    
                    output.m_partialaggA__ = 1LL;
                    exceptionIndex++;
                    
                    output.m_partialaggB__ = ((input.m_Speed.IsNull() ? scope_cast<NativeNullable<double>>(0) : input.m_Speed));
                    exceptionIndex++;
                    
                    output.m_partialaggC__ = scope_cast<__int64>(((input.m_Speed.IsNull() ? 0 : 1)));
                    exceptionIndex++;
                    
    
                    return true;
                }

                return false;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Split_2_2[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Split_2_2[exceptionIndex]);
            }
        }

        OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };
    static const char * StringTable_Split_2_3 [] =
    {
        "Speed.HasValue && Speed >= 10",
        "TaxiID",
        "(Speed == null ? 0 : Speed)",
        "(long)(Speed == null ? 0 : 1)",
        "\"*** After Last Expression ***\"",
    };

    // FilterTransform policy for splitter #3 of Split_2
    template<> 
    class RowTransformPolicy<typename Process_1_Data0, typename SV1_Extract_Split_out3, UID_Split_2_3> 
    {
    public:
        void Init(ManagedRow<Process_1_Data0> *)
        {
            // Nothing to do
        }

        bool FilterTransformRow(Process_1_Data0 & input, SV1_Extract_Split_out3 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                
                if (!input.m_Speed.IsNull() && input.m_Speed >= scope_cast<NativeNullable<double>>(10))
                {
                    exceptionIndex++;
                    output.m_TaxiID = input.m_TaxiID;
                    exceptionIndex++;
                    
                    output.m_partialaggD__ = ((input.m_Speed.IsNull() ? scope_cast<NativeNullable<double>>(0) : input.m_Speed));
                    exceptionIndex++;
                    
                    output.m_partialaggE__ = scope_cast<__int64>(((input.m_Speed.IsNull() ? 0 : 1)));
                    exceptionIndex++;
                    
    
                    return true;
                }

                return false;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Split_2_3[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Split_2_3[exceptionIndex]);
            }
        }

        OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };


#if defined(COMPILE_NATIVE)
    template<> 
    class SplitPolicy<typename Process_1_Data0, UID_Split_2>
    {
        SIZE_T m_outputBufSize;
        int m_outputBufCnt;

        typedef SplitOutputterSentinel<Process_1_Data0> SplitOutputType_Split_2_4;
        SplitOutputType_Split_2_4 splitOutputter_Split_2_4;

        typedef SplitOutputter<SplitOutputType_Split_2_4, SV1_Extract_Split_out3, BinaryOutputPolicy<SV1_Extract_Split_out3>, BinaryOutputStream, UID_Split_2_3> SplitOutputType_Split_2_3;
        SplitOutputType_Split_2_3 splitOutputter_Split_2_3;


        typedef SplitOutputter<SplitOutputType_Split_2_3, SV1_Extract_Split_out2, BinaryOutputPolicy<SV1_Extract_Split_out2>, BinaryOutputStream, UID_Split_2_2> SplitOutputType_Split_2_2;
        SplitOutputType_Split_2_2 splitOutputter_Split_2_2;


        typedef SplitOutputter<SplitOutputType_Split_2_2, SV1_Extract_Split_out1, BinaryOutputPolicy<SV1_Extract_Split_out1>, BinaryOutputStream, UID_Split_2_1> SplitOutputType_Split_2_1;
        SplitOutputType_Split_2_1 splitOutputter_Split_2_1;


        typedef SplitOutputter<SplitOutputType_Split_2_1, SV1_Extract_Split_out0, BinaryOutputPolicy<SV1_Extract_Split_out0>, BinaryOutputStream, UID_Split_2_0> SplitOutputType_Split_2_0;
        SplitOutputType_Split_2_0 splitOutputter_Split_2_0;


    public:
        SplitPolicy(OutputFileInfo * outputFiles, SIZE_T outputBufSize, int outputBufCnt) : m_outputBufSize(outputBufSize), m_outputBufCnt(outputBufCnt),
            splitOutputter_Split_2_3(&splitOutputter_Split_2_4, outputFiles[3].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out3),
            splitOutputter_Split_2_2(&splitOutputter_Split_2_3, outputFiles[2].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out2),
            splitOutputter_Split_2_1(&splitOutputter_Split_2_2, outputFiles[1].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out1),
            splitOutputter_Split_2_0(&splitOutputter_Split_2_1, outputFiles[0].outputFileName, false, outputBufSize, outputBufCnt, UID_SV1_Extract_Split_out0)
        {
        }

        void Init()
        {
            splitOutputter_Split_2_0.Init(nullptr);
        }

        void Close()
        {
            splitOutputter_Split_2_0.Close();
        }

        void ProcessMetadata(PartitionMetadata * metadata)
        {
            splitOutputter_Split_2_0.ProcessMetadata(metadata);
        }

        void ProcessRow(Process_1_Data0 & input)
        {
            splitOutputter_Split_2_0.ProcessRow(input);
        }

        void WriteRuntimeStats(TreeNode & root)
        {
            splitOutputter_Split_2_0.WriteRuntimeStats(root);
        }

        LONGLONG GetTotalIoWaitTime()
        {
            return splitOutputter_Split_2_0.GetTotalIoWaitTime();
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            return splitOutputter_Split_2_0.GetOperatorRequirements()
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt)
	.AddMemoryForOutputUStreams(1, m_outputBufSize, m_outputBufCnt);
        }

        void FlushOutput(bool forcePersistent = false)
        {
            splitOutputter_Split_2_0.FlushOutput(forcePersistent);
        }

        void DoScopeCEPCheckpoint(BinaryOutputStream & output)
        {
            splitOutputter_Split_2_0.DoScopeCEPCheckpoint(output);
        }

        void LoadScopeCEPCheckpoint(BinaryInputStream & input)
        {
            splitOutputter_Split_2_0.LoadScopeCEPCheckpoint(input);
        }

    };

#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_Split_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef ScopeExtractor<CosmosInput, Extract_0_Data0> ExtractorType1_SV1_Extract_Split;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract_Split>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract_Split>[inputCnt - 0]);
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract_Split(ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput,Extract_0_Data0,UID_Extract_0, 0>(argv, argc), inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, nullptr, UID_Extract_0));
        }
        ExtractorType1_SV1_Extract_Split ** extractor_0 = (ExtractorType1_SV1_Extract_Split **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG)inputCnt - 0;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV1_Extract_Split, Extract_0_Data0, Process_1_Data0, UID_Process_1> FilterTransformerType_Process_1;
        // Allocate memory for the operator array
        unique_ptr<unique_ptr<FilterTransformerType_Process_1>[]> filterTransformer_Process_1_array(new unique_ptr<FilterTransformerType_Process_1>[extractor_0_count]);
        
        // Construct operator objects
        for(ULONG i = 0; i < extractor_0_count; i++)
        {
            filterTransformer_Process_1_array[i].reset(new FilterTransformerType_Process_1(extractor_0[i], UID_Process_1)); 
        }
        
        FilterTransformerType_Process_1 ** filterTransformer_Process_1 = (FilterTransformerType_Process_1 **)filterTransformer_Process_1_array.get();
        ULONG filterTransformer_Process_1_count = extractor_0_count;
        // Merge streams N->1
        typedef ParallelUnionAll<FilterTransformerType_Process_1, Process_1_Data0, IsNativeOnlyVertex> UnionAllType_Process_1_Split_2_connector;
        unique_ptr<UnionAllType_Process_1_Split_2_connector> unionall_Process_1_Split_2_connector_ptr(new UnionAllType_Process_1_Split_2_connector(filterTransformer_Process_1,filterTransformer_Process_1_count,false,UID_ParallelUnionAll_Process_1));
        UnionAllType_Process_1_Split_2_connector * unionall_Process_1_Split_2_connector = unionall_Process_1_Split_2_connector_ptr.get();
        ULONG unionall_Process_1_Split_2_connector_count = 1;
        // Define splitter type

        typedef Splitter<UnionAllType_Process_1_Split_2_connector, Process_1_Data0, false, UID_Split_2> SplitterType_Split_2;

        // Construct operator and initialize it.
        unique_ptr<SplitterType_Split_2> splitter_Split_2_ptr (new SplitterType_Split_2(unionall_Process_1_Split_2_connector, outputs, x_outputBufSize, x_outputBufCnt, UID_Split_2));
        SplitterType_Split_2 * splitter_Split_2 = splitter_Split_2_ptr.get();
        try
        {
            // Init operator chain
            splitter_Split_2->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            int row;
            splitter_Split_2->GetNextRow(row);
    
            // Close operator chain
            splitter_Split_2->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        splitter_Split_2->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeExtractorManaged<CosmosInput,Extract_0_Data0> * ScopeEngine::ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput, Extract_0_Data0, UID_Extract_0, 0>(std::string * argv, int argc);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract_Split
#pragma region SV2_Process
#if defined(COMPILE_SV2_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out0,UID_Process_5>
    {
    public:
        struct KeyStruct
        {
            int m_SpeedPartition;

            KeyStruct(SV1_Extract_Split_out0 & c) :
                m_SpeedPartition(c.m_SpeedPartition)
            {
            }

            KeyStruct(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SpeedPartition(const_cast<SV1_Extract_Split_out0&>(c).m_SpeedPartition)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SpeedPartition(c.m_SpeedPartition)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SpeedPartition(const_cast<KeyStruct&>(c).m_SpeedPartition)
            {
            }

            KeyStruct() :
                m_SpeedPartition(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSpeedPartition:\t" << row.m_SpeedPartition << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SpeedPartition, key.m_SpeedPartition)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out0 * n1, SV1_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SpeedPartition, (*n2).m_SpeedPartition)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename SV1_Extract_Split_out0, typename SV1_Extract_Split_out0, UID_Process_5> 
    {
    public:
        
        AggregationPolicy()
            :
            m_SpeedPartition_SpeedPartition_FIRST("FIRST_SpeedPartition_SpeedPartition"),
            m_partialagg6___partialagg6___UNCHECKED_SUM("UNCHECKED_SUM_partialagg6___partialagg6__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<SV1_Extract_Split_out0,UID_Process_5>::KeyType * input, SV1_Extract_Split_out0 * output)
        {
            (*output).m_SpeedPartition = (*input).m_SpeedPartition;
        }

        // process input row, called for each row in key range
        void AddRow(SV1_Extract_Split_out0 * input)
        {
            m_SpeedPartition_SpeedPartition_FIRST.Add((*input).m_SpeedPartition);
            m_partialagg6___partialagg6___UNCHECKED_SUM.Add((*input).m_partialagg6__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(SV1_Extract_Split_out0 * output)
        {
            m_SpeedPartition_SpeedPartition_FIRST.Aggregate(&(*output).m_SpeedPartition);
            m_partialagg6___partialagg6___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg6__);
        }

        // write aggregated data
        void GetValue(SV1_Extract_Split_out0 * output)
        {
            m_SpeedPartition_SpeedPartition_FIRST.GetValue(&(*output).m_SpeedPartition);
            m_partialagg6___partialagg6___UNCHECKED_SUM.GetValue(&(*output).m_partialagg6__);
        }

        // reset for new key
        void Reset()
        {
            m_SpeedPartition_SpeedPartition_FIRST.Reset();
            m_partialagg6___partialagg6___UNCHECKED_SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_SpeedPartition_SpeedPartition_FIRST.WriteRuntimeStats(root);
            m_partialagg6___partialagg6___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_SpeedPartition_SpeedPartition_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg6___partialagg6___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_SpeedPartition_SpeedPartition_FIRST;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg6___partialagg6___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out0,UID_Process_4>
    {
    public:
        struct KeyStruct
        {
            int m_SpeedPartition;

            KeyStruct(SV1_Extract_Split_out0 & c) :
                m_SpeedPartition(c.m_SpeedPartition)
            {
            }

            KeyStruct(const SV1_Extract_Split_out0 & c, IncrementalAllocator * alloc) :
                m_SpeedPartition(const_cast<SV1_Extract_Split_out0&>(c).m_SpeedPartition)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_SpeedPartition(c.m_SpeedPartition)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_SpeedPartition(const_cast<KeyStruct&>(c).m_SpeedPartition)
            {
            }

            KeyStruct() :
                m_SpeedPartition(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tSpeedPartition:\t" << row.m_SpeedPartition << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_SpeedPartition, key.m_SpeedPartition)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out0 * n1, SV1_Extract_Split_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_SpeedPartition, (*n2).m_SpeedPartition)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_SpeedPartition);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out0, typename SV1_Extract_Split_out0, UID_Process_3>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out0 & input, SV1_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<SV1_Extract_Split_out0, SV1_Extract_Split_out0, UID_Process_3>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_3& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_SpeedPartition);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_3& left, const HashAggregatorKey_Process_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SpeedPartition, right.m_SpeedPartition)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_SpeedPartition);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const SV1_Extract_Split_out0& left, const HashAggregatorKey_Process_3& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_SpeedPartition, right.m_SpeedPartition)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_3 KeySchema;
        typedef HashAggregatorState_Process_3 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3409969150ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const SV1_Extract_Split_out0 & row, KeySchema & key)
        {
           key.m_SpeedPartition = row.m_SpeedPartition;
        }

        static void DeepCopyRowToKey(const SV1_Extract_Split_out0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_SpeedPartition = row.m_SpeedPartition;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const SV1_Extract_Split_out0 & row, ValueSchema & value)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg6__, row.m_partialagg6__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const SV1_Extract_Split_out0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg6__, row.m_partialagg6__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const SV1_Extract_Split_out0 & update, IncrementalAllocator* alloc)
        {
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg6__, update.m_partialagg6__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, SV1_Extract_Split_out0 & row)
        {
            row.m_SpeedPartition = key.m_SpeedPartition;
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg6__, &row.m_partialagg6__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out0, typename SV1_Extract_Split_out0, UID_Process_5>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out0 & input, SV1_Extract_Split_out0 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_6 [] =
    {
        "SpeedPartition",
        "(long?)partialagg6__",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out0, typename Process_6_Data0, UID_Process_6>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out0 & input, Process_6_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_Speed = input.m_SpeedPartition;
                exceptionIndex++;
                output.m_PointCount = scope_cast<NativeNullable<__int64>>(input.m_partialagg6__);
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_6[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_6[exceptionIndex]);
            }
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_6_Data0, UID_SV2_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output, Process_6_Data0 & row)
        {
            output->Write<int,false>(row.m_Speed);
            output->WriteDelimiter();
            if (!row.m_PointCount.IsNull())
            {
                output->Write<__int64,false>(row.m_PointCount);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output)
        {
            output->Write<string,true>(FString("Speed", 5));
            output->WriteDelimiter();
            output->Write<string,true>(FString("PointCount", 10));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out0, BinaryExtractPolicy<SV1_Extract_Split_out0>, BinaryInputStream> ExtractorType1_SV2_Process;        
        unique_ptr<ExtractorType1_SV2_Process> extractor_0_ptr= make_unique<ExtractorType1_SV2_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out0);
        ExtractorType1_SV2_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ExtractorType1_SV2_Process, SV1_Extract_Split_out0, SV1_Extract_Split_out0, UID_Process_3> LocalHashAggregatorType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_3> localHashAggregator_Process_3_ptr (new LocalHashAggregatorType_Process_3(extractor_0, UID_Process_3));
        LocalHashAggregatorType_Process_3 * localHashAggregator_Process_3 = localHashAggregator_Process_3_ptr.get();
        ULONG localHashAggregator_Process_3_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV1_Extract_Split_out0>> delegate_localHashAggregator_Process_3_ptr (new OperatorDelegate<SV1_Extract_Split_out0>(OperatorDelegate<SV1_Extract_Split_out0>::FromOperator(localHashAggregator_Process_3)));
        OperatorDelegate<SV1_Extract_Split_out0> * delegate_localHashAggregator_Process_3 = delegate_localHashAggregator_Process_3_ptr.get();
        ULONG delegate_localHashAggregator_Process_3_count = 1;
        // Define sorter type
        typedef Sorter<SV1_Extract_Split_out0> SorterType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_4> sorter_Process_4_ptr (new SorterType_Process_4(delegate_localHashAggregator_Process_3, &StdSort<SV1_Extract_Split_out0>::Sort<KeyComparePolicy<SV1_Extract_Split_out0, UID_Process_4>, (sizeof(SV1_Extract_Split_out0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV1_Extract_Split_out0>::CreateDelegate<UID_Process_4>(), false, 2441084926 /*memoryQuota*/, UID_Process_4));
        SorterType_Process_4 * sorter_Process_4 = sorter_Process_4_ptr.get();
        ULONG sorter_Process_4_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_4, SV1_Extract_Split_out0, SV1_Extract_Split_out0, UID_Process_5> StreamAggregatorType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_5> streamAggregator_Process_5_ptr (new StreamAggregatorType_Process_5(sorter_Process_4, false, UID_Process_5));
        StreamAggregatorType_Process_5 * streamAggregator_Process_5 = streamAggregator_Process_5_ptr.get();
        ULONG streamAggregator_Process_5_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_5, SV1_Extract_Split_out0, Process_6_Data0, UID_Process_6> FilterTransformerType_Process_6;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_6> filterTransformer_Process_6_ptr (new FilterTransformerType_Process_6(streamAggregator_Process_5, UID_Process_6));
        FilterTransformerType_Process_6 * filterTransformer_Process_6 = filterTransformer_Process_6_ptr.get();
        ULONG filterTransformer_Process_6_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_6, Process_6_Data0, TextOutputPolicy<Process_6_Data0, UID_SV2_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>>, false> OutputerType2_SV2_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Process> outputer_SV2_Process_out0_ptr(new OutputerType2_SV2_Process(filterTransformer_Process_6, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV2_Process_out0));
        OutputerType2_SV2_Process * outputer_SV2_Process_out0 = outputer_SV2_Process_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV2_Process_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_6_Data0 row;
            outputer_SV2_Process_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV2_Process_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV2_Process
#pragma region SV3_Process
#if defined(COMPILE_SV3_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out1,UID_Process_10>
    {
    public:
        struct KeyStruct
        {
            int m_Expr_0;

            KeyStruct(SV1_Extract_Split_out1 & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<SV1_Extract_Split_out1&>(c).m_Expr_0)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<KeyStruct&>(c).m_Expr_0)
            {
            }

            KeyStruct() :
                m_Expr_0(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Expr_0, key.m_Expr_0)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out1 * n1, SV1_Extract_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Expr_0, (*n2).m_Expr_0)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename SV1_Extract_Split_out1, typename SV1_Extract_Split_out1, UID_Process_10> 
    {
    public:
        
        AggregationPolicy()
            :
            m_Expr_0_Expr_0_FIRST("FIRST_Expr_0_Expr_0"),
            m_partialagg7___partialagg7___UNCHECKED_SUM("UNCHECKED_SUM_partialagg7___partialagg7__"),
            m_partialagg8___partialagg8___SUM("SUM_partialagg8___partialagg8__"),
            m_partialagg9___partialagg9___UNCHECKED_SUM("UNCHECKED_SUM_partialagg9___partialagg9__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<SV1_Extract_Split_out1,UID_Process_10>::KeyType * input, SV1_Extract_Split_out1 * output)
        {
            (*output).m_Expr_0 = (*input).m_Expr_0;
        }

        // process input row, called for each row in key range
        void AddRow(SV1_Extract_Split_out1 * input)
        {
            m_Expr_0_Expr_0_FIRST.Add((*input).m_Expr_0);
            m_partialagg7___partialagg7___UNCHECKED_SUM.Add((*input).m_partialagg7__);
            m_partialagg8___partialagg8___SUM.Add((*input).m_partialagg8__);
            m_partialagg9___partialagg9___UNCHECKED_SUM.Add((*input).m_partialagg9__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(SV1_Extract_Split_out1 * output)
        {
            m_Expr_0_Expr_0_FIRST.Aggregate(&(*output).m_Expr_0);
            m_partialagg7___partialagg7___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg7__);
            m_partialagg8___partialagg8___SUM.Aggregate(&(*output).m_partialagg8__);
            m_partialagg9___partialagg9___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg9__);
        }

        // write aggregated data
        void GetValue(SV1_Extract_Split_out1 * output)
        {
            m_Expr_0_Expr_0_FIRST.GetValue(&(*output).m_Expr_0);
            m_partialagg7___partialagg7___UNCHECKED_SUM.GetValue(&(*output).m_partialagg7__);
            m_partialagg8___partialagg8___SUM.GetValue(&(*output).m_partialagg8__);
            m_partialagg9___partialagg9___UNCHECKED_SUM.GetValue(&(*output).m_partialagg9__);
        }

        // reset for new key
        void Reset()
        {
            m_Expr_0_Expr_0_FIRST.Reset();
            m_partialagg7___partialagg7___UNCHECKED_SUM.Reset();
            m_partialagg8___partialagg8___SUM.Reset();
            m_partialagg9___partialagg9___UNCHECKED_SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_Expr_0_Expr_0_FIRST.WriteRuntimeStats(root);
            m_partialagg7___partialagg7___UNCHECKED_SUM.WriteRuntimeStats(root);
            m_partialagg8___partialagg8___SUM.WriteRuntimeStats(root);
            m_partialagg9___partialagg9___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_Expr_0_Expr_0_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg7___partialagg7___UNCHECKED_SUM.GetOperatorRequirements());
            result.Add(m_partialagg8___partialagg8___SUM.GetOperatorRequirements());
            result.Add(m_partialagg9___partialagg9___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_Expr_0_Expr_0_FIRST;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg7___partialagg7___UNCHECKED_SUM;
        Aggregate_SUM<NativeNullable<double>,NativeNullable<double>> m_partialagg8___partialagg8___SUM;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg9___partialagg9___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out1,UID_Process_9>
    {
    public:
        struct KeyStruct
        {
            int m_Expr_0;

            KeyStruct(SV1_Extract_Split_out1 & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const SV1_Extract_Split_out1 & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<SV1_Extract_Split_out1&>(c).m_Expr_0)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<KeyStruct&>(c).m_Expr_0)
            {
            }

            KeyStruct() :
                m_Expr_0(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out1 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Expr_0, key.m_Expr_0)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out1 * n1, SV1_Extract_Split_out1 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Expr_0, (*n2).m_Expr_0)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out1 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Expr_0);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out1 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out1, typename SV1_Extract_Split_out1, UID_Process_8>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out1 & input, SV1_Extract_Split_out1 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<SV1_Extract_Split_out1, SV1_Extract_Split_out1, UID_Process_8>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_8& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_Expr_0);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_8& left, const HashAggregatorKey_Process_8& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Expr_0, right.m_Expr_0)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out1& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Expr_0);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const SV1_Extract_Split_out1& left, const HashAggregatorKey_Process_8& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Expr_0, right.m_Expr_0)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_8 KeySchema;
        typedef HashAggregatorState_Process_8 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3409969150ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const SV1_Extract_Split_out1 & row, KeySchema & key)
        {
           key.m_Expr_0 = row.m_Expr_0;
        }

        static void DeepCopyRowToKey(const SV1_Extract_Split_out1 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_Expr_0 = row.m_Expr_0;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const SV1_Extract_Split_out1 & row, ValueSchema & value)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg7__, row.m_partialagg7__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg8__, value.m_SUM_fEmpty_partialagg8__, row.m_partialagg8__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg9__, row.m_partialagg9__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const SV1_Extract_Split_out1 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg7__, row.m_partialagg7__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg8__, value.m_SUM_fEmpty_partialagg8__, row.m_partialagg8__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg9__, row.m_partialagg9__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const SV1_Extract_Split_out1 & update, IncrementalAllocator* alloc)
        {
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg7__, update.m_partialagg7__);
                Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::UpdateState(state.m_SUM_partialagg8__, state.m_SUM_fEmpty_partialagg8__, update.m_partialagg8__);
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg9__, update.m_partialagg9__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, SV1_Extract_Split_out1 & row)
        {
            row.m_Expr_0 = key.m_Expr_0;
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg7__, &row.m_partialagg7__);
            Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::GetAggregatedValue(value.m_SUM_partialagg8__, value.m_SUM_fEmpty_partialagg8__, &row.m_partialagg8__);
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg9__, &row.m_partialagg9__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out1, typename SV1_Extract_Split_out1, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out1 & input, SV1_Extract_Split_out1 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_11 [] =
    {
        "Expr_0",
        "(long?)partialagg7__",
        "partialagg9__ == 0 ? (double?)null : partialagg8__ / partialagg9__",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out1, typename Process_11_Data0, UID_Process_11>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out1 & input, Process_11_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_Hour = input.m_Expr_0;
                exceptionIndex++;
                output.m_HourCount = scope_cast<NativeNullable<__int64>>(input.m_partialagg7__);
                exceptionIndex++;
                output.m_AvgSpeed = (input.m_partialagg9__ == scope_cast<__int64>(0) ? scope_cast<NativeNullable<double>>(__nullptr) : input.m_partialagg8__ / scope_cast<NativeNullable<double>>(input.m_partialagg9__));
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_11[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_11[exceptionIndex]);
            }
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_11_Data0, UID_SV3_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output, Process_11_Data0 & row)
        {
            output->Write<int,false>(row.m_Hour);
            output->WriteDelimiter();
            if (!row.m_HourCount.IsNull())
            {
                output->Write<__int64,false>(row.m_HourCount);
            }
            output->WriteDelimiter();
            if (!row.m_AvgSpeed.IsNull())
            {
                output->Write<double,false>(row.m_AvgSpeed);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output)
        {
            output->Write<string,true>(FString("Hour", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("HourCount", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("AvgSpeed", 8));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out1, BinaryExtractPolicy<SV1_Extract_Split_out1>, BinaryInputStream> ExtractorType1_SV3_Process;        
        unique_ptr<ExtractorType1_SV3_Process> extractor_0_ptr= make_unique<ExtractorType1_SV3_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out1);
        ExtractorType1_SV3_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ExtractorType1_SV3_Process, SV1_Extract_Split_out1, SV1_Extract_Split_out1, UID_Process_8> LocalHashAggregatorType_Process_8;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_8> localHashAggregator_Process_8_ptr (new LocalHashAggregatorType_Process_8(extractor_0, UID_Process_8));
        LocalHashAggregatorType_Process_8 * localHashAggregator_Process_8 = localHashAggregator_Process_8_ptr.get();
        ULONG localHashAggregator_Process_8_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV1_Extract_Split_out1>> delegate_localHashAggregator_Process_8_ptr (new OperatorDelegate<SV1_Extract_Split_out1>(OperatorDelegate<SV1_Extract_Split_out1>::FromOperator(localHashAggregator_Process_8)));
        OperatorDelegate<SV1_Extract_Split_out1> * delegate_localHashAggregator_Process_8 = delegate_localHashAggregator_Process_8_ptr.get();
        ULONG delegate_localHashAggregator_Process_8_count = 1;
        // Define sorter type
        typedef Sorter<SV1_Extract_Split_out1> SorterType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_9> sorter_Process_9_ptr (new SorterType_Process_9(delegate_localHashAggregator_Process_8, &StdSort<SV1_Extract_Split_out1>::Sort<KeyComparePolicy<SV1_Extract_Split_out1, UID_Process_9>, (sizeof(SV1_Extract_Split_out1)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV1_Extract_Split_out1>::CreateDelegate<UID_Process_9>(), false, 2441084926 /*memoryQuota*/, UID_Process_9));
        SorterType_Process_9 * sorter_Process_9 = sorter_Process_9_ptr.get();
        ULONG sorter_Process_9_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_9, SV1_Extract_Split_out1, SV1_Extract_Split_out1, UID_Process_10> StreamAggregatorType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_10> streamAggregator_Process_10_ptr (new StreamAggregatorType_Process_10(sorter_Process_9, false, UID_Process_10));
        StreamAggregatorType_Process_10 * streamAggregator_Process_10 = streamAggregator_Process_10_ptr.get();
        ULONG streamAggregator_Process_10_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_10, SV1_Extract_Split_out1, Process_11_Data0, UID_Process_11> FilterTransformerType_Process_11;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_11> filterTransformer_Process_11_ptr (new FilterTransformerType_Process_11(streamAggregator_Process_10, UID_Process_11));
        FilterTransformerType_Process_11 * filterTransformer_Process_11 = filterTransformer_Process_11_ptr.get();
        ULONG filterTransformer_Process_11_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_11, Process_11_Data0, TextOutputPolicy<Process_11_Data0, UID_SV3_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>>, false> OutputerType2_SV3_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV3_Process> outputer_SV3_Process_out0_ptr(new OutputerType2_SV3_Process(filterTransformer_Process_11, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV3_Process_out0));
        OutputerType2_SV3_Process * outputer_SV3_Process_out0 = outputer_SV3_Process_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV3_Process_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_11_Data0 row;
            outputer_SV3_Process_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV3_Process_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV3_Process
#pragma region SV4_Process
#if defined(COMPILE_SV4_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out2,UID_Process_15>
    {
    public:
        struct KeyStruct
        {
            int m_Expr_0;

            KeyStruct(SV1_Extract_Split_out2 & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const SV1_Extract_Split_out2 & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<SV1_Extract_Split_out2&>(c).m_Expr_0)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<KeyStruct&>(c).m_Expr_0)
            {
            }

            KeyStruct() :
                m_Expr_0(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out2 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Expr_0, key.m_Expr_0)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out2 * n1, SV1_Extract_Split_out2 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Expr_0, (*n2).m_Expr_0)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename SV1_Extract_Split_out2, typename SV1_Extract_Split_out2, UID_Process_15> 
    {
    public:
        
        AggregationPolicy()
            :
            m_Expr_0_Expr_0_FIRST("FIRST_Expr_0_Expr_0"),
            m_partialaggA___partialaggA___UNCHECKED_SUM("UNCHECKED_SUM_partialaggA___partialaggA__"),
            m_partialaggB___partialaggB___SUM("SUM_partialaggB___partialaggB__"),
            m_partialaggC___partialaggC___UNCHECKED_SUM("UNCHECKED_SUM_partialaggC___partialaggC__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<SV1_Extract_Split_out2,UID_Process_15>::KeyType * input, SV1_Extract_Split_out2 * output)
        {
            (*output).m_Expr_0 = (*input).m_Expr_0;
        }

        // process input row, called for each row in key range
        void AddRow(SV1_Extract_Split_out2 * input)
        {
            m_Expr_0_Expr_0_FIRST.Add((*input).m_Expr_0);
            m_partialaggA___partialaggA___UNCHECKED_SUM.Add((*input).m_partialaggA__);
            m_partialaggB___partialaggB___SUM.Add((*input).m_partialaggB__);
            m_partialaggC___partialaggC___UNCHECKED_SUM.Add((*input).m_partialaggC__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(SV1_Extract_Split_out2 * output)
        {
            m_Expr_0_Expr_0_FIRST.Aggregate(&(*output).m_Expr_0);
            m_partialaggA___partialaggA___UNCHECKED_SUM.Aggregate(&(*output).m_partialaggA__);
            m_partialaggB___partialaggB___SUM.Aggregate(&(*output).m_partialaggB__);
            m_partialaggC___partialaggC___UNCHECKED_SUM.Aggregate(&(*output).m_partialaggC__);
        }

        // write aggregated data
        void GetValue(SV1_Extract_Split_out2 * output)
        {
            m_Expr_0_Expr_0_FIRST.GetValue(&(*output).m_Expr_0);
            m_partialaggA___partialaggA___UNCHECKED_SUM.GetValue(&(*output).m_partialaggA__);
            m_partialaggB___partialaggB___SUM.GetValue(&(*output).m_partialaggB__);
            m_partialaggC___partialaggC___UNCHECKED_SUM.GetValue(&(*output).m_partialaggC__);
        }

        // reset for new key
        void Reset()
        {
            m_Expr_0_Expr_0_FIRST.Reset();
            m_partialaggA___partialaggA___UNCHECKED_SUM.Reset();
            m_partialaggB___partialaggB___SUM.Reset();
            m_partialaggC___partialaggC___UNCHECKED_SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_Expr_0_Expr_0_FIRST.WriteRuntimeStats(root);
            m_partialaggA___partialaggA___UNCHECKED_SUM.WriteRuntimeStats(root);
            m_partialaggB___partialaggB___SUM.WriteRuntimeStats(root);
            m_partialaggC___partialaggC___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_Expr_0_Expr_0_FIRST.GetOperatorRequirements());
            result.Add(m_partialaggA___partialaggA___UNCHECKED_SUM.GetOperatorRequirements());
            result.Add(m_partialaggB___partialaggB___SUM.GetOperatorRequirements());
            result.Add(m_partialaggC___partialaggC___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_Expr_0_Expr_0_FIRST;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialaggA___partialaggA___UNCHECKED_SUM;
        Aggregate_SUM<NativeNullable<double>,NativeNullable<double>> m_partialaggB___partialaggB___SUM;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialaggC___partialaggC___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out2,UID_Process_14>
    {
    public:
        struct KeyStruct
        {
            int m_Expr_0;

            KeyStruct(SV1_Extract_Split_out2 & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const SV1_Extract_Split_out2 & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<SV1_Extract_Split_out2&>(c).m_Expr_0)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Expr_0(c.m_Expr_0)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Expr_0(const_cast<KeyStruct&>(c).m_Expr_0)
            {
            }

            KeyStruct() :
                m_Expr_0(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tExpr_0:\t" << row.m_Expr_0 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out2 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Expr_0, key.m_Expr_0)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out2 * n1, SV1_Extract_Split_out2 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Expr_0, (*n2).m_Expr_0)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out2 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Expr_0);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out2 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out2, typename SV1_Extract_Split_out2, UID_Process_13>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out2 & input, SV1_Extract_Split_out2 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<SV1_Extract_Split_out2, SV1_Extract_Split_out2, UID_Process_13>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_8& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_Expr_0);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_8& left, const HashAggregatorKey_Process_8& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Expr_0, right.m_Expr_0)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out2& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Expr_0);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const SV1_Extract_Split_out2& left, const HashAggregatorKey_Process_8& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Expr_0, right.m_Expr_0)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_8 KeySchema;
        typedef HashAggregatorState_Process_13 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3409969150ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const SV1_Extract_Split_out2 & row, KeySchema & key)
        {
           key.m_Expr_0 = row.m_Expr_0;
        }

        static void DeepCopyRowToKey(const SV1_Extract_Split_out2 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_Expr_0 = row.m_Expr_0;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const SV1_Extract_Split_out2 & row, ValueSchema & value)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggA__, row.m_partialaggA__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialaggB__, value.m_SUM_fEmpty_partialaggB__, row.m_partialaggB__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggC__, row.m_partialaggC__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const SV1_Extract_Split_out2 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggA__, row.m_partialaggA__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialaggB__, value.m_SUM_fEmpty_partialaggB__, row.m_partialaggB__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggC__, row.m_partialaggC__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const SV1_Extract_Split_out2 & update, IncrementalAllocator* alloc)
        {
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialaggA__, update.m_partialaggA__);
                Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::UpdateState(state.m_SUM_partialaggB__, state.m_SUM_fEmpty_partialaggB__, update.m_partialaggB__);
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialaggC__, update.m_partialaggC__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, SV1_Extract_Split_out2 & row)
        {
            row.m_Expr_0 = key.m_Expr_0;
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialaggA__, &row.m_partialaggA__);
            Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::GetAggregatedValue(value.m_SUM_partialaggB__, value.m_SUM_fEmpty_partialaggB__, &row.m_partialaggB__);
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialaggC__, &row.m_partialaggC__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out2, typename SV1_Extract_Split_out2, UID_Process_15>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out2 & input, SV1_Extract_Split_out2 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_16 [] =
    {
        "Expr_0",
        "(long?)partialaggA__",
        "partialaggC__ == 0 ? (double?)null : partialaggB__ / partialaggC__",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out2, typename Process_11_Data0, UID_Process_16>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out2 & input, Process_11_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_Hour = input.m_Expr_0;
                exceptionIndex++;
                output.m_HourCount = scope_cast<NativeNullable<__int64>>(input.m_partialaggA__);
                exceptionIndex++;
                output.m_AvgSpeed = (input.m_partialaggC__ == scope_cast<__int64>(0) ? scope_cast<NativeNullable<double>>(__nullptr) : input.m_partialaggB__ / scope_cast<NativeNullable<double>>(input.m_partialaggC__));
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_16[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_16[exceptionIndex]);
            }
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_11_Data0, UID_SV4_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output, Process_11_Data0 & row)
        {
            output->Write<int,false>(row.m_Hour);
            output->WriteDelimiter();
            if (!row.m_HourCount.IsNull())
            {
                output->Write<__int64,false>(row.m_HourCount);
            }
            output->WriteDelimiter();
            if (!row.m_AvgSpeed.IsNull())
            {
                output->Write<double,false>(row.m_AvgSpeed);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output)
        {
            output->Write<string,true>(FString("Hour", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("HourCount", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("AvgSpeed", 8));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV4_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out2, BinaryExtractPolicy<SV1_Extract_Split_out2>, BinaryInputStream> ExtractorType1_SV4_Process;        
        unique_ptr<ExtractorType1_SV4_Process> extractor_0_ptr= make_unique<ExtractorType1_SV4_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out2);
        ExtractorType1_SV4_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ExtractorType1_SV4_Process, SV1_Extract_Split_out2, SV1_Extract_Split_out2, UID_Process_13> LocalHashAggregatorType_Process_13;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_13> localHashAggregator_Process_13_ptr (new LocalHashAggregatorType_Process_13(extractor_0, UID_Process_13));
        LocalHashAggregatorType_Process_13 * localHashAggregator_Process_13 = localHashAggregator_Process_13_ptr.get();
        ULONG localHashAggregator_Process_13_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV1_Extract_Split_out2>> delegate_localHashAggregator_Process_13_ptr (new OperatorDelegate<SV1_Extract_Split_out2>(OperatorDelegate<SV1_Extract_Split_out2>::FromOperator(localHashAggregator_Process_13)));
        OperatorDelegate<SV1_Extract_Split_out2> * delegate_localHashAggregator_Process_13 = delegate_localHashAggregator_Process_13_ptr.get();
        ULONG delegate_localHashAggregator_Process_13_count = 1;
        // Define sorter type
        typedef Sorter<SV1_Extract_Split_out2> SorterType_Process_14;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_14> sorter_Process_14_ptr (new SorterType_Process_14(delegate_localHashAggregator_Process_13, &StdSort<SV1_Extract_Split_out2>::Sort<KeyComparePolicy<SV1_Extract_Split_out2, UID_Process_14>, (sizeof(SV1_Extract_Split_out2)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV1_Extract_Split_out2>::CreateDelegate<UID_Process_14>(), false, 2441084926 /*memoryQuota*/, UID_Process_14));
        SorterType_Process_14 * sorter_Process_14 = sorter_Process_14_ptr.get();
        ULONG sorter_Process_14_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_14, SV1_Extract_Split_out2, SV1_Extract_Split_out2, UID_Process_15> StreamAggregatorType_Process_15;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_15> streamAggregator_Process_15_ptr (new StreamAggregatorType_Process_15(sorter_Process_14, false, UID_Process_15));
        StreamAggregatorType_Process_15 * streamAggregator_Process_15 = streamAggregator_Process_15_ptr.get();
        ULONG streamAggregator_Process_15_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_15, SV1_Extract_Split_out2, Process_11_Data0, UID_Process_16> FilterTransformerType_Process_16;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_16> filterTransformer_Process_16_ptr (new FilterTransformerType_Process_16(streamAggregator_Process_15, UID_Process_16));
        FilterTransformerType_Process_16 * filterTransformer_Process_16 = filterTransformer_Process_16_ptr.get();
        ULONG filterTransformer_Process_16_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_16, Process_11_Data0, TextOutputPolicy<Process_11_Data0, UID_SV4_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>>, false> OutputerType2_SV4_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV4_Process> outputer_SV4_Process_out0_ptr(new OutputerType2_SV4_Process(filterTransformer_Process_16, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV4_Process_out0));
        OutputerType2_SV4_Process * outputer_SV4_Process_out0 = outputer_SV4_Process_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV4_Process_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_11_Data0 row;
            outputer_SV4_Process_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV4_Process_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV4_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV4_Process
#pragma region SV5_Process
#if defined(COMPILE_SV5_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out3,UID_Process_20>
    {
    public:
        struct KeyStruct
        {
            int m_TaxiID;

            KeyStruct(SV1_Extract_Split_out3 & c) :
                m_TaxiID(c.m_TaxiID)
            {
            }

            KeyStruct(const SV1_Extract_Split_out3 & c, IncrementalAllocator * alloc) :
                m_TaxiID(const_cast<SV1_Extract_Split_out3&>(c).m_TaxiID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_TaxiID(c.m_TaxiID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_TaxiID(const_cast<KeyStruct&>(c).m_TaxiID)
            {
            }

            KeyStruct() :
                m_TaxiID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tTaxiID:\t" << row.m_TaxiID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out3 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_TaxiID, key.m_TaxiID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out3 * n1, SV1_Extract_Split_out3 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_TaxiID, (*n2).m_TaxiID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename SV1_Extract_Split_out3, typename SV1_Extract_Split_out3, UID_Process_20> 
    {
    public:
        
        AggregationPolicy()
            :
            m_TaxiID_TaxiID_FIRST("FIRST_TaxiID_TaxiID"),
            m_partialaggD___partialaggD___SUM("SUM_partialaggD___partialaggD__"),
            m_partialaggE___partialaggE___UNCHECKED_SUM("UNCHECKED_SUM_partialaggE___partialaggE__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<SV1_Extract_Split_out3,UID_Process_20>::KeyType * input, SV1_Extract_Split_out3 * output)
        {
            (*output).m_TaxiID = (*input).m_TaxiID;
        }

        // process input row, called for each row in key range
        void AddRow(SV1_Extract_Split_out3 * input)
        {
            m_TaxiID_TaxiID_FIRST.Add((*input).m_TaxiID);
            m_partialaggD___partialaggD___SUM.Add((*input).m_partialaggD__);
            m_partialaggE___partialaggE___UNCHECKED_SUM.Add((*input).m_partialaggE__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(SV1_Extract_Split_out3 * output)
        {
            m_TaxiID_TaxiID_FIRST.Aggregate(&(*output).m_TaxiID);
            m_partialaggD___partialaggD___SUM.Aggregate(&(*output).m_partialaggD__);
            m_partialaggE___partialaggE___UNCHECKED_SUM.Aggregate(&(*output).m_partialaggE__);
        }

        // write aggregated data
        void GetValue(SV1_Extract_Split_out3 * output)
        {
            m_TaxiID_TaxiID_FIRST.GetValue(&(*output).m_TaxiID);
            m_partialaggD___partialaggD___SUM.GetValue(&(*output).m_partialaggD__);
            m_partialaggE___partialaggE___UNCHECKED_SUM.GetValue(&(*output).m_partialaggE__);
        }

        // reset for new key
        void Reset()
        {
            m_TaxiID_TaxiID_FIRST.Reset();
            m_partialaggD___partialaggD___SUM.Reset();
            m_partialaggE___partialaggE___UNCHECKED_SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_TaxiID_TaxiID_FIRST.WriteRuntimeStats(root);
            m_partialaggD___partialaggD___SUM.WriteRuntimeStats(root);
            m_partialaggE___partialaggE___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_TaxiID_TaxiID_FIRST.GetOperatorRequirements());
            result.Add(m_partialaggD___partialaggD___SUM.GetOperatorRequirements());
            result.Add(m_partialaggE___partialaggE___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_TaxiID_TaxiID_FIRST;
        Aggregate_SUM<NativeNullable<double>,NativeNullable<double>> m_partialaggD___partialaggD___SUM;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialaggE___partialaggE___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_Split_out3,UID_Process_19>
    {
    public:
        struct KeyStruct
        {
            int m_TaxiID;

            KeyStruct(SV1_Extract_Split_out3 & c) :
                m_TaxiID(c.m_TaxiID)
            {
            }

            KeyStruct(const SV1_Extract_Split_out3 & c, IncrementalAllocator * alloc) :
                m_TaxiID(const_cast<SV1_Extract_Split_out3&>(c).m_TaxiID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_TaxiID(c.m_TaxiID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_TaxiID(const_cast<KeyStruct&>(c).m_TaxiID)
            {
            }

            KeyStruct() :
                m_TaxiID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tTaxiID:\t" << row.m_TaxiID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_Split_out3 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_TaxiID, key.m_TaxiID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_Split_out3 * n1, SV1_Extract_Split_out3 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_TaxiID, (*n2).m_TaxiID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_Split_out3 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_TaxiID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_Split_out3 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out3, typename SV1_Extract_Split_out3, UID_Process_18>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out3 & input, SV1_Extract_Split_out3 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<SV1_Extract_Split_out3, SV1_Extract_Split_out3, UID_Process_18>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_18& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_TaxiID);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_18& left, const HashAggregatorKey_Process_18& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_TaxiID, right.m_TaxiID)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_Split_out3& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_TaxiID);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const SV1_Extract_Split_out3& left, const HashAggregatorKey_Process_18& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_TaxiID, right.m_TaxiID)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_18 KeySchema;
        typedef HashAggregatorState_Process_18 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3409969150ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const SV1_Extract_Split_out3 & row, KeySchema & key)
        {
           key.m_TaxiID = row.m_TaxiID;
        }

        static void DeepCopyRowToKey(const SV1_Extract_Split_out3 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_TaxiID = row.m_TaxiID;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const SV1_Extract_Split_out3 & row, ValueSchema & value)
        {
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialaggD__, value.m_SUM_fEmpty_partialaggD__, row.m_partialaggD__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggE__, row.m_partialaggE__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const SV1_Extract_Split_out3 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialaggD__, value.m_SUM_fEmpty_partialaggD__, row.m_partialaggD__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialaggE__, row.m_partialaggE__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const SV1_Extract_Split_out3 & update, IncrementalAllocator* alloc)
        {
                Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::UpdateState(state.m_SUM_partialaggD__, state.m_SUM_fEmpty_partialaggD__, update.m_partialaggD__);
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialaggE__, update.m_partialaggE__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, SV1_Extract_Split_out3 & row)
        {
            row.m_TaxiID = key.m_TaxiID;
            Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::GetAggregatedValue(value.m_SUM_partialaggD__, value.m_SUM_fEmpty_partialaggD__, &row.m_partialaggD__);
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialaggE__, &row.m_partialaggE__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out3, typename SV1_Extract_Split_out3, UID_Process_20>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out3 & input, SV1_Extract_Split_out3 & output, IncrementalAllocator * alloc)
        {
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_21 [] =
    {
        "TaxiID",
        "partialaggE__ == 0 ? (double?)null : partialaggD__ / partialaggE__",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_Split_out3, typename Process_21_Data0, UID_Process_21>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_Split_out3 & input, Process_21_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                output.m_TaxiID = input.m_TaxiID;
                exceptionIndex++;
                output.m_Average = (input.m_partialaggE__ == scope_cast<__int64>(0) ? scope_cast<NativeNullable<double>>(__nullptr) : input.m_partialaggD__ / scope_cast<NativeNullable<double>>(input.m_partialaggE__));
                exceptionIndex++;

                return true;
            }
            catch(ExceptionWithStack& e)
            {
                throw RuntimeExpressionException(StringTable_Process_21[exceptionIndex], "<not supplied>", e);
            }
            catch(...)
            {
                throw RuntimeExpressionException(StringTable_Process_21[exceptionIndex]);
            }
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_21_Data0, UID_SV5_Process_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output, Process_21_Data0 & row)
        {
            output->Write<int,false>(row.m_TaxiID);
            output->WriteDelimiter();
            if (!row.m_Average.IsNull())
            {
                output->Write<double,false>(row.m_Average);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>> * output)
        {
            output->Write<string,true>(FString("TaxiID", 6));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Average", 7));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV5_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_Split_out3, BinaryExtractPolicy<SV1_Extract_Split_out3>, BinaryInputStream> ExtractorType1_SV5_Process;        
        unique_ptr<ExtractorType1_SV5_Process> extractor_0_ptr= make_unique<ExtractorType1_SV5_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_Split_out3);
        ExtractorType1_SV5_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ExtractorType1_SV5_Process, SV1_Extract_Split_out3, SV1_Extract_Split_out3, UID_Process_18> LocalHashAggregatorType_Process_18;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_18> localHashAggregator_Process_18_ptr (new LocalHashAggregatorType_Process_18(extractor_0, UID_Process_18));
        LocalHashAggregatorType_Process_18 * localHashAggregator_Process_18 = localHashAggregator_Process_18_ptr.get();
        ULONG localHashAggregator_Process_18_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<SV1_Extract_Split_out3>> delegate_localHashAggregator_Process_18_ptr (new OperatorDelegate<SV1_Extract_Split_out3>(OperatorDelegate<SV1_Extract_Split_out3>::FromOperator(localHashAggregator_Process_18)));
        OperatorDelegate<SV1_Extract_Split_out3> * delegate_localHashAggregator_Process_18 = delegate_localHashAggregator_Process_18_ptr.get();
        ULONG delegate_localHashAggregator_Process_18_count = 1;
        // Define sorter type
        typedef Sorter<SV1_Extract_Split_out3> SorterType_Process_19;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_19> sorter_Process_19_ptr (new SorterType_Process_19(delegate_localHashAggregator_Process_18, &StdSort<SV1_Extract_Split_out3>::Sort<KeyComparePolicy<SV1_Extract_Split_out3, UID_Process_19>, (sizeof(SV1_Extract_Split_out3)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<SV1_Extract_Split_out3>::CreateDelegate<UID_Process_19>(), false, 2441084926 /*memoryQuota*/, UID_Process_19));
        SorterType_Process_19 * sorter_Process_19 = sorter_Process_19_ptr.get();
        ULONG sorter_Process_19_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_19, SV1_Extract_Split_out3, SV1_Extract_Split_out3, UID_Process_20> StreamAggregatorType_Process_20;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_20> streamAggregator_Process_20_ptr (new StreamAggregatorType_Process_20(sorter_Process_19, false, UID_Process_20));
        StreamAggregatorType_Process_20 * streamAggregator_Process_20 = streamAggregator_Process_20_ptr.get();
        ULONG streamAggregator_Process_20_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_20, SV1_Extract_Split_out3, Process_21_Data0, UID_Process_21> FilterTransformerType_Process_21;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_21> filterTransformer_Process_21_ptr (new FilterTransformerType_Process_21(streamAggregator_Process_20, UID_Process_21));
        FilterTransformerType_Process_21 * filterTransformer_Process_21 = filterTransformer_Process_21_ptr.get();
        ULONG filterTransformer_Process_21_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_21, Process_21_Data0, TextOutputPolicy<Process_21_Data0, UID_SV5_Process_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>>, false> OutputerType2_SV5_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV5_Process> outputer_SV5_Process_out0_ptr(new OutputerType2_SV5_Process(filterTransformer_Process_21, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV5_Process_out0));
        OutputerType2_SV5_Process * outputer_SV5_Process_out0 = outputer_SV5_Process_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV5_Process_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_21_Data0 row;
            outputer_SV5_Process_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV5_Process_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV5_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV5_Process
// Empty footer
