/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPCSChainEnumerator : NSEnumerator {
    BRCPrivateClientZone * _clientZone;
    bool  _failed;
    unsigned long long  _maxPathDepth;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (bool)failed;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)nextObject;

@end
