/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRowAction : NSObject <NSCopying> {
    bool  _deselectRowOnSuccess;
    id /* block */  _handler;
}

@property (nonatomic) bool deselectRowOnSuccess;
@property (nonatomic, copy) id /* block */ handler;

+ (id)action;
+ (id)actionWithHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deselectRowOnSuccess;
- (id /* block */)handler;
- (id)init;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (void)setDeselectRowOnSuccess:(bool)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
