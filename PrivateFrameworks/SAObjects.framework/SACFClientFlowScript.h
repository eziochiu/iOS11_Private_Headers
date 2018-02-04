/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFClientFlowScript : SABaseAceObject

@property (nonatomic, copy) NSData *compressedScript;
@property (nonatomic, copy) NSString *jsScript;
@property (nonatomic, copy) NSData *jsScriptChecksum;
@property (nonatomic, copy) NSString *jsScriptIdentifier;
@property (nonatomic) bool shouldCacheScript;

+ (id)clientFlowScript;
+ (id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2;

- (id)compressedScript;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)jsScript;
- (id)jsScriptChecksum;
- (id)jsScriptIdentifier;
- (void)setCompressedScript:(id)arg1;
- (void)setJsScript:(id)arg1;
- (void)setJsScriptChecksum:(id)arg1;
- (void)setJsScriptIdentifier:(id)arg1;
- (void)setShouldCacheScript:(bool)arg1;
- (bool)shouldCacheScript;

@end
