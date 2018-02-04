/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStorePlatformOffer : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSArray *assets;
@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly, copy) NSString *formattedPrice;
@property (nonatomic, readonly, copy) NSString *offerType;
@property (nonatomic, readonly, copy) NSNumber *price;

- (void).cxx_destruct;
- (id)assets;
- (id)buyParameters;
- (id)formattedPrice;
- (id)initWithResponseDictionary:(id)arg1;
- (id)offerType;
- (id)price;

@end