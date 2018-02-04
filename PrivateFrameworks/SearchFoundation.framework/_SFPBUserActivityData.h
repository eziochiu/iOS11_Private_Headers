/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBUserActivityData : PBCodable <NSSecureCoding, _SFPBUserActivityData> {
    NSString * _activityType;
    NSArray * _userInfos;
}

@property (nonatomic, copy) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActivityType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *userInfos;

- (void).cxx_destruct;
- (id)activityType;
- (void)addUserInfo:(id)arg1;
- (void)clearUserInfo;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfos:(id)arg1;
- (id)userInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)userInfoCount;
- (id)userInfos;
- (void)writeTo:(id)arg1;

@end