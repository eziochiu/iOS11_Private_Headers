/* made by EzioChiu.
 */

@protocol DDMoneyActionDelegate <NSObject>

@required

- (void)handleMoneyActionWithAmount:(NSDecimalNumber *)arg1 currencies:(NSArray *)arg2;

@end
