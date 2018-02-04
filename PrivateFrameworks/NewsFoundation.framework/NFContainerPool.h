/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerPool : NSObject {
    unsigned long long  _depth;
    struct NSMutableDictionary { Class x1; } * _graph;
    NSMutableArray * _onDrainBlocks;
    struct NSMutableDictionary { Class x1; } * _singletons;
}

@property (nonatomic) unsigned long long depth;
@property (nonatomic, retain) NSMutableDictionary *graph;
@property (nonatomic, retain) NSMutableArray *onDrainBlocks;
@property (nonatomic, retain) NSMutableDictionary *singletons;

- (void).cxx_destruct;
- (unsigned long long)depth;
- (id)enter:(id /* block */)arg1;
- (struct NSMutableDictionary { Class x1; }*)graph;
- (id)init;
- (void)onDrain:(id /* block */)arg1;
- (id)onDrainBlocks;
- (void)setDepth:(unsigned long long)arg1;
- (void)setGraph:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setOnDrainBlocks:(id)arg1;
- (void)setSingletons:(struct NSMutableDictionary { Class x1; }*)arg1;
- (struct NSMutableDictionary { Class x1; }*)singletons;

@end
