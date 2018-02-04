/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCoreSpotlightIndexer : NSObject

+ (id)sharedInstance;

- (id)blacklistedControllers;
- (id)bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (bool)controllerIsBlacklisted:(id)arg1;
- (void)deleteIndex;
- (id)descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (id)indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5;
- (id)indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3;
- (id)specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;

@end
