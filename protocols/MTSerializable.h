/* made by EzioChiu.
 */

@protocol MTSerializable <NSObject, SYChange, SYObject>

@required

+ (<SYChange> *)createSYChangeFromProtobuffObject:(PBCodable<NSCopying> *)arg1 changeType:(long long)arg2;

- (NSData *)createProtobufWithOptions:(NSDictionary *)arg1;
- (void)setChangeType:(long long)arg1;

@end
