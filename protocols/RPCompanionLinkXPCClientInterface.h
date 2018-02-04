/* made by EzioChiu.
 */

@protocol RPCompanionLinkXPCClientInterface

@required

- (void)companionLinkFoundDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLocalDeviceUpdated:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLostDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2;
- (void)companionLinkReceivedRequestID:(void *)arg1 request:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*

@end
