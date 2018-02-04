/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioDeleteStationRequest : RadioSyncRequest {
    NSDictionary * _stationDictionary;
    unsigned long long  _stationID;
}

- (void).cxx_destruct;
- (id)changeList;
- (id)init;
- (id)initWithStation:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
