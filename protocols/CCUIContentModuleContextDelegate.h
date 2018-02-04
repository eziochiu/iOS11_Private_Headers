/* made by EzioChiu.
 */

@protocol CCUIContentModuleContextDelegate <NSObject>

@required

- (void)contentModuleContext:(CCUIContentModuleContext *)arg1 enqueueStatusUpdate:(CCUIStatusUpdate *)arg2;
- (void)dismissExpandedViewForContentModuleContext:(CCUIContentModuleContext *)arg1;
- (void)requestExpandModuleForContentModuleContext:(CCUIContentModuleContext *)arg1;

@end
