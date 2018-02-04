/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPLocale : PBCodable <NSCopying> {
    NSString * _activeKeyboard;
    NSMutableArray * _enabledKeyboards;
    NSString * _languageCode;
    NSString * _regionCode;
}

@property (nonatomic, retain) NSString *activeKeyboard;
@property (nonatomic, retain) NSMutableArray *enabledKeyboards;
@property (nonatomic, readonly) bool hasActiveKeyboard;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasRegionCode;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *regionCode;

- (id)activeKeyboard;
- (void)addEnabledKeyboards:(id)arg1;
- (void)clearEnabledKeyboards;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enabledKeyboards;
- (id)enabledKeyboardsAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledKeyboardsCount;
- (bool)hasActiveKeyboard;
- (bool)hasLanguageCode;
- (bool)hasRegionCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionCode;
- (void)setActiveKeyboard:(id)arg1;
- (void)setEnabledKeyboards:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end