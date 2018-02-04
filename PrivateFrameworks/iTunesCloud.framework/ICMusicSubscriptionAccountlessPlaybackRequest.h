/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject {
    NSString * _assetSourceStorefrontID;
    NSString * _householdID;
    long long  _qualityOfService;
    ICStoreRequestContext * _requestContext;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (id)assetSourceStorefrontID;
- (id)householdID;
- (id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2;
- (id)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)requestContext;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (long long)storeSubscriptionAdamID;

@end
