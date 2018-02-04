/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIConfirmationOptions : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *allConfirmationOptions;
@property (nonatomic, copy) NSString *cancelTrigger;
@property (nonatomic, copy) NSArray *confirmCommands;
@property (nonatomic, copy) NSString *confirmText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *denyCommands;
@property (nonatomic, copy) NSString *denyText;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationOptions;
+ (id)confirmationOptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)allConfirmationOptions;
- (id)cancelTrigger;
- (id)confirmCommands;
- (id)confirmText;
- (id)denyCommands;
- (id)denyText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAllConfirmationOptions:(id)arg1;
- (void)setCancelTrigger:(id)arg1;
- (void)setConfirmCommands:(id)arg1;
- (void)setConfirmText:(id)arg1;
- (void)setDenyCommands:(id)arg1;
- (void)setDenyText:(id)arg1;

@end