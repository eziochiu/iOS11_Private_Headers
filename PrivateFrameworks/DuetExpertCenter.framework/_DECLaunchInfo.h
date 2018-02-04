/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECLaunchInfo : NSObject <NSSecureCoding> {
    unsigned char  _consumerSubtype;
    long long  _itemsShownCount;
    NSDictionary * _itemsShownCounts;
    long long  _launchSource;
    NSString * _query;
}

@property (nonatomic, readonly) unsigned char consumerSubtype;
@property (nonatomic, readonly) long long itemsShownCount;
@property (nonatomic, readonly) NSDictionary *itemsShownCounts;
@property (nonatomic, readonly) long long launchSource;
@property (nonatomic, readonly) NSString *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)consumerSubtype;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaunchSource:(long long)arg1 query:(id)arg2 itemsShownCount:(long long)arg3 itemsShownCounts:(id)arg4 consumerSubtype:(unsigned char)arg5;
- (long long)itemsShownCount;
- (id)itemsShownCounts;
- (long long)launchSource;
- (id)query;

@end