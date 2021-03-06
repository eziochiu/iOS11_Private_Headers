/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlayEvent : RadioPlayEvent

@property (nonatomic, retain) NSDate *datePlayed;
@property (nonatomic) long long endReason;
@property (nonatomic) double endTimeInTrack;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic) double startTimeInTrack;
@property (nonatomic) long long storeID;
@property (nonatomic, copy) NSData *timedMetadata;
@property (nonatomic, copy) NSDictionary *trackInfo;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDatePlayed:(id)arg1;
- (void)setEndReason:(long long)arg1;
- (void)setEndTimeInTrack:(double)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setStartTimeInTrack:(double)arg1;
- (void)setStoreID:(long long)arg1;
- (void)setTimedMetadata:(id)arg1;
- (void)setTrackInfo:(id)arg1;
- (void)setType:(long long)arg1;

@end
