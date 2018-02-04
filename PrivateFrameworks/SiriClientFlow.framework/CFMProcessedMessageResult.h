/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFMProcessedMessageResult : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *dataDetectorResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASmsSms *sms;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)processedMessageResult;
+ (id)processedMessageResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataDetectorResults;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDataDetectorResults:(id)arg1;
- (void)setSms:(id)arg1;
- (id)sms;

@end
