/* made by EzioChiu.
 */

@protocol PTSRowObserver <NSObject>

@optional

- (void)rowDidChangeImage:(PTSRow *)arg1;
- (void)rowDidChangeTitle:(PTSRow *)arg1;
- (void)rowDidChangeValue:(PTSRow *)arg1;

@end
