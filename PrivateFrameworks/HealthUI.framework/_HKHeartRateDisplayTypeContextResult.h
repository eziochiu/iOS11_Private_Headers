/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKHeartRateDisplayTypeContextResult : NSObject {
    long long  _context;
    HKStatistics * _statistics;
}

@property (nonatomic) long long context;
@property (nonatomic, retain) HKStatistics *statistics;

+ (id)emptyResultForContext:(long long)arg1;

- (void).cxx_destruct;
- (long long)context;
- (id)debugDescription;
- (id)initWithContext:(long long)arg1 statistics:(id)arg2;
- (void)setContext:(long long)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end
