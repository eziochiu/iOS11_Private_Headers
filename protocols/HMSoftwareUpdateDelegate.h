/* made by EzioChiu.
 */

@protocol HMSoftwareUpdateDelegate <NSObject>

@optional

- (void)softwareUpdate:(HMSoftwareUpdate *)arg1 didUpdateState:(long long)arg2;

@end
