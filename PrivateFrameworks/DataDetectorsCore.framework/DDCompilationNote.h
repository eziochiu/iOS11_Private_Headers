/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDCompilationNote : DDLocation {
    int  _level;
    NSString * _message;
}

@property (readonly) int level;
@property (readonly) NSString *message;

+ (id)noteAtLocation:(id)arg1 ofLevel:(int)arg2 withFormat:(id)arg3;

- (void)dealloc;
- (id)initWithFileName:(id)arg1 position:(struct __DDExpressionPosition { int x1; int x2; int x3; int x4; })arg2 message:(id)arg3 level:(int)arg4;
- (id)initWithLocation:(id)arg1 message:(id)arg2 level:(int)arg3;
- (int)level;
- (id)message;

@end
