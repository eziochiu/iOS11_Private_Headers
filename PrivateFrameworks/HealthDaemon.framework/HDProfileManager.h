/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDProfileManager : NSObject {
    HDDaemon * _daemon;
    NSMutableDictionary * _profiles;
    NSObject<OS_dispatch_queue> * _resourceQueue;
}

- (void).cxx_destruct;
- (id)_directoryNameForProfileIdentifier:(id)arg1;
- (id)_directoryURLForProfileIdentifier:(id)arg1;
- (id)_profileIdentifierForDirectoryName:(id)arg1 error:(id*)arg2;
- (void)_resourceQueue_createProfileOfType:(long long)arg1 name:(id)arg2 completion:(id /* block */)arg3;
- (bool)_resourceQueue_deleteProfile:(id)arg1 error:(id*)arg2;
- (void)_resourceQueue_invalidateAndWait;
- (void)_resourceQueue_loadSecondaryProfiles;
- (id)_resourceQueue_profileForIdentifier:(id)arg1;
- (void)_resourceQueue_setProfile:(id)arg1 forIdentifier:(id)arg2;
- (void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllProfilesWithCompletion:(id /* block */)arg1;
- (id)initWithDaemon:(id)arg1;
- (void)invalidateAndWait;
- (id)newProfileOfType:(long long)arg1 daemon:(id)arg2 directoryPath:(id)arg3;
- (id)profileForIdentifier:(id)arg1;
- (void)reloadSecondaryProfiles;
- (void)setProfile:(id)arg1 forIdentifier:(id)arg2;

@end
