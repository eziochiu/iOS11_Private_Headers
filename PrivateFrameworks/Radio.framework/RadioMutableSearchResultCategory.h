/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableSearchResultCategory : RadioSearchResultCategory

@property (nonatomic) long long categoryType;
@property (nonatomic) bool hasMoreResults;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDictionary *responseDictionary;
@property (nonatomic, copy) NSArray *stationResults;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategoryType:(long long)arg1;
- (void)setHasMoreResults:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setStationResults:(id)arg1;

@end
