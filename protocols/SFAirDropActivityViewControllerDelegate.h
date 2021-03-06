/* made by EzioChiu.
 */

@protocol SFAirDropActivityViewControllerDelegate <NSObject>

@required

- (void)airDropActivityDidSuccessfullyCompleteTransfer;
- (void)airDropActivityDidSuccessfullyStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)airDropActivityDidFailToStartTransfer;
- (void)airDropActivityRequestingSharedItemsWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
