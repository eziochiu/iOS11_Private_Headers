/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSupport : PBCodable <NSCopying> {
    NSMutableArray * _intentsRestrictedWhileLockeds;
    NSMutableArray * _intentsSupporteds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *intentsRestrictedWhileLockeds;
@property (nonatomic, retain) NSMutableArray *intentsSupporteds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentsRestrictedWhileLockedType;
+ (Class)intentsSupportedType;

- (void).cxx_destruct;
- (void)addIntentsRestrictedWhileLocked:(id)arg1;
- (void)addIntentsSupported:(id)arg1;
- (void)clearIntentsRestrictedWhileLockeds;
- (void)clearIntentsSupporteds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)intentsRestrictedWhileLockedAtIndex:(unsigned long long)arg1;
- (id)intentsRestrictedWhileLockeds;
- (unsigned long long)intentsRestrictedWhileLockedsCount;
- (id)intentsSupportedAtIndex:(unsigned long long)arg1;
- (id)intentsSupporteds;
- (unsigned long long)intentsSupportedsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntentsRestrictedWhileLockeds:(id)arg1;
- (void)setIntentsSupporteds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
