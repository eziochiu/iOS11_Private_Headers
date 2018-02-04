/* made by EzioChiu.
 */

@protocol HDForegroundClientProcessObserver <NSObject>

@required

- (void)foregroundClientProcessesDidChange:(NSSet *)arg1;

@end
