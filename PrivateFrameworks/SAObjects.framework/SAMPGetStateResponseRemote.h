/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (nonatomic, retain) SAMPGetState *getState;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) double routeTimeout;

+ (id)getStateResponseRemote;
+ (id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)getState;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (double)routeTimeout;
- (void)setGetState:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setRouteTimeout:(double)arg1;

@end
