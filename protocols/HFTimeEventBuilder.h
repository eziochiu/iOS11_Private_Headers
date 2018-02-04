/* made by EzioChiu.
 */

@protocol HFTimeEventBuilder <NSObject>

@required

- (NSString *)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(HMHome *)arg2 recurrences:(NSArray *)arg3;
- (NAFuture *)performValidation;

@end