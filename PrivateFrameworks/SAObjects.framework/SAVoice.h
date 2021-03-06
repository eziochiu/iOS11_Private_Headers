/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVoice : SADomainObject

@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *languageString;
@property (nonatomic, copy) NSString *masteredVersion;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *quality;
@property (nonatomic, copy) NSString *voiceType;

+ (id)voice;
+ (id)voiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageString;
- (id)masteredVersion;
- (id)name;
- (id)quality;
- (void)setGender:(id)arg1;
- (void)setLanguageString:(id)arg1;
- (void)setMasteredVersion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQuality:(id)arg1;
- (void)setVoiceType:(id)arg1;
- (id)voiceType;

@end
