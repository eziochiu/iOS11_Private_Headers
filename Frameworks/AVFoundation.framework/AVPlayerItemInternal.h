/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemInternal : NSObject {
    <NSObject><NSCopying> * AVKitData;
    struct CGSize { 
        double width; 
        double height; 
    }  IFramePrefetchTargetDimensions;
    unsigned int  RTCReportingFlags;
    NSURL * URL;
    bool  aggressivelyCachesVideoFrames;
    bool  aggressivelyCachesVideoFramesWasSet;
    bool  allowProgressiveResume;
    bool  allowProgressiveStartup;
    bool  allowProgressiveSwitchUp;
    AVAsset * asset;
    AVAsset * assetWithFigPlaybackItem;
    NSDictionary * audibleDRMInfo;
    AVAudioMix * audioMix;
    NSArray * automaticallyLoadedAssetKeys;
    bool  blendsVideoFrames;
    bool  blendsVideoFramesWasSet;
    NSArray * cachedTracks;
    bool  canUseExtraNetworking;
    AVWeakReference * clientsOriginalVideoComposition;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    <AVPlayerItemDelegate> * delegate;
    bool  didBecomeReadyForBasicInspection;
    bool  didBecomeReadyForInspectionOfDuration;
    bool  didBecomeReadyForInspectionOfMediaSelectionOptions;
    bool  didBecomeReadyForInspectionOfPresentationSize;
    bool  didBecomeReadyForInspectionOfTracks;
    bool  didFireKVOForAssetForNonStreamingItem;
    bool  didInformObserversAboutAvailabilityOfTracks;
    bool  didSetAssetToAssetWithFigPlaybackItem;
    int  eqPreset;
    NSError * error;
    bool  externalProtectionRequested;
    struct OpaqueFigCPEProtector { } * figCPEProtector;
    NSObject<OS_dispatch_queue> * figConfigurationQueue;
    struct OpaqueFigPlaybackItem { } * figPlaybackItem;
    NSObject<OS_dispatch_queue> * figPlaybackItemAccessorQueue;
    struct OpaqueCMTimebase { } * figTimebase;
    void * figVideoCompositor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  forwardPlaybackEndTime;
    NSDictionary * gaplessInfo;
    NSMutableArray * handlersToCallWhenReadyForEnqueueing;
    bool  haveCPEProtector;
    bool  haveInitialSamples;
    NSArray * imageQueueInterpolationCurve;
    bool  imageQueueInterpolationCurveWasSet;
    bool  initialAlwaysMonitorsPlayability;
    bool  initialContinuesPlayingDuringPrerollForRateChange;
    bool  initialContinuesPlayingDuringPrerollForSeek;
    NSDate * initialDate;
    NSDate * initialEstimatedDate;
    struct __CFString { } * initialFigTimePitchAlgorithm;
    bool  initialLimitReadAhead;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  initialMaxSnapTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  initialMinSnapTime;
    long long  initialPlaybackLikelyToKeepUpTrigger;
    unsigned int  initialSetTimeFlags;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  initialTime;
    long long  initialVariantIndex;
    bool  initialWillNeverSeekBackwardsHint;
    NSArray * itemCollectors;
    NSMutableDictionary * itemLegibleOutputsForKeys;
    NSMutableArray * itemMetadataCollectors;
    NSMutableDictionary * itemMetadataOutputsForKeys;
    NSArray * itemOutputs;
    NSMutableArray * itemVideoOutputs;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  maximumForwardBufferDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  maximumTrailingBufferDuration;
    NSString * mediaKind;
    NSMutableDictionary * mediaOptionsSelectedByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minimumIntervalForIFrameOnlyPlayback;
    bool  minimumIntervalForIFrameOnlyPlaybackWasSet;
    AVAudioMix * mostRecentlyAppliedAudioMix;
    bool  needTimedMetadataNotification;
    bool  needToSeekAfterCreatingFigPlaybackItem;
    bool  networkUsuallyExceedsMaxBitRate;
    AVPlayerItem * nextItem;
    unsigned int  nextSeekIDToGenerate;
    bool  nonForcedSubtitlesEnabled;
    int  pendingSeekID;
    struct OpaqueVTPixelBufferAttributesMediator { } * pixelBufferAttributeMediator;
    bool  playHapticTracks;
    AVPlayerConnection * playerConnection;
    AVWeakReference * playerReference;
    struct CGSize { 
        double width; 
        double height; 
    }  preferredMaximumResolution;
    double  preferredPeakBitRate;
    AVPlayerItem * previousItem;
    AVPropertyStorage * propertyStorage;
    struct OpaqueCMTimebase { } * proxyTimebase;
    NSDictionary * rampInOutInfo;
    bool  requiresAccessLog;
    unsigned long long  restrictions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  reversePlaybackEndTime;
    bool  reversesMoreVideoFramesInMemory;
    bool  reversesMoreVideoFramesInMemoryWasSet;
    bool  savesDownloadedDataToDiskWhenDone;
    id /* block */  seekCompletionHandler;
    struct OpaqueFigSimpleMutex { } * seekIDMutex;
    NSObject<OS_dispatch_queue> * seekQueue;
    bool  seekingWaitsForVideoCompositionRendering;
    NSString * serviceIdentifier;
    float  soundCheckVolumeNormalization;
    float  speedThresholdForIFrameOnlyPlayback;
    bool  speedThresholdForIFrameOnlyPlaybackWasSet;
    NSObject<OS_dispatch_queue> * stateDispatchQueue;
    long long  status;
    bool  suppressesAudioOnlyVariants;
    bool  suppressesVideoLayers;
    NSMutableArray * syncLayers;
    NSArray * textStyleRules;
    NSArray * timedMetadata;
    NSArray * trackIDsForAssetWithFigPlaybackItem;
    bool  usesIFrameOnlyPlaybackForHighRateScaledEdits;
    bool  usesIFrameOnlyPlaybackForHighRateScaledEditsWasSet;
    bool  usesMinimalLatencyForVideoCompositionRendering;
    NSString * videoApertureMode;
    AVVideoComposition * videoComposition;
    float  volumeAdjustment;
    bool  wasInitializedWithURL;
    AVWeakReference * weakReference;
}

@end
