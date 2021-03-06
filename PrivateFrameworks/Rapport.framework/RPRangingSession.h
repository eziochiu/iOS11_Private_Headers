/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRangingSession : RPProfileSession {
    id /* block */  _measurementHandler;
}

@property (nonatomic, copy) id /* block */ measurementHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (id)init;
- (id /* block */)measurementHandler;
- (void)setMeasurementHandler:(id /* block */)arg1;

@end
