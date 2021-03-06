/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCImageQueue : NSObject {
    struct _CAImageQueue { } * _caQueue;
    struct OpaqueFigImageQueue { } * _figQueue;
    unsigned int  _frameRate;
    bool  _imageQueueProtected;
    unsigned int  _slot;
}

@property unsigned int frameRate;
@property bool imageQueueProtected;

+ (id)drawingContext;

- (void)dealloc;
- (bool)enqueueFrame:(struct __CVBuffer { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (unsigned int)frameRate;
- (void)getQueueRepresentation:(void*)arg1;
- (bool)imageQueueProtected;
- (id)initWithFrameRate:(unsigned char)arg1;
- (id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(bool)arg2;
- (void)pause;
- (void)setFrameRate:(unsigned int)arg1;
- (void)setImageQueueProtected:(bool)arg1;
- (unsigned int)setVideoDestination:(id)arg1;
- (void)start;
- (void)stop;

@end
