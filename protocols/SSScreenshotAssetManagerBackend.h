/* made by EzioChiu.
 */

@protocol SSScreenshotAssetManagerBackend <NSObject>

@required

- (void)imageForPreviouslyRegisteredIdentifier:(void *)arg1 imageHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (void)registerEntryWithImage:(void *)arg1 identifierHandler:(void *)arg2; // needs 2 arg types, found 8: UIImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removeEntryWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateImage:(void *)arg1 withModificationData:(void *)arg2 forEntryWithIdentifier:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: UIImage *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
