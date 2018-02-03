/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double duration;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSDate *startDate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithDateInterval:(id)arg1;
- (bool)intersectsDateInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateInterval:(id)arg1;
- (id)startDate;

@end
