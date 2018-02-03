/* made by EzioChiu
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol> {
    id /* block */  _callback;
}

@property (copy) id /* block */ callback;

- (void).cxx_destruct;
- (void)callCallback:(bool)arg1 error:(id)arg2;
- (id /* block */)callback;
- (id)initWithCallback:(id /* block */)arg1;
- (void)setCallback:(id /* block */)arg1;

@end