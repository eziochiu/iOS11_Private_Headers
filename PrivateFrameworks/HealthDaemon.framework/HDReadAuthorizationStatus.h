/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDReadAuthorizationStatus : NSObject {
    NSNumber * _authorizationAnchor;
    bool  _isAuthorized;
    NSSet * _restrictedSourceEntities;
}

@property (nonatomic, readonly, copy) NSNumber *authorizationAnchor;
@property (nonatomic, readonly) bool isAuthorized;
@property (nonatomic, readonly, copy) NSSet *restrictedSourceEntities;

- (void).cxx_destruct;
- (id)authorizationAnchor;
- (id)initWithReadAuthorizationStatus:(bool)arg1 restrictedSourceEntities:(id)arg2 authorizationAnchor:(id)arg3;
- (bool)isAuthorized;
- (id)restrictedSourceEntities;

@end
