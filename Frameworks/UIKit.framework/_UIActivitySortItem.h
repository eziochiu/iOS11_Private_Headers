/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivitySortItem : NSObject {
    UIActivity * _activity;
    long long  _group;
    id  _orderingValueWithinGroup;
}

@property (nonatomic, readonly) UIActivity *activity;
@property (nonatomic, readonly) long long group;
@property (nonatomic, readonly) id orderingValueWithinGroup;

+ (id)descriptorForActivity:(id)arg1 group:(long long)arg2 orderingValueWithinGroup:(id)arg3;

- (void).cxx_destruct;
- (id)activity;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (long long)group;
- (id)orderingValueWithinGroup;

@end
