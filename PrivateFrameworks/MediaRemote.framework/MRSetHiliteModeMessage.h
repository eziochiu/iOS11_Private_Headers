/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetHiliteModeMessage : MRProtocolMessage

@property (nonatomic, readonly) bool hiliteMode;

- (bool)hiliteMode;
- (id)initWithHiliteMode:(bool)arg1;
- (unsigned long long)type;

@end
