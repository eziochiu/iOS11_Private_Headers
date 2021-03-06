/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageFill : OADFill {
    OADBlipRef * mBlipRef;
    int  mDpi;
    bool  mIsBlipRefOverridden;
    bool  mIsDpiOverridden;
    bool  mIsRotateWithShapeOverridden;
    bool  mRotateWithShape;
    OADRelativeRect * mSourceRect;
    OADImageFillTechnique * mTechnique;
}

+ (id)defaultProperties;

- (id)blipRef;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)dpi;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDefaults;
- (bool)isAnythingOverridden;
- (bool)isBlipRefOverridden;
- (bool)isDpiOverridden;
- (bool)isEqual:(id)arg1;
- (bool)isRotateWithShapeOverridden;
- (bool)isSourceRectOverridden;
- (bool)isTechniqueOverridden;
- (void)removeUnnecessaryOverrides;
- (bool)rotateWithShape;
- (void)setBlipRef:(id)arg1;
- (void)setDpi:(int)arg1;
- (void)setParent:(id)arg1;
- (void)setRotateWithShape:(bool)arg1;
- (void)setSourceRect:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (void)setTechnique:(id)arg1;
- (id)sourceRect;
- (id)technique;

@end
