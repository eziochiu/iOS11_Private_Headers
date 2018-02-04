/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMatchinfoData : NSObject {
    NSNumber * _detailEntityId;
    NSNumber * _entityId;
    NSData * _matchinfoData;
}

@property (nonatomic, readonly) NSNumber *detailEntityId;
@property (nonatomic, readonly) NSNumber *entityId;
@property (nonatomic, readonly) NSData *matchinfoData;

+ (id)matchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)detailEntityId;
- (void)encodeWithCoder:(id)arg1;
- (id)entityId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchinfoDataWithEntityId:(id)arg1 detailEntityId:(id)arg2 matchinfoData:(id)arg3;
- (bool)isEqualToMatchinfoData:(id)arg1;
- (id)matchinfoData;

@end