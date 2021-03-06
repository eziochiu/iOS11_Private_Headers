/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBQuietModeOverrideAssertion : NSObject {
    BSAction * _assertionAction;
    id /* block */  _invalidationHandler;
}

@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAction:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
