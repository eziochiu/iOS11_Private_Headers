/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPluginManager : NSObject {
    NSBundle * _bundle;
    NSArray * _pluginBundles;
    NSString * _pluginDirectory;
}

@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, copy) NSArray *pluginBundles;
@property (nonatomic, readonly, copy) NSString *pluginDirectory;

+ (id)mainManager;
+ (id)managerForBundle:(id)arg1;

- (id)bundle;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)pluginBundleForIdentifier:(id)arg1;
- (id)pluginBundleForName:(id)arg1 type:(id)arg2;
- (id)pluginBundles;
- (id)pluginBundlesForType:(id)arg1;
- (id)pluginDirectory;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
