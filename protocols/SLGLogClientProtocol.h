/* made by EzioChiu.
 */

@protocol SLGLogClientProtocol <NSObject>

@required

- (void)connectWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)disconnect;
- (void)queryServer:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SLGLogService> *, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*

@end
