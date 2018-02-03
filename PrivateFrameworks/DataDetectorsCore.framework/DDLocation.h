/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDLocation : NSObject <NSCoding> {
    NSString * _fileName;
    int  _firstColumn;
    int  _firstLine;
    int  _lastColumn;
    int  _lastLine;
}

@property (readonly, copy) NSString *fileName;
@property (readonly) int firstColumn;
@property (readonly) int firstLine;
@property (readonly) int lastColumn;
@property (readonly) int lastLine;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (int)firstColumn;
- (int)firstLine;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileName:(id)arg1 firstLine:(int)arg2 firstColumn:(int)arg3 lastLine:(int)arg4 lastColumn:(int)arg5;
- (id)initWithFileName:(id)arg1 position:(struct __DDExpressionPosition { int x1; int x2; int x3; int x4; })arg2;
- (int)lastColumn;
- (int)lastLine;
- (struct __DDExpressionPosition { int x1; int x2; int x3; int x4; })position;

@end
