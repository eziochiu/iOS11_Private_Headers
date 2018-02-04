/* made by EzioChiu.
 */

@protocol PTSSectionObserver <NSObject>

@required

- (void)section:(PTSSection *)arg1 didInsertRows:(NSIndexSet *)arg2 deleteRows:(NSIndexSet *)arg3;
- (void)sectionDidReload:(PTSSection *)arg1;

@end
