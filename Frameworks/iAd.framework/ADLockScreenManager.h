/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADLockScreenManager : NSObject

+ (id)sharedManager;

- (bool)isDeviceLocked;
- (void)requestPassCodeUnlockUIWithBlock:(id /* block */)arg1;

@end
