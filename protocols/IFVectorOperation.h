/* made by EzioChiu.
 */

@protocol IFVectorOperation <NSObject>

@required

- (<IFVector> *)operate:(id <IFVector>)arg1 v2:(id <IFVector>)arg2;

@end
