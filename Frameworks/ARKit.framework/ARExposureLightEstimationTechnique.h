/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARExposureLightEstimationTechnique : ARTechnique {
    float  _lastLightIntensity;
    float  _lastTemperature;
    NSObject<OS_dispatch_semaphore> * _resultSemaphore;
}

- (void).cxx_destruct;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
