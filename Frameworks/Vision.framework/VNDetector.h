/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetector : NSObject <VNObservationsCacheKeyProviding> {
    unsigned long long  _backingStore;
    VNMetalContext * _metalContext;
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (readonly) unsigned long long backingStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *processingQueue;

+ (bool)bestImageWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 format:(unsigned int*)arg3;
+ (id)detectorName;

- (void).cxx_destruct;
- (unsigned long long)backingStore;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (bool)initializeMetalContext:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (bool)validateImageBuffer:(id)arg1 error:(id*)arg2;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id*)arg2;

@end
