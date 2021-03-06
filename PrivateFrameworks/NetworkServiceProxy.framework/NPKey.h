/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPKey : NSObject {
    NSData * _info;
    unsigned int  _session_counter;
    NSUUID * _uuid;
}

@property (readonly) NSPNetworkAgent *agentForKey;
@property (retain) NSData *info;
@property unsigned int session_counter;
@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)agentForKey;
- (id)data;
- (id)info;
- (id)initWithData:(id)arg1;
- (unsigned int)session_counter;
- (void)setInfo:(id)arg1;
- (void)setSession_counter:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
