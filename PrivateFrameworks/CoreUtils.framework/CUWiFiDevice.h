/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUWiFiDevice : NSObject {
    NSData * _bssid;
    NSData * _deviceIEDeviceID;
    unsigned int  _deviceIEFlags;
    NSString * _deviceIEName;
    NSUUID * _identifier;
    NSData * _ieData;
    id  _platformObject;
    int  _present;
    NSDictionary * _rawScanResult;
    int  _rssi;
    NSString * _ssid;
}

@property (nonatomic, copy) NSData *bssid;
@property (nonatomic, copy) NSData *deviceIEDeviceID;
@property (nonatomic) unsigned int deviceIEFlags;
@property (nonatomic, copy) NSString *deviceIEName;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *ieData;
@property (nonatomic, retain) id platformObject;
@property (nonatomic) int present;
@property (nonatomic, copy) NSDictionary *rawScanResult;
@property (nonatomic) int rssi;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)bssid;
- (id)description;
- (id)deviceIEDeviceID;
- (unsigned int)deviceIEFlags;
- (id)deviceIEName;
- (id)identifier;
- (id)ieData;
- (id)platformObject;
- (int)present;
- (id)rawScanResult;
- (int)rssi;
- (void)setBssid:(id)arg1;
- (void)setDeviceIEDeviceID:(id)arg1;
- (void)setDeviceIEFlags:(unsigned int)arg1;
- (void)setDeviceIEName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIeData:(id)arg1;
- (void)setPlatformObject:(id)arg1;
- (void)setPresent:(int)arg1;
- (void)setRawScanResult:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
