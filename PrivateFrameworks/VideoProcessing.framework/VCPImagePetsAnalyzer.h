/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer {
    int  _inputChannels;
    int  _maxNumRegions;
    VCPCNNModel * _model;
    NSURL * _modelURL;
    bool  _prune;
    bool  _useGPU;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (int)createBasicBlock:(int)arg1 stride:(int)arg2;
- (int)createConv1x1Block:(int)arg1;
- (int)createConv3x3Block:(int)arg1 stride:(int)arg2;
- (int)createGroup4Conv3x3Block:(int)arg1 stride:(int)arg2;
- (int)createInput:(id)arg1 withBuffer:(struct __CVBuffer { }*)arg2 width:(int)arg3 height:(int)arg4;
- (int)createModel;
- (int)generatePetsRegion:(id)arg1 boxes:(id)arg2;
- (id)initWithMaxNumRegions:(int)arg1;
- (void)nonMaxSuppression:(id)arg1;
- (int)petsDetection:(struct __CVBuffer { }*)arg1 petsRegions:(id)arg2 cancel:(id /* block */)arg3;

@end
