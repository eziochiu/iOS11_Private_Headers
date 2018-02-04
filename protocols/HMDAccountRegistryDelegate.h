/* made by EzioChiu.
 */

@protocol HMDAccountRegistryDelegate <NSObject>

@required

- (void)accountRegistry:(HMDAccountRegistry *)arg1 didAddAccount:(HMDAccount *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didRemoveAccount:(HMDAccount *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didUpdateCurrentDevice:(HMDDevice *)arg2;

@end
