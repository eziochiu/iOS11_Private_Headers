/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageExportRequest : NUExportRequest {
    NSDictionary * _auxiliaryData;
    NSString * _auxiliaryDataType;
    NUColorSpace * _colorSpace;
    NUImageExportFormat * _format;
    NSDictionary * _imageProperties;
    bool  _renderToData;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (copy) NSDictionary *auxiliaryData;
@property (copy) NSString *auxiliaryDataType;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, copy) NUImageExportFormat *format;
@property (copy) NSDictionary *imageProperties;
@property (nonatomic) bool renderToData;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void).cxx_destruct;
- (id)auxiliaryData;
- (id)auxiliaryDataType;
- (id)colorSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)format;
- (id)imageProperties;
- (id)initWithComposition:(id)arg1;
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;
- (id)initWithComposition:(id)arg1 exportFormat:(id)arg2;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (bool)renderToData;
- (void)setAuxiliaryData:(id)arg1;
- (void)setAuxiliaryDataType:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setImageProperties:(id)arg1;
- (void)setRenderToData:(bool)arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)submit:(id /* block */)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
