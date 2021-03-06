/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingInternalTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    ARFaceTrackingData * _faceTrackingData;
}

+ (void)initialize;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)dealloc;
- (id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
