/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver> {
    NSMutableSet * _agreedLicenseURLs;
    NSMutableArray * _requestedSoftwareUpdates;
}

@property (nonatomic, retain) NSMutableSet *agreedLicenseURLs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *requestedSoftwareUpdates;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_markUpdate:(id)arg1 asRequested:(bool)arg2;
- (id)_presentLicensesIfNeededForSoftwareUpdates:(id)arg1 presentationDelegate:(id)arg2;
- (id)agreedLicenseURLs;
- (id)fetchAvailableUpdatesForAccessory:(id)arg1;
- (id)fetchAvailableUpdatesForHome:(id)arg1;
- (bool)hasRequestedUpdate:(id)arg1;
- (id)init;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (id)requestedSoftwareUpdates;
- (void)setAgreedLicenseURLs:(id)arg1;
- (void)setRequestedSoftwareUpdates:(id)arg1;
- (void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2;
- (id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;

@end
