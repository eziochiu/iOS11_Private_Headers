/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRankerUpdateModelParameters : NSObject {
    unsigned long long  _gracePeriod;
    unsigned long long  _updateInterval;
}

@property (nonatomic, readonly) unsigned long long gracePeriod;
@property (nonatomic, readonly) unsigned long long updateInterval;

+ (id)defaultValue;
+ (id)responseFromJSON:(id)arg1;

- (unsigned long long)gracePeriod;
- (unsigned long long)updateInterval;

@end
