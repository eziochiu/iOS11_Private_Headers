/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface MyProgressReporter : NSObject {
    NSProgress * _progress;
    bool  _receivedProgressUpdate;
}

@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic) bool receivedProgressUpdate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (bool)receivedProgressUpdate;
- (void)setProgress:(id)arg1;
- (void)setReceivedProgressUpdate:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
