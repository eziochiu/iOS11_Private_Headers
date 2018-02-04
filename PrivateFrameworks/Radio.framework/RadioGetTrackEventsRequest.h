/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioGetTrackEventsRequest : RadioRequest {
    SSURLConnectionRequest * _request;
    NSArray * _stationTrackIDs;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithStationTrackIDs:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
