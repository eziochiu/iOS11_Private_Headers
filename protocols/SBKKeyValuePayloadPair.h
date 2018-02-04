/* made by EzioChiu.
 */

@protocol SBKKeyValuePayloadPair <NSObject>

@required

+ (id)pairWithKVSKey:(NSString *)arg1 kvsPayload:(NSData *)arg2;

- (NSString *)kvsKey;
- (NSData *)kvsPayload;
- (id)kvsValueDescription;
- (double)timestamp;

@end
