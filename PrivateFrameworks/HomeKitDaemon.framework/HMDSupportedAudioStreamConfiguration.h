/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSupportedAudioStreamConfiguration : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {
    NSDictionary * _codecConfigurations;
    NSNumber * _supportsComfortNoise;
}

@property (nonatomic, readonly, copy) NSDictionary *codecConfigurations;
@property (nonatomic, readonly, copy) NSNumber *supportsComfortNoise;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecConfigurations;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComfortNoise:(id)arg1 CodecConfigurations:(id)arg2;
- (id)supportsComfortNoise;
- (id)tlvData;

@end