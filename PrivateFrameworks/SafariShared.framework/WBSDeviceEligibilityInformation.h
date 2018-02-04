/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSDeviceEligibilityInformation : NSObject {
    NSDate * _dateOfLatestDAVAccessByIneligibleWindowsDevice;
    unsigned long long  _numberOfDevicesPotentiallyEligibleAfterUpdate;
    unsigned long long  _numberOfPotentiallyEligibleDevices;
}

@property (nonatomic, readonly) NSDate *dateOfLatestDAVAccessByIneligibleWindowsDevice;
@property (nonatomic, readonly) unsigned long long numberOfDevicesPotentiallyEligibleAfterUpdate;
@property (nonatomic, readonly) unsigned long long numberOfPotentiallyEligibleDevices;

- (void).cxx_destruct;
- (id)dateOfLatestDAVAccessByIneligibleWindowsDevice;
- (id)description;
- (id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 numberOfPotentiallyEligibleDevices:(unsigned long long)arg2 numberOfDevicesPotentiallyEligibleAfterUpdate:(unsigned long long)arg3;
- (id)initWithDeviceListResponseDictionary:(id)arg1;
- (unsigned long long)numberOfDevicesPotentiallyEligibleAfterUpdate;
- (unsigned long long)numberOfPotentiallyEligibleDevices;

@end
