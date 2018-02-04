/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMNode : NSObject {
    struct RefPtr<WebCore::Node> { 
        struct Node {} *m_ptr; 
    }  _impl;
}

@property (readonly) WKDOMDocument *document;
@property (readonly) WKDOMNode *firstChild;
@property (readonly) WKDOMNode *lastChild;
@property (readonly) WKDOMNode *nextSibling;
@property (readonly) WKDOMNode *parentNode;
@property (readonly) WKDOMNode *previousSibling;
@property (readonly) NSArray *textRects;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundleNodeHandle { }*)_copyBundleNodeHandleRef;
- (id)_initWithImpl:(struct Node { int (**x1)(); struct Weak<WebCore::JSDOMObject> { struct WeakImpl {} *x_2_1_1; } x2; int x3; unsigned int x4; struct ContainerNode {} *x5; struct TreeScope {} *x6; struct Node {} *x7; struct Node {} *x8; union DataUnion { struct RenderObject {} *x_9_1_1; struct NodeRareDataBase {} *x_9_1_2; } x9; }*)arg1;
- (void)appendChild:(id)arg1;
- (void)dealloc;
- (id)document;
- (id)firstChild;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)previousSibling;
- (void)removeChild:(id)arg1;
- (id)textRects;

@end
