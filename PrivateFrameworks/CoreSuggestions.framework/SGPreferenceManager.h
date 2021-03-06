/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGPreferenceManager : NSObject {
    NSObject<OS_dispatch_queue> * _settingsUpdateQueue;
    NSUserDefaults * _suggestionsDefaults;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)init;
- (void)registerBlock:(id /* block */)arg1;

@end
