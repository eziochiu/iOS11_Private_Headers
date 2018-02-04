/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBObjectToRepresentationCoercion : NSObject {
    NSMutableDictionary * _coercionBlockByType;
    Class  _theClass;
    NSMutableOrderedSet * _typeOrder;
}

@property (nonatomic, retain) NSMutableDictionary *coercionBlockByType;
@property (nonatomic, retain) Class theClass;
@property (nonatomic, retain) NSMutableOrderedSet *typeOrder;

- (void).cxx_destruct;
- (void)addCoercionToType:(id)arg1 block:(id /* block */)arg2;
- (id)availableExportTypes;
- (bool)canCoerceToType:(id)arg1;
- (id)coercionBlockByType;
- (void)createRepresentationOfType:(id)arg1 fromObject:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithClass:(Class)arg1;
- (void)setCoercionBlockByType:(id)arg1;
- (void)setTheClass:(Class)arg1;
- (void)setTypeOrder:(id)arg1;
- (Class)theClass;
- (id)typeOrder;

@end