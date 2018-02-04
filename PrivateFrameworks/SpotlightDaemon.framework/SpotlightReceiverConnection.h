/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SpotlightReceiverConnection : CSXPCConnection {
    NSSet * _INIntentClassNames;
    NSSet * _bundleIDs;
    NSArray * _contentTypes;
    bool  _disabled;
    NSMutableSet * _negativeSet;
    NSMutableSet * _positiveSet;
    unsigned int  _requestCount;
    NSObject<OS_dispatch_queue> * _senderQueue;
    NSString * _serviceName;
    bool  _setupComplete;
    NSObject<OS_dispatch_semaphore> * _setupSemaphore;
    int  _supportedJobs;
    bool  _wantsHTML;
    bool  _wantsText;
}

@property (nonatomic, readonly) NSSet *INIntentClassNames;
@property (nonatomic, readonly) NSSet *bundleIDs;
@property (nonatomic, readonly) NSArray *contentTypes;
@property (nonatomic, readonly) unsigned int requestCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *senderQueue;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic) bool setupComplete;
@property (retain) NSObject<OS_dispatch_semaphore> *setupSemaphore;
@property (nonatomic, readonly) int supportedJobs;
@property (nonatomic, readonly) bool unresponsive;
@property (nonatomic) bool wantsHTML;
@property (nonatomic) bool wantsText;

+ (void)setup;

- (void).cxx_destruct;
- (id)INIntentClassNames;
- (bool)_wantsBundleID:(id)arg1;
- (bool)_wantsContentType:(id)arg1;
- (void)addInteraction:(id)arg1 intentClassName:(id)arg2 bundleID:(id)arg3 protectionClass:(id)arg4;
- (void)addUserActions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)bundleIDs;
- (bool)canRun;
- (id)contentTypes;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteFromBundle:(id)arg1;
- (void)deleteFromBundle:(id)arg1 contentType:(id)arg2 identifiers:(id)arg3;
- (void)deleteFromBundle:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1 encodedIdentifiers:(id)arg2;
- (void)deleteFromBundle:(id)arg1 sinceDate:(id)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)disableReceiver;
- (void)enableReceiver;
- (void)handleError:(id)arg1;
- (void)indexFromBundle:(id)arg1 protectionClass:(id)arg2 items:(id)arg3 itemsContent:(id)arg4;
- (id)initWithServiceName:(id)arg1 clientID:(long long)arg2 wantsText:(bool)arg3 wantsHTML:(bool)arg4;
- (void)invalidationHandler;
- (void)purgeFromBundle:(id)arg1 identifiers:(id)arg2;
- (void)receiverRequestComplete;
- (void)receiverRequestStart;
- (unsigned int)requestCount;
- (void)runOnSenderQueue:(id /* block */)arg1;
- (id)senderQueue;
- (id)serviceName;
- (void)setSetupComplete:(bool)arg1;
- (void)setSetupSemaphore:(id)arg1;
- (void)setWantsHTML:(bool)arg1;
- (void)setWantsText:(bool)arg1;
- (bool)setupComplete;
- (void)setupComplete:(bool)arg1;
- (id)setupSemaphore;
- (void)startSetup;
- (int)supportedJobs;
- (bool)unresponsive;
- (bool)wantsHTML;
- (bool)wantsText;

@end