/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksMigrationRampEvaluator : NSObject {
    NSDate * _dateOfLastSettingsUpdate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _rampIncludesUserIdentity;
    NSDictionary * _settingsDictionary;
    NSString * _userIdentity;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool rampIncludesUserIdentity;

- (void).cxx_destruct;
- (void)_didFetchSettingsDictionary:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)_evaluateRampIncludesUserIdentity;
- (bool)_isInternalBuild;
- (void)_updateSettingsIfNeeded:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_updateUserIdentityIfNeededWithFetcher:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearUserIdentity;
- (id)dictionaryRepresentation;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (bool)rampIncludesUserIdentity;
- (void)updateForced:(bool)arg1 withUserIdentityFetcher:(id)arg2 completionHandler:(id /* block */)arg3;

@end
