/* made by EzioChiu.
 */

@protocol TSWPReplaceAction <NSObject>

@required

- (long long)delta;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertedRange;
- (void)performWithStorage:(void *)arg1 delta:(void *)arg2 undoTransaction:(void *)arg3 replaceBlock:(void *)arg4; // needs 4 arg types, found 10: TSWPStorage *, long long, struct TSWPStorageTransaction { struct vector<TSWPStorageTransactionObject, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_1_1_1; struct TSWPStorageTransactionObject {} *x_1_1_2; struct __compressed_pair<TSWPStorageTransactionObject *, std::__1::allocator<TSWPStorageTransactionObject> > { struct TSWPStorageTransactionObject {} *x_3_2_1; } x_1_1_3; } x1; unsigned long long x2; unsigned long long x3; }*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSWPSelection *, NSString *, void*
- (unsigned long long)targetCharIndex;

@end
