/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttachmentChange : EKObjectChange

+ (void)fetchAttachmentChangesInCalendar:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttachmentChangesInSource:(id)arg1 resultHandler:(id /* block */)arg2;
+ (void)fetchAttachmentChangesInStore:(id)arg1 resultHandler:(id /* block */)arg2;

@end
