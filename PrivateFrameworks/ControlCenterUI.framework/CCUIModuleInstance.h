/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIModuleInstance : NSObject <NSCopying> {
    CCSModuleMetadata * _metadata;
    <CCUIContentModule> * _module;
    struct CCUILayoutSize { 
        unsigned long long width; 
        unsigned long long height; 
    }  _prototypeModuleSize;
}

@property (nonatomic, readonly) CCSModuleMetadata *metadata;
@property (nonatomic, readonly) <CCUIContentModule> *module;
@property (nonatomic, readonly) struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; } prototypeModuleSize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMetadata:(id)arg1 module:(id)arg2 prototypeModuleSize:(struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })arg3;
- (id)metadata;
- (id)module;
- (struct CCUILayoutSize { unsigned long long x1; unsigned long long x2; })prototypeModuleSize;

@end