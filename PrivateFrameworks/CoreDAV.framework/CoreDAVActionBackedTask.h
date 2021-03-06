/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVActionBackedTask : CoreDAVTask {
    CoreDAVAction * _backingAction;
}

@property (nonatomic, retain) CoreDAVAction *backingAction;

- (void).cxx_destruct;
- (id)backingAction;
- (id)description;
- (void)setBackingAction:(id)arg1;

@end
