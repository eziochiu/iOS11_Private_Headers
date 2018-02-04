/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPCModelStorePlaybackItemsRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly, copy) MPCModelStorePlaybackItemsRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)_getShouldLibraryPersonalizeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)execute;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)request;
- (id /* block */)responseHandler;

@end
