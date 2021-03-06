/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamReceiver : NSObject <VCMediaStreamSyncDestination> {
    struct OpaqueCMMemoryPool { } * _blockBufferMemoryPool;
    struct __CFAllocator { } * _blockBufferMemoryPoolAllocator;
    unsigned long long  _cvoExtensionID;
    struct OpaqueVTDecompressionSession { } * _decompressionSession;
    <VCVideoStreamReceiverDelegate> * _delegate;
    bool  _enableCVO;
    bool  _enableReceiveBitstreamDump;
    unsigned char  _firSequenceNumber;
    struct opaqueCMFormatDescription { } * _formatDescription;
    struct tagHANDLE { int x1; } * _hRTP;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastDisplayTime;
    double  _lastFIRArrivalTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastFrameTime;
    unsigned long long  _lastKeyFrameSampleBufferSize;
    double  _lastReceivedVideoRTCPPacketTime;
    double  _lastReceivedVideoRTPPacketTime;
    unsigned short  _lastSequenceNumber;
    unsigned int  _lastVideoTimestamp;
    VCMediaStreamSynchronizer * _mediaStreamSynchronizer;
    unsigned int  _mostRecentTimestamp;
    struct OpaqueFigThread { } * _networkReceiveThread;
    VCVideoStreamRateAdaptation * _rateAdaptation;
    unsigned int  _receivedBytes;
    bool  _receivedFirstPacket;
    bool  _receivedFirstRemoteFrame;
    VideoAttributes * _remoteVideoAttributes;
    int  _remoteVideoCamera;
    int  _remoteVideoOrientation;
    struct opaqueRTCReporting { } * _reportingAgent;
    double  _reportingIntervalStartTime;
    double  _reportingLastUpdateTime;
    double  _roundTripTime;
    bool  _runNetworkReceiveThread;
    int  _sRecvReset;
    int  _sequenceNumberOutOfOrder;
    VCMediaStreamStats * _stats;
    id  _syncSource;
    struct VideoPacketBuffer_t { } * _videoPacketBuffer;
    struct opaqueCMBufferQueue { } * _videoQueue;
    unsigned int  _videoStallDurationMillis;
    double  _videoStallStartTime;
    NSObject<OS_dispatch_queue> * _videoStreamReceiverQueue;
    unsigned int  _videoTimestampWrapCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCVideoStreamReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double lastReceivedVideoRTCPPacketTime;
@property (readonly) double lastReceivedVideoRTPPacketTime;
@property int remoteVideoOrientation;
@property double roundTripTime;
@property (readonly) Class superclass;
@property (nonatomic) <VCMediaStreamSyncSource> *syncSource;

- (bool)canDequeue:(struct opaqueCMBufferQueue { }*)arg1 forTimestamp:(unsigned int)arg2;
- (void)createDecodeSession:(struct opaqueCMFormatDescription { }*)arg1;
- (void)dealloc;
- (int)decodeFrame:(struct opaqueCMSampleBuffer { }*)arg1 showFrame:(bool)arg2;
- (id)delegate;
- (void)dequeueAndDecodeForTimestamp:(unsigned int)arg1;
- (void)gatherRealtimeStats:(struct __CFDictionary { }*)arg1;
- (void)handleAlarmForTimeStamp:(unsigned int)arg1;
- (bool)handleRemoteVideoAttributesChange:(struct __CVBuffer { }*)arg1;
- (id)initWithRTP:(struct tagHANDLE { int x1; }*)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3 dumpID:(unsigned int)arg4;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void*)networkReceivePackets;
- (void)pauseVideo;
- (void)processReceptionReportBlock:(struct tagRTCP_RRB { unsigned int x1; unsigned int x2 : 8; unsigned int x3 : 24; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; }*)arg1 arrivalNTPTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg2;
- (int)processVideoRTCP;
- (int)processVideoRTP;
- (int)remoteVideoOrientation;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (double)roundTripTime;
- (void)rtcpSendIntervalElapsed;
- (int)scheduleDecodeForFrameWithBuffer:(char *)arg1 size:(unsigned long long)arg2 timestamp:(unsigned int)arg3 hostTime:(double)arg4 showFrame:(bool)arg5;
- (void)scheduleDecodeForTimestamp:(unsigned int)arg1;
- (void)scheduleVideoDecode:(unsigned int*)arg1 schedule_n:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setRemoteVideoOrientation:(int)arg1;
- (void)setRoundTripTime:(double)arg1;
- (void)setSyncSource:(id)arg1;
- (int)showDecodedFrame:(struct __CVBuffer { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (int)startNetworkReceiveThread;
- (bool)startSynchronization:(id)arg1;
- (void)startVideo;
- (int)stopNetworkReceiveThread;
- (void)stopSynchronization;
- (void)stopVideo;
- (id)syncSource;
- (void)teardownDecodeSession:(bool)arg1;
- (void)updateSequenceNumber:(unsigned short)arg1;
- (void)updateVideoStallStatus:(bool)arg1;

@end
