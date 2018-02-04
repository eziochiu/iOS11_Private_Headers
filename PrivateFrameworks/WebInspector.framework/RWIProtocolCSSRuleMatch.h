/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *matchingSelectors;
@property (nonatomic, retain) RWIProtocolCSSRule *rule;

- (id)initWithRule:(id)arg1 matchingSelectors:(id)arg2;
- (id)matchingSelectors;
- (id)rule;
- (void)setMatchingSelectors:(id)arg1;
- (void)setRule:(id)arg1;

@end
