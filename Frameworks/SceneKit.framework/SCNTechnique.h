/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTechnique : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {
    SCNOrderedDictionary * _animations;
    NSMutableDictionary * _bindings;
    unsigned int  _isPresentationInstance;
    struct __C3DFXTechnique { } * _technique;
    NSMutableDictionary * _valueForSymbol;
}

@property (readonly) NSArray *animationKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)techniqueBySequencingTechniques:(id)arg1;
+ (id)techniqueWithDictionary:(id)arg1;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customDecodingOfSCNTechnique:(id)arg1;
- (void)_customEncodingOfSCNTechnique:(id)arg1;
- (void)_didInstallInEngineContext:(struct __C3DEngineContext { }*)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (id)_symbolsAssignedValues;
- (void)_syncObjCAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { }*)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationInstance;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setValue:(id)arg1 forSymbolNamed:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (struct __C3DFXTechnique { }*)techniqueRef;
- (void)unbindAnimatablePath:(id)arg1;
- (id)valueForSymbolNamed:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

@end
