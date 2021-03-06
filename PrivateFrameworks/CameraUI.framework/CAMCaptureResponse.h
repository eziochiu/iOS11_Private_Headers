/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureResponse : NSObject {
    unsigned short  _sessionIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly) long long type;

- (id)init;
- (id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)releaseCachedImages;
- (unsigned short)sessionIdentifier;
- (long long)type;

@end
