/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSPropertyInfo : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *longhands;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *values;

- (id)initWithName:(id)arg1;
- (id)longhands;
- (id)name;
- (void)setLonghands:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
