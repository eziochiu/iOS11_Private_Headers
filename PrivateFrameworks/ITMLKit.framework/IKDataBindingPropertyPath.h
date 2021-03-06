/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDataBindingPropertyPath : IKDataBindingValue {
    NSArray * _accessorSequence;
    NSString * _string;
}

@property (nonatomic, readonly, copy) NSArray *accessorSequence;
@property (nonatomic, readonly, copy) NSString *string;

+ (id)pathStringForAccessorSequence:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAccessorSequence:(id)arg1;
- (id)accessorSequence;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)propertyPathByCombiningAccesserSequence:(id)arg1;
- (id)string;

@end
