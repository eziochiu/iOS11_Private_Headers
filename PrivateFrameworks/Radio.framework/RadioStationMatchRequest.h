/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationMatchRequest : RadioRequest {
    NSArray * _libraryTrackDictionaries;
    SSURLConnectionRequest * _request;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithLibraryTrackDictionaries:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
