/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPickerItem : NSObject {
    id /* block */  _selectionHandler;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ selectionHandler;
@property (nonatomic, copy) NSString *title;

+ (id)itemWithTitle:(id)arg1 selectionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)handleSelectionWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
