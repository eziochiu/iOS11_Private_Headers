/* made by EzioChiu.
 */

@protocol SFPasswordServiceViewControllerProtocol <NSObject>

@required

- (void)authenticateToPresentInPopover:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)gatherAndShowPasswords;

@end