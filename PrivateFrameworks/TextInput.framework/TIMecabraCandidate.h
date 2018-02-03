/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIMecabraCandidate : TIKeyboardCandidate {
    bool  _OTAWordListCandidate;
    NSString * _candidate;
    long long  _cursorMovement;
    unsigned long long  _deleteCount;
    bool  _emojiCandidate;
    bool  _extensionCandidate;
    NSString * _input;
    bool  _isAutocorrection;
    bool  _isForShortcutConversion;
    NSNumber * _mecabraCandidatePointerValue;
    bool  _regionalCandidate;
}

@property (nonatomic, retain) NSNumber *mecabraCandidatePointerValue;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (void)dealloc;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)input;
- (bool)isAutocorrection;
- (bool)isEmojiCandidate;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isOTAWordListCandidate;
- (bool)isRegionalCandidate;
- (id)label;
- (id)mecabraCandidatePointerValue;
- (void)setMecabraCandidatePointerValue:(id)arg1;

@end
