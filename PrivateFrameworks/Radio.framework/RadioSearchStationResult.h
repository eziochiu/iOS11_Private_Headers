/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchStationResult : NSObject <NSCopying> {
    NSDictionary * _highlightRanges;
    NSDictionary * _stationDictionary;
}

@property (nonatomic, readonly, copy) NSDictionary *highlightRanges;
@property (nonatomic, readonly, copy) NSDictionary *stationDictionary;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)highlightRanges;
- (bool)isEqual:(id)arg1;
- (id)stationDictionary;

@end