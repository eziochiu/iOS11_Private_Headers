/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportObject : NSObject <SignpostSerializable> {
    NSString * _category;
    NSString * _subsystem;
}

@property (nonatomic, retain) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long durationMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, retain) NSString *subsystem;
@property (readonly) Class superclass;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)category;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)serializeableDictionary;
- (void)setCategory:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (unsigned long long)startMachContinuousTime;
- (id)subsystem;

@end
