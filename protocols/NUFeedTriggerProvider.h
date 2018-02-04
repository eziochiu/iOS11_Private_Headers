/* made by EzioChiu.
 */

@protocol NUFeedTriggerProvider <NSObject>

@required

- (FCPromise *)feedTriggerInitialLoadForFeedSettings:(NUFeedSettings *)arg1;
- (FCPromise *)feedTriggerResetForFeedSettings:(NUFeedSettings *)arg1;

@end
