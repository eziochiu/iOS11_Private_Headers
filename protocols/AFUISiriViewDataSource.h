/* made by EzioChiu.
 */

@protocol AFUISiriViewDataSource <NSObject>

@optional

- (AFAccount *)activeAccountForSiriView:(AFUISiriView *)arg1;
- (NSString *)assistantVersionForSiriView:(AFUISiriView *)arg1;

@end
