/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioUpdateSortOrderRequest : RadioSyncRequest {
    NSArray * _stationSortOrdering;
}

- (void).cxx_destruct;
- (id)changeList;
- (id)initWithStationSortOrdering:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
