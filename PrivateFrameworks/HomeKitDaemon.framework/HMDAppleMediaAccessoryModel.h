/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel

@property (nonatomic, retain) NSData *device;
@property (nonatomic, retain) NSString *deviceUUID;
@property (nonatomic, retain) NSData *loggedInAccount;
@property (nonatomic, retain) HMFSoftwareVersion *softwareVersion;

+ (id)properties;

@end
