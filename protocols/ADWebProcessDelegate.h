/* made by EzioChiu.
 */

@protocol ADWebProcessDelegate <NSObject>

@optional

- (void)webProcessMRAIDJSODidCallClose;
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(NSDictionary *)arg1;
- (void)webProcessMRAIDJSODidCallExpand:(NSURL *)arg1 withMaximumSize:(NSValue *)arg2;
- (void)webProcessMRAIDJSODidCallOpen:(NSURL *)arg1;
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;
- (void)webProcessPlugInDidCreateBrowserContextController;
- (void)webProcessPlugInWillDestroyBrowserContextController;

@end
