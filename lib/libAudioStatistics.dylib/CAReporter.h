/* made by EzioChiu
   Image: /usr/lib/libAudioStatistics.dylib
 */

@interface CAReporter : NSObject {
    bool  _removedByClient;
    long long  _reporterID;
    unsigned short  _serviceType;
}

@property bool removedByClient;
@property (readonly) long long reporterID;
@property (nonatomic) unsigned short serviceType;

+ (void)sendSingleMessage:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;

- (void)cacheServiceType:(unsigned short)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNewReporterID;
- (id)initWithReporterID:(long long)arg1 serviceType:(unsigned short)arg2;
- (bool)removedByClient;
- (long long)reporterID;
- (void)sendMessage:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;
- (unsigned short)serviceType;
- (void)setRemovedByClient:(bool)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)start;
- (void)stop;
- (void)updateWithReporterID:(long long)arg1;

@end
