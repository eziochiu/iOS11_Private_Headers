/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolCSSSourceRange *range;
@property (nonatomic, copy) NSArray *selectors;
@property (nonatomic, copy) NSString *text;

- (id)initWithSelectors:(id)arg1 text:(id)arg2;
- (id)range;
- (id)selectors;
- (void)setRange:(id)arg1;
- (void)setSelectors:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
