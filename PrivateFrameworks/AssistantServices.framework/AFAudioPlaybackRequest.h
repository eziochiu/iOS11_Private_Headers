/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSURL * _itemURL;
    long long  _numberOfLoops;
    NSDictionary * _userInfo;
    float  _volume;
}

@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (nonatomic, readonly) long long numberOfLoops;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) float volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemURL:(id)arg1 numberOfLoops:(long long)arg2 volume:(float)arg3 fadeInDuration:(double)arg4 fadeOutDuration:(double)arg5 userInfo:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)itemURL;
- (long long)numberOfLoops;
- (id)userInfo;
- (float)volume;

@end
