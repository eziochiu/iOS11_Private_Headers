/* made by EzioChiu.
 */

@protocol IKStyleableElement

@required

- (NSString *)elementName;
- (<IKStyleableElement> *)parentStyleableElement;
- (void)setStyleComposer:(IKViewElementStyleComposer *)arg1;
- (IKViewElementStyleComposer *)styleComposer;

@end
