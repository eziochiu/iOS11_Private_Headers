/* made by EzioChiu.
 */

@protocol IFVectorOperationScalar <NSObject>

@required

- (double)operate:(id <IFVector>)arg1 v2:(id <IFVector>)arg2;

@end
