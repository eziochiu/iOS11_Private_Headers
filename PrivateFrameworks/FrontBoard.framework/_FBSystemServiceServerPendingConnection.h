/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSystemServiceServerPendingConnection : NSObject {
    id /* block */  _completion;
    FBSystemServiceFacility * _facility;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) FBSystemServiceFacility *facility;

+ (id)pendingConnectionToFacility:(id)arg1 completion:(id /* block */)arg2;

- (id /* block */)completion;
- (void)dealloc;
- (id)facility;
- (id)initWithFacility:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFacility:(id)arg1;

@end
