/* made by EzioChiu.
 */

@protocol VNClustererModelBuilding

@required

- (bool)cancelClustering:(id*)arg1;
- (bool)resetModelState:(NSData *)arg1 error:(id*)arg2;
- (NSData *)saveAndReturnCurrentModelState:(id*)arg1;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 andRemovingFaces:(NSArray *)arg2 error:(id*)arg3;

@optional

- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)updateModelByRemovingFaces:(NSArray *)arg1 error:(id*)arg2;

@end
