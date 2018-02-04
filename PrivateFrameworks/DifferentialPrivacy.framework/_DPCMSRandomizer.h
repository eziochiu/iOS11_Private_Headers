/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPCMSRandomizer : NSObject <_DPStringRandomizer> {
    double  _epsilon;
    double  _fragmentEpsilon;
    unsigned long long  _fragmentK;
    unsigned long long  _fragmentM;
    unsigned long long  _k;
    unsigned long long  _m;
}

@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double fragmentEpsilon;
@property (nonatomic, readonly) unsigned long long fragmentK;
@property (nonatomic, readonly) unsigned long long fragmentM;
@property (nonatomic, readonly) unsigned long long k;
@property (nonatomic, readonly) unsigned long long m;

+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
+ (id)randomizerWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;

- (id)cmsSampleForFragment:(id)arg1;
- (id)cmsSampleForString:(id)arg1;
- (id)description;
- (double)epsilon;
- (double)fragmentEpsilon;
- (unsigned long long)fragmentK;
- (unsigned long long)fragmentM;
- (id)init;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3;
- (id)initWithEpsilon:(double)arg1 bitCount:(unsigned long long)arg2 hashFunctionCount:(unsigned long long)arg3 fragmentEpsilon:(double)arg4 fragmentBitCount:(unsigned long long)arg5 fragmentHashFunctionCount:(unsigned long long)arg6;
- (unsigned long long)k;
- (unsigned long long)m;
- (id)randomizeStrings:(id)arg1 forKey:(id)arg2;
- (id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;

@end