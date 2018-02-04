/* made by EzioChiu.
 */

@protocol IFVectorOperating <NSObject>

@required

- (<IFVector> *)performOperation:(id <IFVectorOperation>)arg1 other:(id <IFVector>)arg2;
- (double)performScalarOperation:(id <IFVectorOperationScalar>)arg1 other:(id <IFVector>)arg2;

@end
