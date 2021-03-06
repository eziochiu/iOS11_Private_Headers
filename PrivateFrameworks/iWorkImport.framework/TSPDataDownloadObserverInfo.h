/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo

- (id)initWithDownloadObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(bool)arg4 completionHandler:(id /* block */)arg5;
- (bool)shouldClearObserverForStatus:(long long)arg1;
- (bool)shouldNotifyStatus:(long long)arg1;

@end
