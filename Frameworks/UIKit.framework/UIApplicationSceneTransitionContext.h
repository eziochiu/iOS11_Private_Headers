/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic) double execTime;
@property (nonatomic) bool forTesting;
@property (getter=_lifecycleActionType, setter=_setLifecycleActionType:, nonatomic) unsigned long long lifecycleActionType;
@property (nonatomic, retain) NSDictionary *payload;
@property (nonatomic) bool safeMode;
@property (nonatomic) bool shouldTakeKeyboardFocus;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) bool waitForBackgroundTaskCompletion;

- (unsigned long long)_lifecycleActionType;
- (void)_setLifecycleActionType:(unsigned long long)arg1;
- (double)execTime;
- (bool)forTesting;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)payload;
- (bool)safeMode;
- (void)setExecTime:(double)arg1;
- (void)setForTesting:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setSafeMode:(bool)arg1;
- (void)setShouldTakeKeyboardFocus:(bool)arg1;
- (void)setUserLaunchEventTime:(double)arg1;
- (void)setWaitForBackgroundTaskCompletion:(bool)arg1;
- (bool)shouldTakeKeyboardFocus;
- (double)userLaunchEventTime;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (bool)waitForBackgroundTaskCompletion;

@end
