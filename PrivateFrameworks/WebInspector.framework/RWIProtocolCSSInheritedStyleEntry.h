/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolCSSStyle *inlineStyle;
@property (nonatomic, copy) NSArray *matchedCSSRules;

- (id)initWithMatchedCSSRules:(id)arg1;
- (id)inlineStyle;
- (id)matchedCSSRules;
- (void)setInlineStyle:(id)arg1;
- (void)setMatchedCSSRules:(id)arg1;

@end
