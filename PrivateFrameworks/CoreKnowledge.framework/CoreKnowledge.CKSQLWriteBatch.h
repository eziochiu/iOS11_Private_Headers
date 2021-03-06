/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CoreKnowledge.CKSQLWriteBatch : CoreKnowledge.CKAbstractWriteBatch <CKKnowledgeStoreWriteBatch> {
    void queue;
}

- (bool)writeAndReturnError:(id*)arg1;
- (void)writeWithCompletionHandler:(id /* block */)arg1;

@end
