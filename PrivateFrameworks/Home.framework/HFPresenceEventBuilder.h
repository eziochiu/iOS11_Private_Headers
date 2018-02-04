/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPresenceEventBuilder : HFEventBuilder <HFLocationEventBuilder> {
    unsigned long long  _activationGranularity;
    unsigned long long  _eventType;
    HFSelectedUserCollection * _users;
}

@property (nonatomic) unsigned long long activationGranularity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, readonly) unsigned long long presenceUserType;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFSelectedUserCollection *users;

+ (id)_selectedUsersForPresenceEvent:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)activationGranularity;
- (id)buildNewEventFromCurrentState;
- (id)description;
- (unsigned long long)eventType;
- (id)initWithEvent:(id)arg1;
- (unsigned long long)presenceEventType;
- (unsigned long long)presenceUserType;
- (void)setActivationGranularity:(unsigned long long)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setUsers:(id)arg1;
- (id)users;

@end