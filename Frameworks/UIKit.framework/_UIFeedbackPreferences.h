/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackPreferences : NSObject {
    NSDictionary * _defaultFeedbackTypes;
    NSMutableDictionary * _enabledFeedbackTypes;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSDictionary *defaultFeedbackTypes;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)_defaultKeyForKey:(id)arg1 type:(unsigned long long)arg2;
- (unsigned long long)_enabledFeedbackTypesForKey:(id)arg1;
- (void)_invalidate;
- (id)_keyForCategory:(id)arg1;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_setEnabledFeedbackTypes:(unsigned long long)arg1 forKey:(id)arg2 postNotification:(bool)arg3;
- (void)_startObservingDefaults;
- (void)_updateEnabledFeedbackTypes:(unsigned long long*)arg1 forKey:(id)arg2 type:(unsigned long long)arg3;
- (id)defaultFeedbackTypes;
- (unsigned long long)enabledFeedbackTypesForCategory:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
