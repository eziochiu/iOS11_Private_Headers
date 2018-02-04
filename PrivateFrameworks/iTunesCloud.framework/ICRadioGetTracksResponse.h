/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioGetTracksResponse : ICRadioResponse {
    NSDate * _assetExpirationDate;
}

@property (nonatomic, readonly, copy) NSDate *assetExpirationDate;
@property (nonatomic, readonly) ICRadioStationMetadata *stationMetadata;
@property (nonatomic, readonly) long long tracklistActionType;
@property (nonatomic, readonly, copy) NSArray *tracks;

- (void).cxx_destruct;
- (id)assetExpirationDate;
- (id)initWithURLResponse:(id)arg1;
- (id)stationMetadata;
- (long long)tracklistActionType;
- (id)tracks;

@end
