/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessCardIngester : NSObject <NFRemoteAdminEventListener> {
    id /* block */  _cardSessionTokenCompletionHandler;
    NSObject<OS_dispatch_queue> * _contactlessCardIngesterQueue;
    <PKContactlessCardIngesterDelegate> * _delegate;
    id /* block */  _disableCardCompletionHandler;
    bool  _listening;
    NSString * _pushTopic;
    NSDictionary * _readerModeMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_displayableErrorForSPStatusCode:(unsigned long long)arg1 seldError:(id)arg2;
+ (id)debugDescriptionForStatus:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_cancelCardIngestion;
- (void)_ingestCardWithCardSessionToken:(id)arg1 completion:(id /* block */)arg2;
- (void)_ingestCardWithCompletion:(id /* block */)arg1;
- (void)_startListeningToRemoteAdminEventsIfRequired;
- (void)_stopListeningToRemoteAdminEvents;
- (void)ingestCardWithCardSessionToken:(id)arg1 successHandler:(id /* block */)arg2;
- (void)ingestCardWithSuccessHandler:(id /* block */)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)readerModeCardIngestionStatus:(unsigned long long)arg1;
- (void)readerModeCardSessionToken:(id)arg1;

@end
