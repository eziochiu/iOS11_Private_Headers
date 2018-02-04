/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputControl : NSObject <WKFormPeripheral> {
    struct RetainPtr<id<WKFormControl> > { 
        void *m_ptr; 
    }  _control;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (id)initWithView:(id)arg1;

@end
