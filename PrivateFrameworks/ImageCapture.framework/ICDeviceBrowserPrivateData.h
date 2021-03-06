/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceBrowserPrivateData : NSObject {
    bool  _browsing;
    id  _delegate;
    NSMutableArray * _internalDevices;
}

@property (getter=isBrowsing) bool browsing;
@property id delegate;
@property (retain) NSMutableArray *internalDevices;

- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)internalDevices;
- (bool)isBrowsing;
- (void)setBrowsing:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInternalDevices:(id)arg1;

@end
