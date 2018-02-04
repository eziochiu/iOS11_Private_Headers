/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicMetadata : HMFObject <HMFDumpState, NSSecureCoding> {
    NSString * _format;
    NSString * _manufacturerDescription;
    NSNumber * _maxLength;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    NSString * _units;
    NSArray * _validValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *manufacturerDescription;
@property (nonatomic, readonly) NSNumber *maxLength;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *units;
@property (nonatomic, copy) NSArray *validValues;

+ (bool)isValidMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionDetails;
- (bool)configureWithCharacteristicMetadata:(id)arg1;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)getMetadataDictionary;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (void)setValidValues:(id)arg1;
- (id)stepValue;
- (id)units;
- (id)validValues;

@end