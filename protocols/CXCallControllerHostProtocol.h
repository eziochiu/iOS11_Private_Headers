/* made by EzioChiu.
 */

@protocol CXCallControllerHostProtocol <NSObject>

@required

- (oneway void)requestCalls:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (oneway void)requestTransaction:(void *)arg1 forExtensionIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: CXTransaction *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
