/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioContentLookupRequest : RadioRequest {
    SSURLConnectionRequest * _request;
    NSArray * _trackStoreIDs;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTrackStoreIDs:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
