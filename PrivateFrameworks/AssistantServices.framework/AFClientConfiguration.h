/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientConfiguration : NSObject <NSCopying, NSSecureCoding> {
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *tapToSiriAudioPlaybackRequest;
@property (nonatomic, readonly, copy) AFAudioPlaybackRequest *twoShotAudioPlaybackRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTapToSiriAudioPlaybackRequest:(id)arg1 twoShotAudioPlaybackRequest:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)tapToSiriAudioPlaybackRequest;
- (id)twoShotAudioPlaybackRequest;

@end
