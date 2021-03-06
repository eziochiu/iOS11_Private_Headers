/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACMutedMessage : PBCodable <NSCopying> {
    NSString * _category;
    struct { 
        unsigned int muted : 1; 
    }  _has;
    bool  _muted;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic) bool hasMuted;
@property (nonatomic) bool muted;

- (void).cxx_destruct;
- (id)category;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (bool)hasMuted;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)muted;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setHasMuted:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
