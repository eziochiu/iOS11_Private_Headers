/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationInfo : NSObject {
    NSMutableDictionary * _animatablePropertyStates;
    NSMutableDictionary * _isPartOfHigherOrderProperty;
    NSObject<OS_dispatch_queue> * _lockingQueue;
    NSMutableDictionary * _modifierGroupRequestHandlers;
    NSMutableDictionary * _presentationModifiers;
}

@property (nonatomic, retain) NSMutableDictionary *animatablePropertyStates;
@property (nonatomic, retain) NSMutableDictionary *isPartOfHigherOrderProperty;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockingQueue;
@property (nonatomic, retain) NSMutableDictionary *modifierGroupRequestHandlers;
@property (nonatomic, retain) NSMutableDictionary *presentationModifiers;

- (void).cxx_destruct;
- (id)animatablePropertyStateForKey:(id)arg1;
- (id)animatablePropertyStateKeys;
- (id)animatablePropertyStates;
- (id)existingAnimatablePropertyStateForKey:(id)arg1;
- (id)init;
- (id)isPartOfHigherOrderProperty;
- (id)lockingQueue;
- (id)modifierGroupRequestHandlerForKey:(id)arg1;
- (id)modifierGroupRequestHandlers;
- (void)performWithLock:(id /* block */)arg1;
- (id)presentationModifierForKey:(id)arg1;
- (id)presentationModifiers;
- (void)setAnimatablePropertyState:(id)arg1 forKey:(id)arg2;
- (void)setAnimatablePropertyStates:(id)arg1;
- (void)setIsPartOfHigherOrderProperty:(id)arg1;
- (void)setLockingQueue:(id)arg1;
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;
- (void)setModifierGroupRequestHandlers:(id)arg1;
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;
- (void)setPresentationModifiers:(id)arg1;

@end
