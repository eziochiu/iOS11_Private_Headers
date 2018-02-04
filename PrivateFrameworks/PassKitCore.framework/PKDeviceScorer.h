/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDeviceScorer : NSObject {
    PKDSPContext * _context;
    double  _deviceScoreTimeout;
    NSData * _lastDeviceScore;
    NSData * _lastDeviceScoreIdentifier;
    CdQwUTvJnDEPQgR8 * _scorer;
}

@property (nonatomic, readonly, copy) PKDSPContext *context;
@property (nonatomic) double deviceScoreTimeout;

+ (bool)deviceScoringSupported;

- (void).cxx_destruct;
- (id)_createScorer;
- (void)_getScoreWithNonce:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (double)deviceScoreTimeout;
- (void)deviceScoreWithNonce:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)peerPaymentDeviceScoreWithCompletion:(id /* block */)arg1;
- (void)setDeviceScoreTimeout:(double)arg1;

@end
