/* made by EzioChiu.
 */

@protocol CNContactPickerServiceProtocol <NSObject>

@required

- (void)invalidateSelectionAnimated:(bool)arg1;
- (void)setupWithOptions:(void *)arg1 readyBlock:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end