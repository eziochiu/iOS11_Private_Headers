/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriRequest : NSObject {
    double  _delaySecs;
    unsigned int  _flags;
    id  _owner;
    id /* block */  _speechCompletion;
    VSSpeechRequest * _speechRequest;
    id /* block */  _speechStartHandler;
    unsigned long long  _startTicks;
    bool  _synthesizing;
}

@property (nonatomic) double delaySecs;
@property (nonatomic) unsigned int flags;
@property (nonatomic, retain) id owner;
@property (nonatomic, copy) id /* block */ speechCompletion;
@property (nonatomic, retain) VSSpeechRequest *speechRequest;
@property (nonatomic, copy) id /* block */ speechStartHandler;
@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) bool synthesizing;

- (void).cxx_destruct;
- (double)delaySecs;
- (unsigned int)flags;
- (id)owner;
- (void)setDelaySecs:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setOwner:(id)arg1;
- (void)setSpeechCompletion:(id /* block */)arg1;
- (void)setSpeechRequest:(id)arg1;
- (void)setSpeechStartHandler:(id /* block */)arg1;
- (void)setStartTicks:(unsigned long long)arg1;
- (void)setSynthesizing:(bool)arg1;
- (id /* block */)speechCompletion;
- (id)speechRequest;
- (id /* block */)speechStartHandler;
- (unsigned long long)startTicks;
- (bool)synthesizing;

@end