/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *media;
@property (nonatomic) long long origin;
@property (nonatomic, retain) RWIProtocolCSSRuleId *ruleId;
@property (nonatomic, retain) RWIProtocolCSSSelectorList *selectorList;
@property (nonatomic) int sourceLine;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic, retain) RWIProtocolCSSStyle *style;

- (id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;
- (id)media;
- (long long)origin;
- (id)ruleId;
- (id)selectorList;
- (void)setMedia:(id)arg1;
- (void)setOrigin:(long long)arg1;
- (void)setRuleId:(id)arg1;
- (void)setSelectorList:(id)arg1;
- (void)setSourceLine:(int)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStyle:(id)arg1;
- (int)sourceLine;
- (id)sourceURL;
- (id)style;

@end
