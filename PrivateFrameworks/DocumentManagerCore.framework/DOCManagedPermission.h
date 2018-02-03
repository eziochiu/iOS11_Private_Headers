/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCManagedPermission : NSObject {
    NSString * _hostIdentifier;
}

@property (nonatomic, readonly) bool hasRestrictions;
@property (nonatomic, retain) NSString *hostIdentifier;

+ (id)defaultPermission;

- (void).cxx_destruct;
- (bool)canHostAppPerformAction:(unsigned long long)arg1 targetBundleIdentifier:(id)arg2;
- (bool)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2;
- (bool)canHostAppPerformAction:(unsigned long long)arg1 targetSearchableItem:(id)arg2;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1;
- (unsigned long long)dataOwnerStateForItem:(id)arg1;
- (id)filterBundleIdentifiers:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(bool)arg4;
- (id)filterItems:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetItem:(id)arg3;
- (id)filterProviders:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(bool)arg4;
- (bool)hasRestrictions;
- (id)hostIdentifier;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4;
- (void)setHostIdentifier:(id)arg1;

@end
