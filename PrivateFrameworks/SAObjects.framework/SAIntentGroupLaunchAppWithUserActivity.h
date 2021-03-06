/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *userActivityIdentifier;

+ (id)launchAppWithUserActivity;
+ (id)launchAppWithUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setUserActivityIdentifier:(id)arg1;
- (id)userActivityIdentifier;

@end
