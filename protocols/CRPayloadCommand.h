/* made by EzioChiu.
 */

@protocol CRPayloadCommand <CRCommand>

@required

- (<NSSecureCoding> *)payload;
- (void)setPayload:(id <NSSecureCoding>)arg1;

@end
