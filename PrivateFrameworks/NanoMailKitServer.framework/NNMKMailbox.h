/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMailbox : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountId;
    NSString * _customName;
    unsigned long long  _filterType;
    bool  _hasSelection;
    NSString * _mailboxId;
    bool  _syncActive;
    bool  _syncEnabled;
    bool  _syncRequested;
    unsigned long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic) unsigned long long filterType;
@property (nonatomic) bool hasSelection;
@property (nonatomic, retain) NSString *mailboxId;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool syncActive;
@property (nonatomic) bool syncEnabled;
@property (nonatomic) bool syncRequested;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSURL *url;

+ (id)idsFromMailboxes:(id)arg1;
+ (unsigned long long)messageStateForMailboxFilterType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (unsigned long long)syncedTypeFromFilterType:(unsigned long long)arg1;
+ (unsigned long long)syncedTypeFromMailbox:(id)arg1;

- (void).cxx_destruct;
- (id)accountId;
- (void)addFilterType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)filterType;
- (bool)hasAnyFilter;
- (bool)hasCompoundFilters;
- (bool)hasFilterType:(unsigned long long)arg1;
- (bool)hasSelection;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterType:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (bool)isSelectedForFilterType:(unsigned long long)arg1;
- (id)mailboxId;
- (void)removeFilterType:(unsigned long long)arg1;
- (void)resetURL;
- (void)setAccountId:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setFilterType:(unsigned long long)arg1;
- (void)setHasSelection:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSyncActive:(bool)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setSyncRequested:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (bool)syncActive;
- (bool)syncEnabled;
- (bool)syncRequested;
- (unsigned long long)type;
- (id)url;

@end
