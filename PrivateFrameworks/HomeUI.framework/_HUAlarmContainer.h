/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface _HUAlarmContainer : NSObject <HFDiffableItemGroup> {
    NSArray * _diffableItems;
    NSString * _groupIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *diffableItems;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)containerWithAlarms:(id)arg1;

- (void).cxx_destruct;
- (id)diffableItems;
- (id)groupIdentifier;
- (void)setDiffableItems:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end
