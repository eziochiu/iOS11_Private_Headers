/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding> {
    NSData * _data;
    NSString * _identifier;
    NSDate * _nextCheckDate;
    NSDate * _startDate;
    double  _suggestedValidInterval;
    NSNumber * _version;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, retain) NSDate *nextCheckDate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double suggestedValidInterval;
@property (nonatomic, retain) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValidationRecord:(id)arg1;
- (bool)needsUpdate;
- (id)nextCheckDate;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNextCheckDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSuggestedValidInterval:(double)arg1;
- (void)setVersion:(id)arg1;
- (id)startDate;
- (double)suggestedValidInterval;
- (id)version;

@end
