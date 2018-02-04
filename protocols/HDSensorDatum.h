/* made by EzioChiu.
 */

@protocol HDSensorDatum <NSObject, NSSecureCoding>

@required

- (NSDate *)endDate;
- (NSDate *)startDate;

@optional

- (long long)recordID;
- (NSUUID *)sourceId;

@end