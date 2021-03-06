/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCRateControlBandwidthEstimator : NSObject {
    int  _bandwidthDivergeCount;
    unsigned int  _bandwidthEstimationState;
    unsigned int  _earlyBytesInProbingSequence;
    unsigned int  _earlyPacketsInProbingSequence;
    double  _earlyProbingPacketArrivalTime;
    double  _estimatedBandwidth;
    double  _firstDivergeTime;
    bool  _isFirstBWEstimationReleased;
    bool  _isInitialized;
    double  _lastPacketInProbingSequenceArrivalTime;
    unsigned int  _lastProbingSequenceReferenceTimestamp;
    double  _maxDetectableBandwidth;
    unsigned int  _maxOverRangePacketsCount;
    double  _minEstimationWindowDuration;
    unsigned int  _minPacketsCount;
    unsigned int  _mode;
    unsigned int  _overRangePacketsCount;
    unsigned int  _radioAccessTechnology;
    double  _referencePacketArrivalTime;
    unsigned int  _referencePacketDataSize;
    double  _suddenChangeBandwidthBuffer;
    int  _suddenChangeBandwidthBufferIndex;
    SuddenChangeParameters * _suddenChangeParameters;
    double  _totalBandwidth;
    unsigned int  _totalBytesInProbingSequence;
    unsigned int  _totalPacketsInProbingSequence;
}

@property (nonatomic) double estimatedBandwidth;
@property (nonatomic) unsigned int mode;
@property (nonatomic) unsigned int radioAccessTechnology;

- (void)calculateBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned int)arg2 mediaDataSize:(unsigned int)arg3 probingSequence:(bool)arg4 probingSequenceID:(unsigned int)arg5;
- (void)compensateSuddenChangeBandwidths;
- (void)dealloc;
- (void)detectSuddenChangeWithBandwidth:(double)arg1 suddenChangeAbove:(bool*)arg2 suddenChangeBelow:(bool*)arg3;
- (double)estimatedBandwidth;
- (id)init;
- (void)initializeBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned int)arg2 probingSequence:(bool)arg3 probingSequenceID:(unsigned int)arg4;
- (bool)isPacketProcessedLateWithArrivalTime:(double)arg1;
- (bool)isSuddenChangeDurationMetAtArrivalTime:(double)arg1;
- (unsigned int)mode;
- (unsigned int)radioAccessTechnology;
- (void)recordSuddenChangeBandwidth:(double)arg1;
- (void)setEstimatedBandwidth:(double)arg1;
- (void)setMode:(unsigned int)arg1;
- (void)setRadioAccessTechnology:(unsigned int)arg1;
- (void)updateBandwidthDivergeCountAtArrivalTime:(double)arg1 suddenChangeAbove:(bool)arg2 suddenChangeBelow:(bool)arg3;
- (double)updateBandwidthEstimation:(double)arg1 arrivalTime:(double)arg2 probingSequenceDuration:(double)arg3 probingSequenceSize:(unsigned int)arg4 packetsInProbingSequence:(unsigned int)arg5;
- (void)updateInitialBandwidthEstimationForCellularAtTime:(double)arg1 bandwidth:(double)arg2;
- (void)updateQualificationParameters;

@end
