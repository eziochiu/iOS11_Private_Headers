/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTDNDSync : BLTDNDSyncInternal

- (id)initWithSettingsGateway:(id)arg1 connection:(id)arg2;
- (id)initWithSettingsGateway:(id)arg1 connection:(id)arg2 assertionActiveKey:(id)arg3 assertionOnBehalfOfActiveKey:(id)arg4;
- (void)removeDNDHandlers;
- (void)setDNDHandlers;

@end
