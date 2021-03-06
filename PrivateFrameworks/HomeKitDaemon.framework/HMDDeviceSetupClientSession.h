/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDeviceSetupClientSession : HMDDeviceSetupSessionInternal <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedClasses;
+ (bool)isSupported;
+ (id)logCategory;
+ (long long)role;

- (bool)processSessionData:(id)arg1 error:(id*)arg2;

@end
