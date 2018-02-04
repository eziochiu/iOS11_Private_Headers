/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTSiriPHash : NSObject {
    short  _signalEstimate;
}

@property short signalEstimate;

+ (id)sharedPhash;

- (id)init;
- (unsigned short)pHash:(float*)arg1 length:(int)arg2;
- (void)setSignalEstimate:(short)arg1;
- (short)signalEstimate;

@end
