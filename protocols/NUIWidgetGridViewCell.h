/* made by EzioChiu.
 */

@protocol NUIWidgetGridViewCell

@required

- (struct { double x1; double x2; })donatableSpace;
- (struct { double x1; double x2; })donatableSpaceAllowRemeasure:(bool)arg1;
- (unsigned long long)index;
- (id)initWithWidgetGridView:(NUIWidgetGridView *)arg1 item:(id <NUIWidgetGridViewItem>)arg2 index:(unsigned long long)arg3;

@end
