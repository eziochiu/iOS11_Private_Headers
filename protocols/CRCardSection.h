/* made by EzioChiu.
 */

@protocol CRCardSection <NSObject>

@optional

- (NSArray *)actionCommands;
- (<SFCardSection> *)backingCardSection;
- (bool)hasNextCard;
- (NSSet *)parametersForInteraction:(INInteraction *)arg1;

@end
