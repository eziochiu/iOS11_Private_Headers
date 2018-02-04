/* made by EzioChiu.
 */

@protocol HMDAccountDelegate <NSObject>

@required

- (void)account:(HMDAccount *)arg1 didAddDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didRemoveDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didUpdateDevice:(HMDDevice *)arg2;

@end
