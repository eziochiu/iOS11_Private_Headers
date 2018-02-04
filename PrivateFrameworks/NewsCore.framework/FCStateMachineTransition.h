/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCStateMachineTransition : NSObject {
    <FCStateMachineContextType> * _context;
    FCStateMachineEvent * _event;
    FCStateMachineState * _fromState;
    FCStateMachine * _stateMachine;
    FCStateMachineState * _toState;
}

@property (nonatomic, retain) <FCStateMachineContextType> *context;
@property (nonatomic, retain) FCStateMachineEvent *event;
@property (nonatomic, retain) FCStateMachineState *fromState;
@property (nonatomic, retain) FCStateMachine *stateMachine;
@property (nonatomic, retain) FCStateMachineState *toState;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)event;
- (id)fromState;
- (id)initWithStateMachine:(id)arg1 event:(id)arg2 fromState:(id)arg3 toState:(id)arg4 context:(id)arg5;
- (void)setContext:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setFromState:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setToState:(id)arg1;
- (id)stateMachine;
- (id)toState;

@end
