/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEventResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

+ (id)counterInCollection:(id)arg1 withEventName:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)countWithSuccess:(bool)arg1;
- (id)eventName;
- (void)incrementCountByNumber:(unsigned long long)arg1 success:(bool)arg2;
- (void)incrementCountWithSuccess:(bool)arg1;
- (id)internal;
- (void)setInternal:(id)arg1;

@end