/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpDetailsEducationalCardSuggestionsProvider : PUOneUpSuggestionsProvider {
    PUOneUpAccessoryViewControllersManager * _accessoryViewControllersManager;
}

@property (nonatomic, readonly) PUOneUpAccessoryViewControllersManager *accessoryViewControllersManager;

+ (id)_userDefaults;
+ (bool)didDisplayEducationalCard;
+ (void)setDidDisplayEducationalCard:(bool)arg1;

- (void).cxx_destruct;
- (id)accessoryViewControllersManager;
- (bool)canProvideSuggestionForAsset:(id)arg1;
- (id)init;
- (id)initWithAccessoryViewControllersManager:(id)arg1;
- (id)requestSuggestionForAsset:(id)arg1 withResultHandler:(id /* block */)arg2;

@end
