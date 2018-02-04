/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand <CFLocalAceHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSString *style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *variant;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedString;
+ (id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(id /* block */)arg1;
- (id)locale;
- (id)number;
- (bool)requiresResponse;
- (void)setLocale:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setVariant:(id)arg1;
- (id)style;
- (id)variant;

@end