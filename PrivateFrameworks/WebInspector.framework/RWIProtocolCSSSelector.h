/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic) bool dynamic;
@property (nonatomic, copy) NSArray *specificity;
@property (nonatomic, copy) NSString *text;

- (bool)dynamic;
- (id)initWithText:(id)arg1;
- (void)setDynamic:(bool)arg1;
- (void)setSpecificity:(id)arg1;
- (void)setText:(id)arg1;
- (id)specificity;
- (id)text;

@end