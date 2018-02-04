/* made by EzioChiu.
 */

@protocol PTSModuleObserver <NSObject>

@required

- (void)module:(PTSModule *)arg1 didInsertRows:(NSArray *)arg2 deleteRows:(NSArray *)arg3;
- (void)module:(PTSModule *)arg1 didInsertSections:(NSIndexSet *)arg2 deleteSections:(NSIndexSet *)arg3;
- (void)moduleDidReload:(PTSModule *)arg1;

@end
