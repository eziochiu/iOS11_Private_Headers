/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCActivityInfo : SDFActivityInfo {
    NSData * _sharepointDocumentIdentifier;
}

@property (readonly, retain) NSData *sharepointDocumentIdentifier;

+ (id)activityInfoWithQueue:(id)arg1;
+ (id)activityInfoWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2;
- (id)sharepointDocumentIdentifier;

@end
