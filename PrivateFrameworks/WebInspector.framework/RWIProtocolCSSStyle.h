/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *cssProperties;
@property (nonatomic, copy) NSString *cssText;
@property (nonatomic, copy) NSString *height;
@property (nonatomic, retain) RWIProtocolCSSSourceRange *range;
@property (nonatomic, copy) NSArray *shorthandEntries;
@property (nonatomic, retain) RWIProtocolCSSStyleId *styleId;
@property (nonatomic, copy) NSString *width;

- (id)cssProperties;
- (id)cssText;
- (id)height;
- (id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2;
- (id)range;
- (void)setCssProperties:(id)arg1;
- (void)setCssText:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setShorthandEntries:(id)arg1;
- (void)setStyleId:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)shorthandEntries;
- (id)styleId;
- (id)width;

@end
