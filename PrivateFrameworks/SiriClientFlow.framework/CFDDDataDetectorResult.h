/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFDDDataDetectorResult : AceObject <CFLocalAceHandling, SAAceSerializable>

@property (nonatomic, copy) NSString *dataDetectorType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *length;
@property (nonatomic, retain) NSNumber *location;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)dataDetectorResult;
+ (id)dataDetectorResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataDetectorType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)length;
- (id)location;
- (void)setDataDetectorType:(id)arg1;
- (void)setLength:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
