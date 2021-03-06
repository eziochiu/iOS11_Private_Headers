/* made by EzioChiu.
 */

@protocol GEOServerFormatToken <NSObject, NSCoding>

@required

- (<GEOTransitArtworkDataSource> *)artworkValue;
- (<GEOServerFormatTokenPriceValue> *)priceValue;
- (NSString *)stringValue;
- (NSArray *)timeStampValues;
- (NSString *)token;
- (long long)type;
- (unsigned int)value1;
- (unsigned int)value2;
- (NSArray *)value3s;

@end
