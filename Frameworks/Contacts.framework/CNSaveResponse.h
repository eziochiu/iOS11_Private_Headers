/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSaveResponse : NSObject <NSSecureCoding> {
    NSMutableDictionary * _contactSnapshotsByIndexPath;
    NSMutableDictionary * _containerSnapshotsByIndexPath;
    NSMutableDictionary * _groupSnapshotsByIndexPath;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applySnapshotsToSaveRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
