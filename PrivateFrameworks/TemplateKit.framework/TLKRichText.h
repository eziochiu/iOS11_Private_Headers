/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRichText : TLKMultilineText {
    NSArray * _formattedTextItems;
}

@property (retain) NSArray *formattedTextItems;
@property (readonly) bool hasContent;

- (void).cxx_destruct;
- (id)description;
- (id)formattedTextItems;
- (bool)hasContent;
- (id)observableProperties;
- (void)setFormattedTextItems:(id)arg1;
- (id)text;

@end
