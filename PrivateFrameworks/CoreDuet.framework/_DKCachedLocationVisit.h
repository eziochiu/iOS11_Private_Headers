/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKCachedLocationVisit : NSObject {
    double  _entryTime;
    double  _exitTime;
    NSString * _locationId;
}

@property (nonatomic) double entryTime;
@property (nonatomic) double exitTime;
@property (nonatomic, retain) NSString *locationId;

- (void).cxx_destruct;
- (id)description;
- (double)entryTime;
- (double)exitTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToVisit:(id)arg1;
- (id)locationId;
- (void)setEntryTime:(double)arg1;
- (void)setExitTime:(double)arg1;
- (void)setLocationId:(id)arg1;

@end