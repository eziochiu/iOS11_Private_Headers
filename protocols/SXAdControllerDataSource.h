/* made by EzioChiu.
 */

@protocol SXAdControllerDataSource <NSObject>

@optional

- (id /* block */)adController:(void *)arg1 requiresAdForRequest:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 13: id /* block */, void*, id, SEL, SXAdController *, SXAdRequest *, id /* block */, void*, void, id /* block */, SXAdResponse *, NSError *, void*

@end
