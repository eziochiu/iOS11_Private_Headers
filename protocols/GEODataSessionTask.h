/* made by EzioChiu.
 */

@protocol GEODataSessionTask <NSObject>

@required

- (void)cancel;
- (GEOClientMetrics *)clientMetrics;
- (NSError *)error;
- (bool)failedDueToCancel;
- (unsigned long long)incomingPayloadSize;
- (unsigned long long)outgoingPayloadSize;
- (bool)protocolBufferHasPreamble;
- (NSData *)receivedData;
- (NSString *)remoteAddressAndPort;
- (void)start;
- (unsigned int)taskIdentifier;

@end
