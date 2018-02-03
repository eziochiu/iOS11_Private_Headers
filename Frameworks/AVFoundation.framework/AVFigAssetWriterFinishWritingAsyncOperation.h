/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetWriterFinishWritingAsyncOperation : AVOperation <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } * _figAssetWriter;
    AVAssetWriterFigAssetWriterNotificationHandler * _notificationHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (void)didEnterTerminalState;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(bool)arg1 error:(id)arg2;
- (void)finalize;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1;
- (bool)isAsynchronous;
- (void)start;

@end