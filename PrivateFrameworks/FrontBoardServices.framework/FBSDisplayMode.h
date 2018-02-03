/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    long long  _gamut;
    unsigned long long  _height;
    unsigned long long  _preferredScale;
    double  _refreshRate;
    long long  _rotation;
    double  _scaleOverride;
    unsigned long long  _width;
}

@property (nonatomic, readonly) long long colorGamut;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) double refreshRate;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)_emptyMode;
+ (bool)supportsSecureCoding;

- (id)_caColorGamut;
- (unsigned long long)_caHeight;
- (unsigned long long)_caPreferredScale;
- (double)_caRefreshRate;
- (unsigned long long)_caWidth;
- (unsigned long long)_height;
- (id)_initWithCADisplayMode:(id)arg1 scale:(double)arg2 rotation:(long long)arg3;
- (id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 preferredScale:(unsigned long long)arg3 scaleOverride:(double)arg4 refreshRate:(double)arg5 gamut:(long long)arg6 rotation:(long long)arg7 validityCheck:(long long)arg8;
- (id)_referenceSizeDescription;
- (long long)_rotation;
- (unsigned long long)_width;
- (long long)colorGamut;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })pixelSize;
- (double)refreshRate;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@end
