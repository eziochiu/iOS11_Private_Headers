/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding> {
    double  _dataCapacity;
    NSString * _dataCategory;
    double  _dataUsed;
}

@property (nonatomic, readonly) double dataCapacity;
@property (nonatomic, readonly) NSString *dataCategory;
@property (nonatomic, readonly) double dataUsed;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dataCapacity;
- (id)dataCategory;
- (double)dataUsed;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 andDataUsed:(double)arg2 andDataCapacity:(double)arg3;
- (id)initWithCoder:(id)arg1;

@end
