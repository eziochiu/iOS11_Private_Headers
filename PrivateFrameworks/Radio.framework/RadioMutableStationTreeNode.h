/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableStationTreeNode : RadioStationTreeNode

@property (nonatomic, copy) RadioArtworkCollection *artworkCollection;
@property (nonatomic) long long childNodeLoadingStyle;
@property (nonatomic, copy) NSArray *childNodes;
@property (nonatomic) long long displayStyle;
@property (nonatomic) bool hasAdditionalChildNodes;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long nodeID;
@property (nonatomic, copy) NSDictionary *stationDictionary;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setArtworkCollection:(id)arg1;
- (void)setChildNodeLoadingStyle:(long long)arg1;
- (void)setChildNodes:(id)arg1;
- (void)setDisplayStyle:(long long)arg1;
- (void)setHasAdditionalChildNodes:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNodeID:(long long)arg1;
- (void)setStationDictionary:(id)arg1;

@end
