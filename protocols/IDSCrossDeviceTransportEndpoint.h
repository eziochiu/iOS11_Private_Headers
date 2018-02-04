/* made by EzioChiu.
 */

@protocol IDSCrossDeviceTransportEndpoint <NSObject>

@required

- (void)messageReceivedFromIDS:(NSDictionary *)arg1;

@end
