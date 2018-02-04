/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKHostResourcesOperation : CATOperation <CATRemoteConnectionDelegate, CRKIPAddressMonitorDelegate, NSNetServiceDelegate> {
    <CRKHostResourcesOperationDelegate> * _delegate;
    CRKIPAddressMonitor * mAddressMonitor;
    NSMutableSet * mConnectionCloseTimers;
    NSMutableSet * mConnections;
    NSDictionary * mFileURLsByFilePath;
    NSMutableDictionary * mFinishedDownloadCountByFileURL;
    unsigned long long  mMaximumDownloadCount;
    NSNetService * mNetService;
    unsigned short  mPort;
    bool  mPublished;
    id  mServerIdentity;
    NSMutableDictionary * mStartedDownloadCountByFileURL;
    NSError * mStashedError;
    NSArray * mTrustedCertificates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKHostResourcesOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allDownloadsFinished;
- (void)cancel;
- (void)connection:(id)arg1 didFailToSendDataWithStream:(id)arg2 userInfo:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 didInterruptWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveDataRequestWithURL:(id)arg2;
- (void)connection:(id)arg1 didSendDataWithStream:(id)arg2 userInfo:(id)arg3;
- (void)connectionCloseDidTimeout:(id)arg1;
- (void)connectionDidClose:(id)arg1;
- (id)delegate;
- (void)delegateDownloadFinished:(id)arg1 fileURL:(id)arg2 error:(id)arg3;
- (void)delegateDownloadStarted:(id)arg1 fileURL:(id)arg2;
- (void)delegateResourcesDidPublish;
- (bool)downloadAllowedForFileURL:(id)arg1;
- (id)hostingSocketOptions;
- (void)incrementFinishedDownloadCountForFileURL:(id)arg1;
- (void)incrementStartedDownloadCountForFileURL:(id)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3 maximumAllowedDownloads:(unsigned long long)arg4 port:(unsigned short)arg5;
- (void)ipAddressMonitorIPAddressDidChange:(id)arg1;
- (bool)isAsynchronous;
- (void)main;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)operationDidFinish;
- (void)run;
- (void)setDelegate:(id)arg1;

@end