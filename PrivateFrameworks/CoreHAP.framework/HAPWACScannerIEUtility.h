/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScannerIEUtility : HMFObject {
    const char * _end;
    NSData * _ieData;
    const char * _iePtr;
    unsigned long long  _len;
    const char * _ptr;
    const char * _src;
    bool  _supports2pt4GHzNetworks;
    bool  _supports5GHzNetworks;
    bool  _supportsAudioOnly;
    bool  _supportsHomeKit;
    bool  _supportsLegacyHomeKit;
    bool  _supportsMFi;
    bool  _supportsSTAOnly;
}

@property (readonly, copy) NSDictionary *setupDictionary;
@property (nonatomic, readonly) bool supports2pt4GHzNetworks;
@property (nonatomic, readonly) bool supports5GHzNetworks;
@property (nonatomic, readonly) bool supportsAudioOnly;
@property (nonatomic, readonly) bool supportsHomeKit;
@property (nonatomic, readonly) bool supportsLegacyHomeKit;
@property (nonatomic, readonly) bool supportsMFi;
@property (nonatomic, readonly) bool supportsSTAOnly;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIEData:(id)arg1;
- (id)setupDictionary;
- (bool)supports2pt4GHzNetworks;
- (bool)supports5GHzNetworks;
- (bool)supportsAudioOnly;
- (bool)supportsHomeKit;
- (bool)supportsLegacyHomeKit;
- (bool)supportsMFi;
- (bool)supportsSTAOnly;

@end
