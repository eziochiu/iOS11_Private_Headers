/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWOutboundMessage : NWMessage {
    NSObject<OS_nw_outbound_message> * _internalMessage;
}

@property (nonatomic) unsigned long long deadlineMilliseconds;
@property (retain) NSObject<OS_nw_outbound_message> *internalMessage;
@property (nonatomic) unsigned int relativePriority;

- (void).cxx_destruct;
- (void)addAntecedent:(id)arg1;
- (unsigned long long)deadlineMilliseconds;
- (id)initWithContent:(id)arg1;
- (id)initWithInternalMessage:(id)arg1;
- (id)internalMessage;
- (unsigned int)relativePriority;
- (void)setDeadlineMilliseconds:(unsigned long long)arg1;
- (void)setInternalMessage:(id)arg1;
- (void)setNumber:(unsigned long long)arg1 forDomain:(id)arg2 key:(id)arg3;
- (void)setRelativePriority:(unsigned int)arg1;

@end