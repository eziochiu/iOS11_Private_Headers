/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSBagKey : NSObject {
    <NSObject> * _defaultValue;
    NSArray * _stringRepresentation;
    unsigned long long  _valueType;
}

@property (nonatomic, readonly) <NSObject> *defaultValue;
@property (nonatomic, readonly) NSArray *stringRepresentation;
@property (nonatomic, readonly) unsigned long long valueType;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2;
- (id)initWithStringRepresentation:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)stringRepresentation;
- (id)valueFromDictionary:(id)arg1;
- (unsigned long long)valueType;

@end