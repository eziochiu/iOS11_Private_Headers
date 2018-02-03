/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate * _private;
}

- (void)advance;
- (bool)atEnd;
- (id)currentNode;
- (id)currentRange;
- (id)currentText;
- (unsigned long long)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

@end
