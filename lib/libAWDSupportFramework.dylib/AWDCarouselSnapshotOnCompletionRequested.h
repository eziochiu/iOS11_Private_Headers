/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselSnapshotOnCompletionRequested : PBCodable <NSCopying> {
    AWDCarouselAppInfo * _app;
    AWDCarouselErrorInfo * _error;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDCarouselAppInfo *app;
@property (nonatomic, retain) AWDCarouselErrorInfo *error;
@property (nonatomic, readonly) bool hasApp;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (id)app;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasApp;
- (bool)hasError;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApp:(id)arg1;
- (void)setError:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
