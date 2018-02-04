/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLEnvironment : NSObject

@property (nonatomic) bool followUpExtensionSupportEnabled;

+ (id)currentEnvironment;

- (bool)followUpExtensionSupportEnabled;
- (bool)isInternal;
- (bool)isUnlocked;
- (void)setFollowUpExtensionSupportEnabled:(bool)arg1;
- (bool)shouldHideAllFollowUps;

@end
