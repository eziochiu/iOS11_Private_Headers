/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI> {
    MTLToolsPointerArray * _functions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) NSArray *externFunctionNames;
@property (readonly) NSArray *functionNames;
@property (nonatomic, readonly) MTLToolsPointerArray *functions;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (copy) NSString *overrideTriple;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)externFunctionNames;
- (id)functionNames;
- (id)functions;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id*)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id*)arg4;
- (id)overrideTriple;
- (void)setLabel:(id)arg1;
- (void)setOverrideTriple:(id)arg1;

@end
