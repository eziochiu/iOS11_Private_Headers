/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

@interface SWCManager : NSObject <NSURLSessionDelegate, NSXPCListenerDelegate, SWCXPCServer> {
    bool  _addedAllApps;
    bool  _allowUnsigned;
    NSMutableArray * _database;
    NSMutableArray * _deferredRequests;
    unsigned int  _maxNetRequests;
    NSMutableArray * _netRequests;
    bool  _obfuscateLogs;
    bool  _rebuildDatabase;
    long long  _recheckFailureMaxCount;
    long long  _recheckFailureSecs;
    double  _recheckForceTime;
    long long  _recheckSuccessSecs;
    bool  _recheckVersionChange;
    bool  _redirects;
    bool  _started;
    NSURLSession * _urlSession;
    bool  _verifyEV;
    bool  _wellKnown;
    bool  _wildcardDomains;
    NSXPCListener * _xpcListener;
    NSMutableArray * _xpcRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (id)_appEntitlementsByID:(id)arg1;
- (void)_completeAppsRequestForTask:(id)arg1 status:(int)arg2 services:(id)arg3;
- (void)_connectionInvalidated:(id)arg1;
- (int)_ensureDatabaseLoaded;
- (bool)_equivalentDomain:(id)arg1 toDomain:(id)arg2 wildcards:(bool)arg3;
- (id)_findAppRequestForTask:(id)arg1;
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3;
- (id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3 wildcards:(bool)arg4;
- (id)_installedAppByID:(id)arg1;
- (id)_obfuscatedDomain:(id)arg1;
- (void)_parseServiceDomainString:(id)arg1 legacy:(bool)arg2 service:(id*)arg3 domain:(id*)arg4;
- (void)_processDeferredNetRequests;
- (void)_recheckPerform;
- (void)_recheckSchedule;
- (void)_recheckStartTimer:(double)arg1;
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;
- (void)_sanitizeDatabase;
- (int)_saveDatabase;
- (int)_startAppsRequestForDomain:(id)arg1;
- (int)_startAppsRequestForDomain:(id)arg1 wellKnown:(bool)arg2 immediate:(bool)arg3;
- (int)_verifyTrust:(struct __SecTrust { }*)arg1 isFile:(bool)arg2;
- (void)addAllAppleApps;
- (void)addAllApps;
- (void)addAllAppsWithReply:(id /* block */)arg1;
- (void)addBundleID:(id)arg1;
- (void)addBundleID:(id)arg1 preApproved:(bool)arg2;
- (void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)logControl:(id)arg1 reply:(id /* block */)arg2;
- (void)removeBundleID:(id)arg1;
- (void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(id /* block */)arg4;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(id /* block */)arg5;
- (void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned int)arg4 flags:(unsigned int)arg5 reply:(id /* block */)arg6;
- (void)show:(id)arg1 reply:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
