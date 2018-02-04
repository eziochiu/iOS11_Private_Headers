/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSValidationSession : NSObject {
    NSString * _IMEI;
    NSString * _MEID;
    NSString * _UDID;
    NSData * _helloMessage;
    struct PSCSessionInternal_ { } * _pscSession;
    NSObject<OS_dispatch_queue> * _queue;
    CdQwUTvJnDEPQgR8 * _scorer;
    NSData * _scoringNonce;
    NSString * _serialNumber;
    long long  _stateFlags;
}

@property (nonatomic, copy) NSString *IMEI;
@property (nonatomic, copy) NSString *MEID;
@property (nonatomic, copy) NSString *UDID;
@property (nonatomic, copy) NSData *helloMessage;
@property (nonatomic, readonly) bool isInitializedForScoring;
@property (nonatomic, readonly) bool isInitializedForSigning;
@property (nonatomic, readonly) bool isUsingAbsintheV4;
@property (nonatomic, readonly) bool isUsingBAA;
@property (nonatomic) struct PSCSessionInternal_ { }*pscSession;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CdQwUTvJnDEPQgR8 *scorer;
@property (nonatomic, copy) NSData *scoringNonce;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic) long long stateFlags;

+ (bool)isScoringSupported;
+ (bool)isSigningSupported;

- (void).cxx_destruct;
- (id)IMEI;
- (id)MEID;
- (id)UDID;
- (id)activateWithValidationData:(id)arg1 serverKey:(id)arg2 scoringNonce:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)deviceAbsintheIMEI;
- (id)deviceAbsintheMEID;
- (id)deviceAbsintheSerialNumber;
- (id)deviceAbsintheUDID;
- (void)deviceScoreWithCompletion:(id /* block */)arg1;
- (id)helloMessage;
- (id)initWithQueue:(id)arg1;
- (id)initialize;
- (void)invalidate;
- (bool)isInitializedForScoring;
- (bool)isInitializedForSigning;
- (bool)isUsingAbsintheV4;
- (bool)isUsingBAA;
- (struct PSCSessionInternal_ { }*)pscSession;
- (id)queue;
- (id)scorer;
- (id)scoringNonce;
- (id)serialNumber;
- (void)setHelloMessage:(id)arg1;
- (void)setIMEI:(id)arg1;
- (void)setMEID:(id)arg1;
- (void)setPscSession:(struct PSCSessionInternal_ { }*)arg1;
- (void)setQueue:(id)arg1;
- (void)setScorer:(id)arg1;
- (void)setScoringNonce:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStateFlags:(long long)arg1;
- (void)setUDID:(id)arg1;
- (id)signData:(id)arg1;
- (long long)stateFlags;

@end
