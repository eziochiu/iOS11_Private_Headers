/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPasscodeCredentials : NSObject {
    unsigned long long  _characterCount;
    NSString * _passcode;
    unsigned int  _type;
}

@property (nonatomic) unsigned long long characterCount;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic) unsigned int type;

+ (id)_randomPasscode;
+ (id)standardCredentials;

- (unsigned long long)characterCount;
- (void)dealloc;
- (id)passcode;
- (void)setCharacterCount:(unsigned long long)arg1;
- (void)setPasscode:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;

@end
