/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioMutablePlayEventCollection : RadioPlayEventCollection

@property (nonatomic, copy) NSString *deviceName;

- (void)addPlayEvents:(id)arg1 forStation:(id)arg2;
- (void)addPlayEvents:(id)arg1 forStationHash:(id)arg2 stationID:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDeviceName:(id)arg1;

@end
