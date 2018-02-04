/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFSecureElementManagerSession : NFSession <NFAppletCollection, NFSecureElementManagerSessionCallbacks> {
    NSMutableDictionary * _appletsById;
    bool  _hasApplets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_appletsById;
- (void)_setApplets:(id)arg1;
- (bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3;
- (bool)addExpressApplet:(id)arg1 type:(unsigned char)arg2 authorization:(id)arg3 error:(id*)arg4;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (bool)deleteAllApplets:(bool)arg1;
- (bool)deleteAllApplets:(bool)arg1 error:(id*)arg2;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2;
- (bool)deleteApplets:(id)arg1 queueServerConnection:(bool)arg2 error:(id*)arg3;
- (void)didExitRestrictedMode:(id)arg1;
- (bool)didExitRestrictedMode:(id)arg1 error:(id*)arg2;
- (bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2;
- (bool)disableAuthorizationForApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2;
- (id)dumpDomain:(unsigned char)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (id)expressAccessIdentifiers;
- (id)expressAccessIdentifiersWithError:(id*)arg1;
- (id)expressAppletIdentifiers;
- (id)expressAppletIdentifiersWithError:(id*)arg1;
- (bool)expressModesEnabled;
- (bool)expressModesEnabledWithError:(id*)arg1;
- (id)expressTransitIdentifier;
- (id)expressTransitIdentifierWithError:(id*)arg1;
- (id)felicaAppletState:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id*)arg2;
- (id)getAttackCounterLogForSEID:(id)arg1;
- (id)getAttackCounterLogForSEID:(id)arg1 error:(id*)arg2;
- (bool)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2;
- (bool)getCryptogram:(id*)arg1 challengeResponse:(id*)arg2 error:(id*)arg3;
- (id)getSignedPlatformDataForSeid:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)performPeerPaymentEnrollment:(id)arg1 error:(id*)arg2;
- (bool)powerCycleSEID:(id)arg1 error:(id*)arg2;
- (bool)refreshSecureElement:(id)arg1;
- (bool)refreshSecureElement:(id)arg1 error:(id*)arg2;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 error:(id*)arg3;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(bool)arg3;
- (bool)removeExpressApplet:(id)arg1 type:(unsigned char)arg2 restoreAuthorization:(bool)arg3 error:(id*)arg4;
- (bool)restoreAuthorizationForAllAppletsExcept:(id)arg1;
- (bool)restoreAuthorizationForAllAppletsExcept:(id)arg1 error:(id*)arg2;
- (unsigned int)runScript:(id)arg1 forSEID:(id)arg2 results:(id*)arg3 lastStatus:(unsigned long long*)arg4;
- (unsigned int)runScript:(id)arg1 whitelist:(id)arg2 forSEID:(id)arg3 results:(id*)arg4 lastStatus:(unsigned long long*)arg5 willCheckWhitelist:(bool)arg6 initialSelectBeforeRun:(bool)arg7;
- (bool)setExpressModesEnabled:(bool)arg1;
- (bool)setExpressModesEnabled:(bool)arg1 error:(id*)arg2;
- (id)signChallenge:(id)arg1 certs:(id*)arg2;
- (id)signChallenge:(id)arg1 certs:(id*)arg2 error:(id*)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 certs:(id*)arg3 error:(id*)arg4;
- (id)signChallenge:(id)arg1 forAID:(id)arg2 sigInfo:(id*)arg3 error:(id*)arg4;
- (id)signChallenge:(id)arg1 useOSVersion:(bool)arg2 signatureInfo:(id*)arg3;
- (id)signChallenge:(id)arg1 useOSVersion:(bool)arg2 signatureInfo:(id*)arg3 error:(id*)arg4;
- (id)stateInformation;
- (id)stateInformationWithError:(id*)arg1;
- (id)transceive:(id)arg1 forSEID:(id)arg2;
- (id)transceive:(id)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (unsigned int)validateSEPairings:(id*)arg1;

@end