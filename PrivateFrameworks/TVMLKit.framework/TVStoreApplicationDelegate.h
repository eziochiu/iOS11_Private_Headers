/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVStoreApplicationDelegate : UIResponder <TVApplicationControllerDelegate, UIApplicationDelegate> {
    TVApplicationController * _appController;
    IKURLBagCache * _bagCache;
    bool  _headLess;
    BKSProcessAssertion * _launchAssertion;
    NSURL * _launchOpenURL;
    NSDictionary * _launchOpenURLOptions;
    NSDictionary * _launchOptions;
    bool  _overrideOrientation;
    TVStoreApplicationSetupHelper * _setupHelper;
    bool  _shouldTerminateOnEnterBackground;
    UIWindow * _window;
}

@property (nonatomic, readonly) TVApplicationController *appController;
@property (nonatomic, readonly) IKURLBagCache *bagCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool overrideOrientation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsIdleModeVisualEffects;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (void)_controllerDidDisplay:(id)arg1;
- (void)_launchApp;
- (void)_loadWithBootURL:(id)arg1;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;
- (id)appController;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (id)appLocalBootURL;
- (bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)bagCache;
- (id)bootURL;
- (id)cachedBagPath;
- (void)dealloc;
- (void)didShowViewController;
- (id)init;
- (bool)overrideOrientation;
- (void)reload;
- (void)setOverrideOrientation:(bool)arg1;
- (void)setWindow:(id)arg1;
- (void)setupWithBootURL:(id)arg1;
- (bool)shouldBeForcedLeftToRight;
- (bool)shouldUseTabBarAsRootViewController;
- (bool)supportsIdleModeVisualEffects;
- (void)updateIdleModeVisualEffectsStatus:(bool)arg1;
- (id)window;

@end