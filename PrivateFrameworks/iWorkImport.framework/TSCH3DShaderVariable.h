/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderVariable : NSObject <NSCopying> {
    unsigned long long  mArraySize;
    NSArray * mElements;
    TSCH3DShaderVariable * mGenericName;
    bool  mIsSpecial;
    NSString * mName;
    struct NSString { Class x1; } * mPrecision;
    struct TSCH3DShaderType { 
        unsigned long long mValue; 
    }  mShaderType;
    struct NSString { Class x1; } * mType;
}

@property (nonatomic, readonly) unsigned long long arraySize;
@property (nonatomic, readonly) TSCH3DShaderVariable *genericName;
@property (nonatomic, readonly) struct TSCH3DShaderType { unsigned long long x1; } initialLinkType;
@property (nonatomic, readonly) bool isSpecial;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *precision;
@property (nonatomic, readonly) struct TSCH3DShaderType { unsigned long long x1; } shaderType;
@property (nonatomic, readonly) NSString *type;

+ (id)variableWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType { unsigned long long x1; })arg5 isSpecial:(bool)arg6 generic:(id)arg7;

- (id).cxx_construct;
- (unsigned long long)arraySize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)genericName;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType { unsigned long long x1; })arg5 isSpecial:(bool)arg6 generic:(id)arg7;
- (struct TSCH3DShaderType { unsigned long long x1; })initialLinkType;
- (bool)isEqual:(id)arg1;
- (bool)isSpecial;
- (id)name;
- (struct NSString { Class x1; }*)precision;
- (struct TSCH3DShaderType { unsigned long long x1; })shaderType;
- (struct NSString { Class x1; }*)type;
- (id)variableAtIndex:(unsigned long long)arg1;

@end