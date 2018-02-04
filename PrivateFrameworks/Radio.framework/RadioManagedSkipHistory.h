/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioManagedSkipHistory : NSManagedObject

@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;

- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (id)skipIdentifier;
- (id)skipTimestamps;
- (id)stationHash;
- (long long)stationID;

@end
