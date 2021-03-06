/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfOutline : NSObject {
    unsigned long long  _count;
    struct __CFDictionary { } * _dictionaryRef;
    TSAPdfOutline * _firstChild;
    TSAPdfOutline * _lastChild;
    TSAPdfOutline * _next;
    unsigned long long  _pageNumber;
    TSAPdfOutline * _parent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
    TSAPdfOutline * _previous;
    NSString * _title;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) TSAPdfOutline *firstChild;
@property (nonatomic) TSAPdfOutline *lastChild;
@property (nonatomic) TSAPdfOutline *next;
@property (nonatomic, readonly) unsigned long long pageNumber;
@property (nonatomic) TSAPdfOutline *parent;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (nonatomic) TSAPdfOutline *previous;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)pdfOutlineWithTitle:(id)arg1 pageNumber:(unsigned long long)arg2 point:(struct CGPoint { double x1; double x2; })arg3;

- (unsigned long long)count;
- (void)dealloc;
- (struct __CFDictionary { }*)dictionaryRef;
- (id)firstChild;
- (id)initWithTitle:(id)arg1 pageNumber:(unsigned long long)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)lastChild;
- (id)next;
- (unsigned long long)pageNumber;
- (id)parent;
- (struct CGPoint { double x1; double x2; })point;
- (id)previous;
- (void)setCount:(unsigned long long)arg1;
- (void)setFirstChild:(id)arg1;
- (void)setLastChild:(id)arg1;
- (void)setNext:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPrevious:(id)arg1;
- (id)title;

@end
