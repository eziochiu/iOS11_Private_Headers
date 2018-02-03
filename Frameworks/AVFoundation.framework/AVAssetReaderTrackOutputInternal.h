/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderTrackOutputInternal : NSObject {
    bool  appliesPreferredTrackTransform;
    NSString * audioTimePitchAlgorithm;
    AVOutputSettings * outputSettings;
    AVAssetTrack * track;
    AVWeakReference * weakReferenceToAttachedAdaptor;
}

@end