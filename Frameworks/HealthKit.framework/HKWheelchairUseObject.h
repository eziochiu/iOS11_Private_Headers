/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWheelchairUseObject : NSObject <NSCopying, NSSecureCoding> {
    long long  _wheelchairUse;
}

@property (readonly) long long wheelchairUse;

+ (bool)supportsSecureCoding;

- (id)_initWithWheelchairUse:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)wheelchairUse;

@end