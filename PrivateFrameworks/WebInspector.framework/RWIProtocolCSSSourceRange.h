/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (nonatomic) int endColumn;
@property (nonatomic) int endLine;
@property (nonatomic) int startColumn;
@property (nonatomic) int startLine;

- (int)endColumn;
- (int)endLine;
- (id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;
- (void)setEndColumn:(int)arg1;
- (void)setEndLine:(int)arg1;
- (void)setStartColumn:(int)arg1;
- (void)setStartLine:(int)arg1;
- (int)startColumn;
- (int)startLine;

@end
