/* made by EzioChiu.
 */

@protocol NFCTag <NSObject, NSSecureCoding, NSCopying>

@required

- (bool)isAvailable;
- (<NFCReaderSession> *)session;
- (unsigned long long)type;

@end
