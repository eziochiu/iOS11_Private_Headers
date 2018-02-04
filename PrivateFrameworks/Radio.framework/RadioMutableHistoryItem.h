/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutableHistoryItem : RadioHistoryItem

@property (nonatomic, retain) NSDate *datePlayed;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, retain) RadioTrack *track;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDatePlayed:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setTrack:(id)arg1;
- (void)setType:(long long)arg1;

@end