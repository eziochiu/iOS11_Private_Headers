/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSRankingSpanCalculator : NSObject {
    unsigned long long  _firstTermPosition;
    double  _normCount;
    double  _ordered;
    double  _pairDist;
    double  _unordered;
}

@property (nonatomic) unsigned long long firstTermPosition;
@property (nonatomic) double normCount;
@property (nonatomic) double ordered;
@property (nonatomic) double pairDist;
@property (nonatomic) double unordered;

+ (bool)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long*)arg5;
+ (void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long*)arg6 minimumDistancePair:(long long*)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9;

- (id)description;
- (unsigned long long)firstTermPosition;
- (double)normCount;
- (double)ordered;
- (double)pairDist;
- (void)reset;
- (void)setFirstTermPosition:(unsigned long long)arg1;
- (void)setNormCount:(double)arg1;
- (void)setOrdered:(double)arg1;
- (void)setPairDist:(double)arg1;
- (void)setUnordered:(double)arg1;
- (double)unordered;
- (void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2;

@end
