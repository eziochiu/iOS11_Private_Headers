/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSLanguageCodeUpdateMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveLanguageCodeUpdate;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;

@end
