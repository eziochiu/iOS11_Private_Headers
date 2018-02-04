/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverAllUserIdentitiesOperation : CKDDiscoverUserIdentitiesOperation {
    NSMutableDictionary * _contactIdentifiersByLookupInfo;
}

@property (nonatomic, retain) NSMutableDictionary *contactIdentifiersByLookupInfo;

- (void).cxx_destruct;
- (void)_discoverIdentitiesBatched:(id)arg1;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;
- (id)contactIdentifiersByLookupInfo;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (void)setContactIdentifiersByLookupInfo:(id)arg1;

@end