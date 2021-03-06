/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHCallbackAnimationDelegate : NSObject <CAAnimationDelegate> {
    SEL  selector;
    id  target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SEL selector;
@property (readonly) Class superclass;
@property (nonatomic, retain) id target;

- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)dealloc;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
