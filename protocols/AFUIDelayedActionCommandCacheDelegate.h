/* made by EzioChiu.
 */

@protocol AFUIDelayedActionCommandCacheDelegate <NSObject>

@required

- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didInvalidateDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)commandCache:(AFUIDelayedActionCommandCache *)arg1 didPerformDelayedActionCommand:(SAUIDelayedActionCommand *)arg2;
- (void)performGenericAceCommands:(NSArray *)arg1 forCommandCache:(AFUIDelayedActionCommandCache *)arg2;

@end
