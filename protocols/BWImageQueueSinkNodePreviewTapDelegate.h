/* made by EzioChiu.
 */

@protocol BWImageQueueSinkNodePreviewTapDelegate <NSObject>

@required

- (void)imageQueueSinkNode:(BWImageQueueSinkNode *)arg1 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 withSuccess:(bool)arg3;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(BWImageQueueSinkNode *)arg1;

@end
