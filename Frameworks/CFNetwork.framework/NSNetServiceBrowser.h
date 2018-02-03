/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetServiceBrowser : NSObject {
    id  _delegate;
    bool  _includesPeerToPeer;
    id  _netServiceBrowser;
    void * _reserved;
}

@property <NSNetServiceBrowserDelegate> *delegate;
@property bool includesPeerToPeer;

- (void)_dispatchCallBack:(void*)arg1 flags:(unsigned long long)arg2 error:(struct { long long x1; int x2; })arg3;
- (bool)_includesAWDL;
- (struct __CFNetServiceBrowser { }*)_internalNetServiceBrowser;
- (void)_setIncludesAWDL:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (bool)includesPeerToPeer;
- (id)init;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)searchForAllDomains;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIncludesPeerToPeer:(bool)arg1;
- (void)stop;

@end