/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRemoveAllFromWishListRequest : RadioRequest {
    SSURLConnectionRequest * _request;
    NSArray * _trackStoreIDs;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTrackStoreIDs:(id)arg1;
- (id)initWithTracks:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
