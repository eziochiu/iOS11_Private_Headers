/* made by EzioChiu.
 */

@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional

- (void)sceneManager:(FBSceneManager *)arg1 amendSettings:(FBSMutableSceneSettings *)arg2 forUpdatingScene:(FBScene *)arg3;
- (void)sceneManager:(FBSceneManager *)arg1 scene:(FBScene *)arg2 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg3 oldClientSettings:(FBSSceneClientSettings *)arg4 transitionContext:(FBSSceneTransitionContext *)arg5;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;

@end
