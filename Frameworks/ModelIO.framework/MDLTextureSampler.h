/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTextureSampler : NSObject {
    MDLTextureFilter * hardwareFilter;
    MDLTexture * texture;
    MDLTransform * transform;
}

@property (nonatomic, retain) MDLTextureFilter *hardwareFilter;
@property (nonatomic, retain) MDLTexture *texture;
@property (nonatomic, retain) MDLTransform *transform;

- (void).cxx_destruct;
- (id)hardwareFilter;
- (void)setHardwareFilter:(id)arg1;
- (void)setTexture:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)texture;
- (id)transform;

@end
